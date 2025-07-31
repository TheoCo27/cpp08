/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcohen <tcohen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 22:14:37 by tcohen            #+#    #+#             */
/*   Updated: 2025/07/20 23:53:38 by tcohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

void basicStackTests() {
    std::cout << "=== Basic Stack Tests ===" << std::endl;
    MutantStack<int> ms;

    // Test push et size
    ms.push(10);
    ms.push(20);
    ms.push(30);
    std::cout << "Size after 3 pushes: " << ms.size() << " (expected 3)" << std::endl;

    // Test top
    std::cout << "Top element: " << ms.top() << " (expected 30)" << std::endl;

    // Test pop
    ms.pop();
    std::cout << "Top after pop: " << ms.top() << " (expected 20)" << std::endl;
    std::cout << "Size after pop: " << ms.size() << " (expected 2)" << std::endl;
}

void iteratorTests() {
    std::cout << "\n=== Iterator Tests ===" << std::endl;
    MutantStack<int> ms;
    for (int i = 1; i <= 5; ++i)
        ms.push(i * 10); // 10, 20, 30, 40, 50

    std::cout << "Iterating with iterator:" << std::endl;
    for (MutantStack<int>::iterator it = ms.begin(); it != ms.end(); ++it) {
        std::cout << *it << " ";  // Expected: 10 20 30 40 50
    }
    std::cout << std::endl;
}

void constIteratorTests() {
    std::cout << "\n=== Const Iterator Tests ===" << std::endl;
    MutantStack<int> ms;
    for (int i = 1; i <= 3; ++i)
        ms.push(i); // 1, 2, 3

    const MutantStack<int> &cms = ms; // Référence constante
    for (MutantStack<int>::const_iterator it = cms.begin(); it != cms.end(); ++it) {
        std::cout << *it << " "; // Expected: 1 2 3
    }
    std::cout << std::endl;
}

void reverseIteratorTests() {
    std::cout << "\n=== Reverse Iterator Tests ===" << std::endl;
    MutantStack<int> ms;
    for (int i = 1; i <= 5; ++i)
        ms.push(i * 10); // 10, 20, 30, 40, 50

    std::cout << "Iterating in reverse:" << std::endl;
    for (MutantStack<int>::reverse_iterator rit = ms.rbegin(); rit != ms.rend(); ++rit) {
        std::cout << *rit << " ";  // Expected: 50 40 30 20 10
    }
    std::cout << std::endl;
}


void constReverseIteratorTests() {
    std::cout << "\n=== Const Reverse Iterator Tests ===" << std::endl;
    MutantStack<int> ms;
    for (int i = 1; i <= 5; ++i)
        ms.push(i * 10); // 10, 20, 30, 40, 50

    const MutantStack<int> &cms = ms; // Référence constante
    std::cout << "Iterating in reverse (const):" << std::endl;
    for (MutantStack<int>::const_reverse_iterator rit = cms.rbegin(); rit != cms.rend(); ++rit) {
        std::cout << *rit << " ";  // Expected: 50 40 30 20 10
    }
    std::cout << std::endl;
}


int main()
{

	//
	basicStackTests();
    iteratorTests();
    constIteratorTests();
	constReverseIteratorTests();

	//SUBJECT TESTS
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);
	return 0;
}