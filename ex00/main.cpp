/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theog <theog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 15:45:02 by theog             #+#    #+#             */
/*   Updated: 2025/06/29 16:26:14 by theog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "easyfind.hpp"
#include <vector>
#include <list>

int main()
{
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    std::list<int> li;
    li.push_back(1);
    li.push_back(2);
    li.push_back(3);
    li.push_back(4);
    li.push_back(5);

    try
    {
        std::vector<int>::const_iterator it = easyfind(vec, 5);
        std::cout << "iterator value is " << *it << std::endl; 
        it = easyfind(vec, 6);
    }
    catch(const NotFoundException &e)
    {
        std::cerr << e.what() << '\n';
    }
        try
    {
        std::list<int>::const_iterator lit = easyfind(li, 5);
        std::cout << "iterator value is " << *lit << std::endl; 
        lit = easyfind(li, 6);
    }
    catch(const NotFoundException &e)
    {
        std::cerr << e.what() << '\n';
    }
    
}