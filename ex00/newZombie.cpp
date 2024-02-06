/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   newZombie.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/03 15:21:32 by yitoh         #+#    #+#                 */
/*   Updated: 2024/02/06 16:02:28 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*    newZombie(std::string name)
{
    Zombie* obake = new (Zombie);
    obake->set_name(name);
    return (obake);
}
//stack vs heap!!