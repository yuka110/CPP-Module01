/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/07 13:53:32 by yitoh         #+#    #+#                 */
/*   Updated: 2024/05/14 12:25:30 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl Bob;
    Bob.complain("DEBUG");
    Bob.complain("Info");
    Bob.complain("INFO");
    Bob.complain("WARNING");
    Bob.complain("ERROR");

    return 0;
}
