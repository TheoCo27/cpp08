/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcohen <tcohen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 22:14:44 by tcohen            #+#    #+#             */
/*   Updated: 2025/07/20 23:53:33 by tcohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
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
	const_iterator cbegin(){return(this->c.cbegin());}
	const_iterator cend(){return(this->c.cend());}
	reverse_iterator rbegin(){return(this->c.rbegin());}
	reverse_iterator rend(){return(this->c.rend());}
	const_reverse_iterator crbegin(){return(this->c.crbegin());}
	const_reverse_iterator crend(){return(this->c.crend());}
};