/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgutie <jorgutie@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 18:12:30 by jorgutie          #+#    #+#             */
/*   Updated: 2025/04/27 20:31:26 by jorgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Creation of a Zombie in the HEAP.
Zombie *newZombie(std::string name)
{
	Zombie* new_zombie = new Zombie(name); // allocate Zombie on the heap (keyword "NEW")
	return new_zombie; // return the pointer
}