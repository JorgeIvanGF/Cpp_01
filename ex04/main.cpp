/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgutie <jorgutie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 14:47:59 by jorgutie          #+#    #+#             */
/*   Updated: 2025/05/04 15:50:26 by jorgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Colors
#define RESET   "\033[0m"
#define YELLOW  "\033[0;33m"
#define MAGENTA "\033[0;35m"
#define RED "\033[0;31m"

#include <iostream>
#include <fstream> // to open the file

// 1) Open the input file
bool openFile(const std::string &filename, std::ifstream &input)
{
	input.open(filename);
	if (!input.is_open()) {
		std::cerr << RED
				  << "Error: Could not open file "
				  << YELLOW << filename << RESET
				  << '\n';
		return false;
	}
	return true;
}

// 2) Read and storage the entire content of 'input' in 'content'
bool readFile(std::ifstream& input, std::string& content) 
{
	std::string line;
	while (std::getline(input, line)) 
	{
		content += line;
		content += '\n';
	}
	if (input.bad())
	{
		std::cerr << RED
				  << "Error: Failed while reading input file"
				  << RESET << '\n';
		return false;
	}
	input.close();
	return true;
}

// 3) Replace all occurrences of s1 with s2 in-place
void replaceStrings(std::string& content,
	const std::string& s1, const std::string& s2)
{
	size_t pos = 0;
	while ((pos = content.find(s1, pos)) != std::string::npos)
	{
		content.erase(pos, s1.length()); // Remove s1 from content
		content.insert(pos, s2); // Insert s2 in its place
		pos += s2.length(); // move pos to the end of s2
	}
}

// 4) Write 'content' to filename + ".replace"
bool writeFile(const std::string& filename, const std::string& content)
{
    const std::string outName = filename + ".replace";
    std::ofstream output(outName);  // direct std::string overload
    if (!output.is_open())
	{
        std::cerr << RED
                  << "Error: Could not create file "
                  << YELLOW << outName << RESET
                  << '\n';
        return false;
    }
    output << content;
    if (!output)
	{
        std::cerr << RED
                  << "Error: Failed while writing to file "
                  << YELLOW << outName << RESET
                  << '\n';
        return false;
    }
    output.close();
    return true;
}

int main(int ac, char **av)
{
	// Check if 3 args
	if(ac == 4)
	{
		// Assignments of the args
		const std::string filename = av[1];
		const std::string s1 = av[2];
		const std::string s2 = av[3];

		// Check if S1 empty
		if(s1.empty())
		{
			std::cerr << RED << "Error: s1 can't be empty" 
					  << RESET << std::endl;
			return 1;
		}
				
		// Open the file using input_file stream object,
		// similar to "std::cin", but from a file not "user input"
		std::ifstream input; 		
		if (!openFile(filename, input)) 
			return 1; 
	
		// To read and storage the content of the file in one string
		std::string content; 
		if (!readFile(input, content))
			return 1;
		
		// The Replacement of the strings
		replaceStrings(content, s1, s2);
		
		// The  Write to a new file part
		if (!writeFile(filename, content))
			return 1;		
	}
	else
	{
		std::cerr << RED << "Error: Invalid number of arguments." 
				  << RESET << std::endl;
		return 1;
	}
	return 0;
}