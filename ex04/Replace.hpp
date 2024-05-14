/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Replace.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/02 14:45:15 by yitoh         #+#    #+#                 */
/*   Updated: 2024/05/07 12:49:48 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_H
# define REPLACE_H

#include <iostream>
#include <fstream>
#include <string>

#define RESET "\033[0m"
#define RED "\033[31m"

class Replace
{
private:
    std::string _file;
    std::string _s1;
    std::string _s2;
public:
    Replace();
    Replace(char **av);
    ~Replace();
    void setFile(std::string s);
    std::string getFile() const;
    std::string getOutfile();
    void replace_copy();
};

#endif