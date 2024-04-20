/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/13 19:46:57 by yitoh         #+#    #+#                 */
/*   Updated: 2024/04/20 16:58:50 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){
    
}

Weapon::Weapon(std::string type)
{
    _type = type;
    std::cout << _type << " has constructed" << std::endl;
}

Weapon::~Weapon(void)
{
    std::cout << _type << " has deconstructed" << std::endl;
}

const std::string &Weapon::getType(void)
{
    return(_type);
}

void    Weapon::setType(std::string type)
{
     _type = type;
}