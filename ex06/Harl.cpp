/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/02 15:21:40 by yitoh         #+#    #+#                 */
/*   Updated: 2024/05/14 12:34:19 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){
}

Harl::~Harl(){
}

void Harl::complain(std::string level)
{
    for (int i = 0; i < 4; i++)
    {
        if (!level.compare(_cmd[i]))
            (this->*_scream[i])();
    }
}

void Harl::_debug(){
    std::cout << "I love having extra bacon for my 7XL-double-cheese\
-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::_info(){
    std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
}

void Harl::_warning(){
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
}

void Harl::_error(){
    std::cout << "This is unacceptable! I want to speak to the manager now" << std::endl;
}

int Harl::getCmdNbr(std::string level) const
{
    for (int i = 0; i < 4; i++)
    {
        if (!level.compare(_cmd[i]))
            return (i + 1);
    }
    return (0);
}
