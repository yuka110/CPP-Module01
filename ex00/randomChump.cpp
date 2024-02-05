/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   randomChump.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/03 15:21:29 by yitoh         #+#    #+#                 */
/*   Updated: 2024/02/05 17:43:59 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::randomChump(std::string name)
{
    Zombie  obake;
    std::cout << "name is " << name << std::endl;
    // obake._name = name;
    obake.announce();
    return ;
}