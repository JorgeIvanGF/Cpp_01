/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgutie <jorgutie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 14:37:58 by jorgutie          #+#    #+#             */
/*   Updated: 2025/05/02 15:02:29 by jorgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Colors
#define RESET   "\033[0m"
#define YELLOW  "\033[0;33m"
#define MAGENTA "\033[0;35m"

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN"; // the initial string

    std::string *stringPTR = &str; // the Pointer
    std::string &stringREF = str; // the Reference

    // The printing Addresses part
    std::cout << MAGENTA << "The printing Addresses part" << RESET << std::endl;
    std::cout << "The memory address of the string variable: " << YELLOW << &str <<RESET <<std::endl;
    std::cout << "The memory address held by stringPTR: " << YELLOW << stringPTR << RESET <<std::endl;
    std::cout << "The memory address held by stringREF: " << YELLOW << &stringREF << RESET <<std::endl;
    
    // The printing Values part
    std::cout << MAGENTA << "\nThe printing Values part" << RESET << std::endl;
    std::cout << "The value of the string variable: " << YELLOW << str << RESET <<std::endl;
    std::cout << "The value pointed to by stringPTR: " << YELLOW << *stringPTR << RESET <<std::endl;
    std::cout << "The value pointed to by stringREF: " << YELLOW << stringREF << RESET <<std::endl;
    
    return 0;
}