/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgutie <jorgutie@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 15:44:57 by jorgutie          #+#    #+#             */
/*   Updated: 2025/05/05 10:11:57 by jorgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	private:
		Weapon &_weapon;
		std::string _name;
	
	public:
		// Constructor
		// Use "&weapon" to guarantee ALWAYS should be a VALID weapon to ensure "HumanA will always be armed" 
		// if not, we could use Pointer (it accepts NULL, while "&" Not)
		HumanA(const std::string &name, Weapon &weapon);
		
		void attack()const; // Function to attack (it doesnot modify any data of teh class => "const")
	
};
#endif