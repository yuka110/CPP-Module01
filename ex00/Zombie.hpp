/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/03 15:21:27 by yitoh         #+#    #+#                 */
/*   Updated: 2024/04/30 13:48:27 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <cstring>

class   Zombie
{
    public:
        Zombie();
        Zombie(std::string name);
        ~Zombie();
        void        announce(void);
        std::string get_name(void) const;
        void        set_name(std::string name);
   
    private:
        std::string _name;
};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

#endif
