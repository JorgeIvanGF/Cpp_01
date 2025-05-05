/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgutie <jorgutie@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 15:36:59 by jorgutie          #+#    #+#             */
/*   Updated: 2025/05/05 09:36:12 by jorgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

// Colors
#define RESET   "\033[0m"
#define RED     "\033[0;31m"
#define GREEN   "\033[0;32m"
#define YELLOW  "\033[0;33m"
#define BLUE    "\033[0;34m"
#define MAGENTA "\033[0;35m"
#define CYAN    "\033[0;36m"
#define WHITE   "\033[0;37m"

class Zombie
{
	private:
		std::string _name; // Zombie's name
		
	public:
		Zombie(std::string name); // Constructor
		~Zombie(); // Destructor

		// Function to announce 'const' bc NOT change the Object
		void announce() const; 

};

// Declaration of the functions
Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif