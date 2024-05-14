/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/06 20:53:29 by yitoh         #+#    #+#                 */
/*   Updated: 2024/04/30 14:16:50 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *test1;
    Zombie *test2;
    Zombie *test3;
    test1 = zombieHorde(3, "Phewww");
    std::cout << "---------------------" << std::endl;
    test2 = zombieHorde(-1, "haha");
    std::cout << "---------------------" << std::endl;
    test3 = zombieHorde(5, "None");
    std::cout << "---------------------" << std::endl;
    delete[] test1;
    delete[] test2;
    delete[] test3;
    
    return 0;
}
