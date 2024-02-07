/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/07 17:37:28 by yitoh         #+#    #+#                 */
/*   Updated: 2024/02/07 17:59:57 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int main(void)
{
    std::string s = "HI THIS IS BRAIN";
    std::string *stringPTR = &s;
    std::string &stringREF = s;

    std::cout << "\033[1;31mAddress of str variable: \033[0m" << &s << std::endl;
    std::cout << "\033[1;31mAddress held by stringPTR: \033[0m" << &stringPTR << std::endl;
    std::cout << "\033[1;31mAddress held by stringREF: \033[0m" << &stringREF << std::endl << std::endl;

    std::cout << "\033[1;31mValue of str variable: \033[0m" << s << std::endl;
    std::cout << "\033[1;31mValue pointed to by stringPTR: \033[0m" << *stringPTR << std::endl;
    std::cout << "\033[1;31mValue pointed to by stringREF \033[0m" << stringREF << std::endl;
    stringREF = "NOW THIS IS FACE";
    std::cout << "\033[1;31mValue pointed to by stringREF \033[0m" << stringREF << std::endl;

    return(0);
}