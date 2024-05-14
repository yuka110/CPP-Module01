/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/03 15:21:23 by yitoh         #+#    #+#                 */
/*   Updated: 2024/04/30 13:49:02 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
}

Zombie::Zombie(std::string name) : _name(name)
{
   std::cout << _name << " has constructed" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << _name << " has destructed" << std::endl;
}

std::string Zombie::get_name(void) const
{
    return(_name);
}

void    Zombie::announce(void)
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;

}