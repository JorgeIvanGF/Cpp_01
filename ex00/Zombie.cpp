/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgutie <jorgutie@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 17:26:46 by jorgutie          #+#    #+#             */
/*   Updated: 2025/04/27 20:03:46 by jorgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Constructor and initialization list
Zombie::Zombie(std::string name) : _name(name)
{
}

// Destructor with the message (it's NOT manually called)
Zombie::~Zombie()
{
    std::cout << _name << RED << " has been destroyed" << RESET << std::endl;
}


// Member function to announce
void Zombie::announce() const
{
        
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}