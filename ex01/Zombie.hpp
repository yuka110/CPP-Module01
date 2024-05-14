/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/06 20:53:36 by yitoh         #+#    #+#                 */
/*   Updated: 2024/04/30 14:18:40 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <cstring>

class   Zombie
{
    private:
        std::string _name;
    public:
        Zombie();
        ~Zombie();
        std::string get_name(void) const;
        void        set_name(std::string name);
        void        announce(void);
};

Zombie* zombieHorde( int N, std::string name );

#endif