/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/06 20:53:29 by yitoh         #+#    #+#                 */
/*   Updated: 2024/02/07 13:43:16 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *test1;
    Zombie *test2;
    Zombie *test3;

    test1 = zombieHorde(3, "Phewww");
    test2 = zombieHorde(-1, "haha");
    test3 = zombieHorde(5, "None");
    delete[] test1;
    delete[] test2;
    delete[] test3;
    return 0;
}
