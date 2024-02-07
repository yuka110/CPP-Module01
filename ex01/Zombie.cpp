/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/06 20:53:44 by yitoh         #+#    #+#                 */
/*   Updated: 2024/02/07 14:07:27 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
   std::cout << "Zombie has created" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << _name << " has deconstructed" << std::endl;
}

std::string Zombie::get_name(void) const
{
    return(_name);
}

void Zombie::set_name(std::string name)
{
    _name = name;
}

void    Zombie::announce(void)
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;

}