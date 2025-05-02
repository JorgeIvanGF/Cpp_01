/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgutie <jorgutie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 15:49:31 by jorgutie          #+#    #+#             */
/*   Updated: 2025/05/02 15:52:26 by jorgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
    private:
        Weapon _weapon;
        std::string _name;
    
    public:
        HumanB(); // Default Constructor
        HumanB(Weapon weapon); //Constructor with weapon
        
        std::string attack(); 
    
};