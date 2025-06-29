/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theog <theog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 15:45:04 by theog             #+#    #+#             */
/*   Updated: 2025/06/29 16:23:33 by theog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iterator>
#include <algorithm>
#include <exception>

class NotFoundException : public std::exception
{
    public:
        const char* what() const throw()
        {
            return ("Couldn't find element in container");
        }
};

template <typename T>
typename T::const_iterator easyfind(const T& container, int nb)
{
    typename T::const_iterator it = std::find(container.begin(), container.end(), nb);
    if (it == container.end())
        throw(NotFoundException());
    else
        return(it);
}