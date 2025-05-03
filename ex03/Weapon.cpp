/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgutie <jorgutie@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 16:00:09 by jorgutie          #+#    #+#             */
/*   Updated: 2025/05/03 13:13:12 by jorgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

// Constructor with the type of weapon
Weapon::Weapon(const std::string& type): _type(type)
{
	
}

// Member function to get the type of weapon
const std::string& Weapon::getType() const 
{
	return _type;
}

// Member function to set the new type of weapon
void Weapon::setType(const std::string& type)
{
	_type = type;
}
