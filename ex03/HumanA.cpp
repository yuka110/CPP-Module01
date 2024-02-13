/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/13 19:41:33 by yitoh         #+#    #+#                 */
/*   Updated: 2024/02/13 20:48:18 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weapon)
{
    std::cout << name << " has constructed" << std::endl;
    _name = name;
    _weapon = &weapon;
}

HumanA::~HumanA(void)
{
    std::cout << _name << " has deconstructed" << std::endl;
}

void    HumanA::attack(void)
{
    std::cout << _name << " attacks with their " << (*_weapon).getType() << std::endl;
}
