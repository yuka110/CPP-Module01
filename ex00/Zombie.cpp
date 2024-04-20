/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/03 15:21:23 by yitoh         #+#    #+#                 */
/*   Updated: 2024/04/18 15:16:48 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
   std::cout << _name << " has created" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << _name << " has deconstructed" << std::endl;
}

std::string Zombie::get_name(void) const
{
    return(_name);
}

void    Zombie::announce(void)
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;

}