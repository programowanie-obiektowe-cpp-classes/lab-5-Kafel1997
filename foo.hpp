#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector<char> wektor;
    for(auto it = people.rbegin(); it!=people.rend();it++)
    {
        it->birthday();
        if (it->isMonster())
        {
            wektor.push_back('n');
        }else
        {
            wektor.push_back('y');
        }
        
    }
    return wektor;
}
