/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgutie <jorgutie@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 14:47:59 by jorgutie          #+#    #+#             */
/*   Updated: 2025/05/03 17:19:01 by jorgutie         ###   ########.fr       */
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

        // To open the file __________________________________________________________
        std::ifstream input(filename.c_str());
        
        // Check failure if not open
        if (!input.is_open()) 
        {
            std::cerr << RED << "Error: Could not open file " 
                      << filename << RESET << std::endl;
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
    }
    else
    {
        std::cerr << RED << "Error: Invalid number of arguments." 
                  << RESET << std::endl;
        return 1;
    }
}