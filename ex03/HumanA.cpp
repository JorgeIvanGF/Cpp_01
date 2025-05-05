/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgutie <jorgutie@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 16:00:17 by jorgutie          #+#    #+#             */
/*   Updated: 2025/05/05 10:14:54 by jorgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanA.hpp"

// Definition of the Constructor (initialization list)
HumanA::HumanA(const std::string &name, Weapon &weapon): _name(name), _weapon(weapon) 
{}

// Definition of the Member function Attack
void HumanA::attack()const
{
	std::cout << YELLOW << _name << RESET
			  << " attacks with their "
			  << MAGENTA << _weapon.getType() << RESET
			  << std::endl;
}