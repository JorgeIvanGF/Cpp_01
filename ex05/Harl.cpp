/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgutie <jorgutie@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 18:18:53 by jorgutie          #+#    #+#             */
/*   Updated: 2025/05/05 11:47:51 by jorgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup"
			  << " burger. I really do!" << std::endl;
}

void Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough "
			  << "bacon in my burger! If you did, I wouldn't be asking for more!"
			  << std::endl;
}

void Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for "
			  << "years, whereas you started working here just last month."
			  << std::endl;
}

void Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now."
			  << std::endl;
}

void Harl::complain( std::string level)
{
	// The creation of the Type definition
	// for “pointer to a Harl member function"
	typedef void (Harl::*HarlFunc)();
	
	// Creation of Dispatch table:	
	// With the names
	static const std::string names[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	// With the functions
	static const HarlFunc actions[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	// Search for the matching name
	for (int i = 0; i < 4; ++i) 
	{
		if (names[i] == level) 
		{
			// Call the right method on this object:
			std::cout << "Level: " << YELLOW << level << RESET << std::endl;
			(this->*actions[i])();
			return;
		}
	}
	std::cout <<RED << "No complaints at this level: " << YELLOW << level << RESET << std::endl;
}