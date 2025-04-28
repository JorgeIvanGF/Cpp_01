/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgutie <jorgutie@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 19:19:26 by jorgutie          #+#    #+#             */
/*   Updated: 2025/04/28 19:40:18 by jorgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombie_horde(int N, std::string name);

int main()
{
	// Number of Zombies
	int N = 10;   

	std::cout << "\n* Atention!! " << MAGENTA << N << RESET << " Zombies will be created.\n" << std::endl; // To organize visually
	
	// Creation of the Horde with defaul name
	Zombie *horde = zombie_horde(N, "Default Name"); 

	std::cout << "\n"; // To organize visually

	if(horde)
	{
		// Anounce for each one
		for(int i = 0; i < N; i++)
		{
			horde[i].announce();
		}
		
		std::cout << "\n"; // To organize visually
		
		delete[] horde; // Deleting manually the ALL the Zombies created
	}
	else // If failes to create a Zombie
	{
		std::cout << RED << "Failed to create zombie horde!" << RESET << std::endl;
	}
	return (0);
}