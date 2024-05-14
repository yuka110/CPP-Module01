/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/30 16:22:24 by yitoh         #+#    #+#                 */
/*   Updated: 2024/05/07 12:33:19 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main(int ac, char **av)
{
    if (ac != 4)
        return (1);
    Replace a(av);
    a.replace_copy();
    return 0;
}