/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/06 20:53:44 by yitoh         #+#    #+#                 */
/*   Updated: 2024/02/06 21:25:18 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
   std::cout << "Zombie has created" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << this->_name << " has deconstructed" << std::endl;
}

std::string Zombie::get_name(void) const
{
    return(this->_name);
}

void Zombie::set_name(std::string name)
{
    this->_name = name;
}

void    Zombie::announce(void)
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;

}