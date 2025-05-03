/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgutie <jorgutie@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 15:49:31 by jorgutie          #+#    #+#             */
/*   Updated: 2025/05/03 14:04:41 by jorgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB__CPP

#include "Weapon.hpp"

class HumanB
{
	private:
		// Weapon type Pointer because:
		// * it could be NULL at the construction of the HumanB (unarmed)
		// * can change which Weapon it points to by calling setWeapon
		// * optional check _weapon for null before using it
		Weapon *_weapon; 
		std::string _name;
	
	public:
		// Default Constructor without a weapon
		HumanB(const std::string &name); 
		
		// Member functions
		void attack()const; // To attack
		void setWeapon(Weapon &weapon); // To set the weapon for HumanB
	
};
#endif