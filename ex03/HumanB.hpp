/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/13 19:58:27 by yitoh         #+#    #+#                 */
/*   Updated: 2024/04/20 18:38:35 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <cstring>
#include "Weapon.hpp"

class   HumanB
{
    public:
        HumanB();
        HumanB(std::string name);
        ~HumanB(void);
        void    attack(void);
        void    setWeapon(Weapon &weapon);
    private:
        std::string _name;
        Weapon  *_weapon;
};

#endif