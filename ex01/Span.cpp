/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theog <theog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 16:40:21 by theog             #+#    #+#             */
/*   Updated: 2025/06/30 14:41:48 by theog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


Span::Span(){
    
}
Span::Span(unsigned int n) : _size_max(n)
{

}
Span::Span(const Span& copy){
    *this = copy;
}
Span& Span::operator=(const Span& copy){
    _vec = std::vector<int>(copy._vec);
    _size_max = copy._size_max;
    return (*this);
}
Span::~Span(){}
//method
void Span::addNumber(int to_add){
    if (_vec.size() == _size_max)
        throw(TooMuchNb());
    else
        _vec.push_back(to_add);
}

unsigned int Span::longestSpan(void){
    if (_vec.size() < 2)
        throw(TooFewNb());
    else{
        std::vector<int>::iterator max = std::max_element(_vec.begin(), _vec.end());
        std::vector<int>::iterator min = std::min_element(_vec.begin(), _vec.end());
        return (*max - *min);
    }
}
unsigned int Span::shortestSpan(void){
    if (_vec.size() < 2)
        throw(TooFewNb());
    std::vector<int> tmp = _vec;
    std::sort(tmp.begin(), tmp.end());
    unsigned int min = tmp[1] - tmp[0];
    for(std::vector<int>::iterator it = tmp.begin(); it + 1 != tmp.end(); it++)
    {
        if (static_cast<unsigned int>(*(it + 1)) - static_cast<unsigned int>(*it) < min)
            min = *(it + 1) - *it;
    } 
    return (min);
}
void Span::printSpan(void){

    unsigned int i = 0;
    for(std::vector<int>::iterator it = _vec.begin(); it != _vec.end(); it++)
    {
        std::cout << "list[" << i << "] = " << *it << std::endl;
        i++;
    }
}