/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/13 20:27:19 by yitoh         #+#    #+#                 */
/*   Updated: 2024/04/30 16:02:34 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(){
}

HumanB::HumanB(std::string name) : _name(name)
{
    _weapon = NULL;
    std::cout << _name << " has constructed " << std::endl;
}

HumanB::~HumanB(void)
{
    std::cout << _name << " has destructed" << std::endl;
}

void    HumanB::attack(void)
{
    if (!_weapon)
    {
        std::cout << "No Weapon :(" << std::endl;
        return ;
    }
    std::cout << _name << " attacks with their " << (*_weapon).getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    _weapon = &weapon;
}
