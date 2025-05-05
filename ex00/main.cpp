/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgutie <jorgutie@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 22:30:04 by jorgutie          #+#    #+#             */
/*   Updated: 2025/05/05 09:35:30 by jorgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

// The main function
int main()
{
	// Created on Heap
	std::cout << "\n* A Zombie is being created on the " << YELLOW  "Heap" << RESET << std::endl;
	Zombie *zombie_heap = newZombie("zombie_heap");  
	zombie_heap->announce();
	
	// Creation on Stack
	std::cout << "\n* A Zombie is being created on the " << YELLOW "Stack" << RESET << std::endl;
	randomChump("zombie_stack");
	

	// Delete manually the Zombie Heap
	std::cout  << "\nThe " << MAGENTA "zombie_heap" << RESET <<" is being deleted manually..." << std::endl;
    delete zombie_heap; // Delete heap Zombie to avoid memory leaks!
	
	
	// If a Zombie still exists the Destructor will delete it automatically
	std::cout << "\nProgram finished. Zombies (if any) will be destroyed automatically by " << RED << "Destructor" << std::endl;

	return (0);
}