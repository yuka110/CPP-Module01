/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   newZombie.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/03 15:21:32 by yitoh         #+#    #+#                 */
/*   Updated: 2024/02/05 17:44:52 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*    Zombie::newZombie(std::string name)
{
    Zombie* obake;
    obake->_name = name;
    return (obake);
}
//stack vs heap!!