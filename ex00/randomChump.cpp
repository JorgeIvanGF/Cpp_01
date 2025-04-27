/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgutie <jorgutie@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 18:00:49 by jorgutie          #+#    #+#             */
/*   Updated: 2025/04/27 20:42:53 by jorgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Creation of a Zombie on the STACK and announce itself
void randomChump( std::string name )
{
	Zombie random_zombie(name); // create a zombie on STACK
	random_zombie.announce();  // announce itself
	 
}