/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/13 19:41:33 by yitoh         #+#    #+#                 */
/*   Updated: 2024/04/30 16:17:58 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
    std::cout << _name << " has constructed - weapon is " << (_weapon).getType() << std::endl;
}

HumanA::~HumanA(void)
{
    std::cout << _name << " has destructed" << std::endl;
}

void    HumanA::attack(void)
{
    std::cout << _name << " attacks with their " << (_weapon).getType() << std::endl;
}
