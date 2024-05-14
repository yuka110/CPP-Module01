/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Replace.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/02 14:45:18 by yitoh         #+#    #+#                 */
/*   Updated: 2024/05/14 15:17:54 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(){
}

Replace::Replace(char **av) : _file(av[1]), _s1(av[2]), _s2(av[3])
{
    std::cout << "Replace is constructed" << std::endl;
}

Replace::~Replace()
{
    std::cout << "Replace is destructed" << std::endl;
}

void Replace::setFile(std::string s)
{
    _file = s;
}

std::string Replace::getFile() const
{
    return (_file);
}

std::string Replace::getOutfile()
{
    return (_file + ".replace");
}

void Replace::replace_copy()
{
    std::string line;
    std::size_t found;
    std::ifstream infile;
    std::ofstream outfile(getOutfile().c_str());
    
    infile.open (_file.c_str());
    if (infile && outfile)
    {
        while (std::getline(infile, line))
        {
            if (_s1.compare(_s2)){
                found = line.find(_s1);
                while (found != std::string::npos)
                {
                    line.erase(found, _s1.size());
                    line.insert(found, _s2);
                    found = line.find(_s1);
                }
            }
            outfile << line << std::endl;
        }
    }
    else
        std::cout << RED << "File cannot be read" << RESET << std::endl;
    infile.close();
    outfile.close();
}