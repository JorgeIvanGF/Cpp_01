/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgutie <jorgutie@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 15:40:13 by jorgutie          #+#    #+#             */
/*   Updated: 2025/05/03 14:12:04 by jorgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

// Colors
#define RESET   "\033[0m"
#define YELLOW  "\033[0;33m"
#define MAGENTA "\033[0;35m"
#define RED "\033[0;31m"

#include <iostream>

class Weapon
{
    private:
        std::string _type;

    public:
        Weapon(const std::string &type); // Constructor

        // Member functions
        const std::string &getType()const;
        void setType(const std::string &type);
};

#endif