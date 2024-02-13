/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/13 19:46:57 by yitoh         #+#    #+#                 */
/*   Updated: 2024/02/13 21:07:27 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
//this needs to be malloced
Weapon::Weapon(std::string type)
{
    std::cout << type << " has constructed" << std::endl;
}

Weapon::~Weapon(void)
{
    std::cout << _type << " has deconstructed" << std::endl;
}

std::string Weapon::getType(void) const
{
    return(_type);
}

void    Weapon::setType(std::string type)
{
     _type = type;
}