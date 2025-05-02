/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgutie <jorgutie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 15:44:57 by jorgutie          #+#    #+#             */
/*   Updated: 2025/05/02 15:54:32 by jorgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
    private:
        Weapon _weapon;
        std::string _name;
    
    public:
        HumanA(std::string name, Weapon weapon); //Constructor
        
        std::string attack(); 
    
};