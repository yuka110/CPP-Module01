/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/13 19:52:15 by yitoh         #+#    #+#                 */
/*   Updated: 2024/02/13 20:42:53 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <cstring>
#include "Weapon.hpp"

class   HumanA
{
    private:
        std::string _name;
        Weapon  *_weapon;
    public:
        HumanA(std::string name, Weapon weapon);
        ~HumanA(void);
        void    attack(void);
};

#endif