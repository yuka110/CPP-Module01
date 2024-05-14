/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/07 13:53:32 by yitoh         #+#    #+#                 */
/*   Updated: 2024/05/14 12:34:04 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char** av)
{
    Harl Bob;
    if (ac != 2){
        std::cout << "Give one level only. ex. ./harlFilter 'INFO'" << std::endl;
        return 1;
    }
    int nbr = Bob.getCmdNbr(av[1]);
    
    switch(nbr) {
    case 1:
        std::cout << "[DEBUG]" << std::endl;
        Bob.complain("DEBUG");
        std::cout << std::endl;
    case 2:
        std::cout << "[INFO]" << std::endl;
        Bob.complain("INFO");
        std::cout << std::endl;
    case 3:
        std::cout << "[WARNING]" << std::endl;
        Bob.complain("WARNING");
        std::cout << std::endl;
    case 4:
        std::cout << "[ERROR]" << std::endl;
        Bob.complain("ERROR");
        std::cout << std::endl;
        break ;
    default:
        std::cout << "[Probably complaining about insignificant problems]" << std::endl;
        break ;
    }
    return 0;
}