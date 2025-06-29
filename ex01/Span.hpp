/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theog <theog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 16:40:23 by theog             #+#    #+#             */
/*   Updated: 2025/06/29 17:01:43 by theog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iterator>
#include <algorithm>
#include <limits>
#include <exception>
#include <vector>

#define INT_MAX std::numeric_limits<unsigned int>::max()

class Span
{
    private:
        Span();
        unsigned int _size;
        std::vector<int> _vec;
    public:
        Span(unsigned int n);
        Span(const Span& copy);
        Span& operator=(const Span& copy);
        ~Span();
    //method
        void addNumber(unsigned int to_add);
        void floodSpan(unsigned int flood_size);
        unsigned int shortestSpan(void);
        unsigned int longestSpan(void);
        void printSpan(void);

    class ImpossibleAdd : public std::exception
    {
        virtual const char* what() const throw();
    };
    class ImpossibleSpan : public std::exception
    {
        virtual const char* what() const throw();
    };
};