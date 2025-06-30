/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theog <theog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 16:40:16 by theog             #+#    #+#             */
/*   Updated: 2025/06/30 14:43:59 by theog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() {
Span sp = Span(20);
	sp.addNumber(6);
	sp.addNumber(9);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(11);
	
	sp.printSpan();
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::vector<int> _long = std::vector<int>(1000, 15);
	try {
		sp.AddRange< std::vector<int> >(_long.begin(), _long.end());
	} catch (std::exception &e) {
		std::cout << "Error: " << e.what() << " !" << std::endl;
	}
	sp.printSpan();
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	return 0;
}