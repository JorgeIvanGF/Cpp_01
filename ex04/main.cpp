/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgutie <jorgutie@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 14:47:59 by jorgutie          #+#    #+#             */
/*   Updated: 2025/05/03 18:17:46 by jorgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Colors
#define RESET   "\033[0m"
#define YELLOW  "\033[0;33m"
#define MAGENTA "\033[0;35m"
#define RED "\033[0;31m"

#include <iostream>
#include <fstream> // to open the file

int main(int ac, char **av)
{
	// Check if 3 args
	if(ac == 4)
	{
		// Assignments of the args __________________________________________________
		std::string filename = av[1];
		std::string s1 = av[2];
		std::string s2 = av[3];

		// S1 empty
		if(s1.empty())
		{
			std::cerr << RED << "Error: s1 can't be empty" 
					  << RESET << std::endl;
			return 1;
		}
		
		// To open the file __________________________________________________________
		std::ifstream input(filename.c_str());
		
		// Check failure if not open
		if (!input.is_open()) 
		{
			std::cerr << RED << "Error: Could not open file " 
					  << YELLOW << filename << RESET << std::endl;
			return 1;
		}
		
		// Copying part ___________________________________________________________
		std::string content; // To store in a single string the file content
		std::string line; // To get one line at a time
		while (std::getline(input, line)) // Loop To pull line by line from content to the string
		{
			content += line;
			content += '\n';
		}
		input.close();

		// Find-Replace part_______________________________________________________
		size_t pos = 0; // To track the position
		while((pos = content.find(s1,pos)) != std::string::npos)
		{
			// Remove s1 from content
			content.erase(pos, s1.length());
			
			// Insert s2 in its place
			content.insert(pos, s2);

			// move pos to the end of s2
			pos += s2.length();
		}

		// Write to output file _____________________________________________________
		std::string outName = filename + ".replace"; // Creates the output filename
		
		std::ofstream output(outName.c_str());
		if (!output.is_open()) 
		{
			std::cerr << RED << "Error: Could not create file " 
					  << YELLOW << outName << RESET << std::endl;
			return 1;
		}
		
		output << content;
		output.close();
		
	}
	else
	{
		std::cerr << RED << "Error: Invalid number of arguments." 
				  << RESET << std::endl;
		return 1;
	}
}