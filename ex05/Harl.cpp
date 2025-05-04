/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgutie <jorgutie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 18:18:53 by jorgutie          #+#    #+#             */
/*   Updated: 2025/05/04 22:56:05 by jorgutie         ###   ########.fr       */
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

	// Points to one of the member fns (in this case "debug")
	HarlFunc funcPtr = Harl::debug;

	// It is need an Object of the class to call the funcPtr
	Harl h;
	(h.*funcPtr)(); // call the method that ptr points to, on the object h
	
	
}