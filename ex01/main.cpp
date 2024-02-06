/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/06 20:53:29 by yitoh         #+#    #+#                 */
/*   Updated: 2024/02/06 21:05:10 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *test1;
    int     N = 5;

    test1 = zombieHorde(N, "Hello");
    // for (int i = 0; i < N; i++)
    // {
    //     delete(&test1[N]);
    // }
    delete[] test1;
    return 0;
}
