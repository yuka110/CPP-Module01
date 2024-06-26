/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   zombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/06 20:53:40 by yitoh         #+#    #+#                 */
/*   Updated: 2024/04/18 15:24:36 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    if (N < 1)
        return (NULL);
    Zombie* zombies = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        zombies[i].set_name(name);
        zombies[i].announce();
    }
    return (zombies);
}
