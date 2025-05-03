/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgutie <jorgutie@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 16:00:13 by jorgutie          #+#    #+#             */
/*   Updated: 2025/05/03 14:13:20 by jorgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

// Constructor
HumanB::HumanB(const std::string &name): _name(name), _weapon(nullptr)
{
	
}

// To set the weapon to humanB
void HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon; // since _weapon is a POINTER we should set the Address
}

// To attack checking if its armed or not
void HumanB::attack()const
{
	if (_weapon)
	{
		std::cout << YELLOW << _name << RESET
			  << " attacks with their "
			  << MAGENTA << _weapon->getType() << RESET
			  << std::endl;
	}
	else
	{
		std::cout << YELLOW << _name << RESET
			  << RED << " has no weapon to attack " << RESET
			  << std::endl;
	}
	
}