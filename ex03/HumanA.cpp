/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgutie <jorgutie@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 16:00:17 by jorgutie          #+#    #+#             */
/*   Updated: 2025/05/03 13:23:14 by jorgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanA.hpp"

// Definition of the Constructor
HumanA::HumanA(const std::string &name, Weapon &weapon): _name(name), _weapon(weapon) 
{}

// Definition of the Member function Attack
void HumanA::attack()const
{
	std::cout << _name
			  << " attacks with their "
			  << _weapon.getType()
			  << std::endl;
}