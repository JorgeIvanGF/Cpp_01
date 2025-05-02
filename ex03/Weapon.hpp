/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgutie <jorgutie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 15:40:13 by jorgutie          #+#    #+#             */
/*   Updated: 2025/05/02 15:58:45 by jorgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Weapon
{
    private:
        std::string _type;

    public:
        Weapon(std::string weapon); // Constructor

        // Member functions
        const std::string &getType()const;
        void setType(std::string type);
};