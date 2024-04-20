/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/13 19:52:15 by yitoh         #+#    #+#                 */
/*   Updated: 2024/04/20 17:02:49 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <cstring>
#include "Weapon.hpp"

class   HumanA
{
    public:
        HumanA();
        HumanA(std::string name, Weapon &weapon);
        ~HumanA(void);
        void    attack(void);
    private:
        std::string _name;
        Weapon  *_weapon;
};

#endif