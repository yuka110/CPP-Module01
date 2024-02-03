/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/03 15:21:27 by yitoh         #+#    #+#                 */
/*   Updated: 2024/02/03 15:59:13 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_H
#define _ZOMBIE_H

#include <iostream>
#include <cstring>

class   Zombie
{
    private:
        std::string name;
        void    announce(void);
        Zombie* newZombie(std::string name);
    public:
        Zombie(void);
        ~Zombie(void);
        void    randomChump(std::string name);
}

#endif
