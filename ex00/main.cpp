/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/03 15:21:36 by yitoh         #+#    #+#                 */
/*   Updated: 2024/02/06 16:05:07 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *test1;
    test1 = newZombie("heap");
    test1->announce();
    randomChump("stack");
    delete(test1);

    return 0;
}
