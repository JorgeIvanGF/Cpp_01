/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgutie <jorgutie@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 14:02:25 by jorgutie          #+#    #+#             */
/*   Updated: 2025/05/05 10:02:16 by jorgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Default constructor
Zombie::Zombie()
{
    std::cout << YELLOW <<"A Zombie was created without a name!" << RESET << std::endl;
}

// Constructor with name (initialization list)
Zombie::Zombie(std::string name) : _name(name)
{
}

// Destructor
Zombie::~Zombie()
{
    std::cout << MAGENTA << _name << RED << " has been destroyed" << RESET << std::endl;
}

// Member function: announce
void Zombie::announce() const
{
    std::cout << MAGENTA << _name << RESET << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

// Member function: setName
void Zombie::set_name(std::string name)
{
    _name = name;
}