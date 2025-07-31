/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcohen <tcohen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 16:40:23 by theog             #+#    #+#             */
/*   Updated: 2025/07/20 22:14:10 by tcohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iterator>
#include <algorithm>
#include <limits>
#include <exception>
#include <vector>
#include <cstdlib>


class Span
{
    private:
        Span();
        unsigned int _size_max;
        std::vector<int> _vec;
    public:
        Span(unsigned int n);
        Span(const Span& copy);
        Span& operator=(const Span& copy);
        ~Span();
    //method
        void addNumber(int to_add);
        unsigned int shortestSpan(void);
        unsigned int longestSpan(void);
        void printSpan(void);
    template <typename T>
    void AddRange(typename T::iterator begin, typename T::iterator end)
    {
        try{
            (void)static_cast<int>(*begin);
        }catch(...){
            throw(std::invalid_argument("Add range requires type int"));
			return;
        }
        for(typename T::iterator it = begin; it != end; it++)
            addNumber(*it);
    }

    class TooMuchNb : public std::exception
    {
        const char* what() const throw(){return("Too Much Numbers");}
    };
    class TooFewNb : public std::exception
    {
        const char* what() const throw(){return("Too Few numbers");}
    };
};