/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/02 15:21:38 by yitoh         #+#    #+#                 */
/*   Updated: 2024/05/14 12:31:05 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>
#include <iostream>

#define RESET "\033[0m"
#define RED "\033[31m"

class Harl;
typedef void (Harl::*HarlFun) (void);

class Harl
{
private:
    void _debug();
    void _info();
    void _warning();
    void _error();
    std::string _cmd[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    HarlFun _scream[4] {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error,};
public:
    Harl();
    ~Harl();
    void complain(std::string level);
    int getCmdNbr(std::string level) const;
};



#endif