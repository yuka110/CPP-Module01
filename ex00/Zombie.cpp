/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/03 15:21:23 by yitoh         #+#    #+#                 */
/*   Updated: 2024/02/03 16:01:21 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    announce(void)
{
    std:: string    s;
    s = name;
    std::cout << s << ": BraiiiiiiinnnzzzZ..." << std::endl;

}