/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgutie <jorgutie@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 14:02:22 by jorgutie          #+#    #+#             */
/*   Updated: 2025/04/28 14:07:16 by jorgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

// Colors
#define RESET   "\033[0m"
#define RED     "\033[0;31m"
#define GREEN   "\033[0;32m"
#define YELLOW  "\033[0;33m"
#define BLUE    "\033[0;34m"
#define MAGENTA "\033[0;35m"
#define CYAN    "\033[0;36m"
#define WHITE   "\033[0;37m"

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

class Zombie
{
    private:
        std::string _name;

    public:
        Zombie(std::string name); // Constructor
        ~Zombie(); // Destructor

        // Function to announce 'const' bc NOT change the Object
        void announce() const; 

};

#endif