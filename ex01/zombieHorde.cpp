/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgutie <jorgutie@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 14:01:04 by jorgutie          #+#    #+#             */
/*   Updated: 2025/05/05 09:51:55 by jorgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


// To create the array for the Horde
Zombie* zombie_horde( int N, std::string name )
{
	if (N <= 0)
		return nullptr; // No zombies if N is 0 or negative!

	Zombie* horde = new Zombie[N]; // Allocate an array of Zombies on the heap
	for (int i = 0; i < N; i++)
	{
		horde[i].set_name(name); // Set the name for each Zombie
	}
	return horde; // Return pointer to the first Zombie
}