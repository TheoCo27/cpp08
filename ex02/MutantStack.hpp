/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcohen <tcohen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 22:14:44 by tcohen            #+#    #+#             */
/*   Updated: 2025/08/14 16:39:08 by tcohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <cstdlib>
#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	private:
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

	iterator begin(){return(this->c.begin());}
	iterator end(){return(this->c.end());}
	const_iterator cbegin() const {return(this->c.begin());}
	const_iterator cend()const {return(this->c.end());}
	reverse_iterator rbegin(){return(this->c.rbegin());}
	reverse_iterator rend(){return(this->c.rend());}
	const_reverse_iterator crbegin() const {return(this->c.rbegin());}
	const_reverse_iterator crend() const {return(this->c.rend());}
};