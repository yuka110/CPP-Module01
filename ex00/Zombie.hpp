/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/03 15:21:27 by yitoh         #+#    #+#                 */
/*   Updated: 2024/02/05 17:42:28 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <cstring>

class   Zombie
{
    private:
        std::string _name;
    public:
        Zombie(std::string name);
        Zombie(void);
        ~Zombie(void);
        void    announce(void);
        void    randomChump(std::string name);
        Zombie* newZombie(std::string name);
};

#endif
