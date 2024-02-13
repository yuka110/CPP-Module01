/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/13 19:43:41 by yitoh         #+#    #+#                 */
/*   Updated: 2024/02/13 19:56:15 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <cstring>

class   Weapon
{
    private:
        std::string _type;
    public:
        Weapon(std::string type);
        ~Weapon(void);
        std::string getType(void) const;
        void        setType(std::string type);
};

#endif