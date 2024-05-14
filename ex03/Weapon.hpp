/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/13 19:43:41 by yitoh         #+#    #+#                 */
/*   Updated: 2024/04/30 14:33:17 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <cstring>

class   Weapon
{
    private:
        std::string _type;
    public:
        Weapon();
        Weapon(std::string type);
        ~Weapon(void);
        const std::string &getType(void);
        void        setType(std::string type);
};

#endif