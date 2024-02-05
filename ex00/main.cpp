/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/03 15:21:36 by yitoh         #+#    #+#                 */
/*   Updated: 2024/02/05 17:40:55 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie test1 = Zombie("test1");
    Zombie test2 = Zombie("test2");
    test1.newZombie("heap");
    test1.announce();
    test2.randomChump("stack");

    return 0;
}
