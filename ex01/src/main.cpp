/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 10:07:15 by dacortes          #+#    #+#             */
/*   Updated: 2024/07/09 16:39:16 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Span.hpp>

enum TestType
{
    ADD_TOO_MANY_NUMBERS,
    CALCULATE_SPAN_WITH_NO_ELEMENTS,
    CALCULATE_SPAN_WITH_ONE_ELEMENT
};

void	addRandomLoop(Span &span, size_t range)
{
	for (size_t add = 1; add <= range; add++)
		span.addNumber(std::rand() % range);
}

void	addLoop(Span &span, int start, size_t range)
{
	for (size_t add = 1; add <= range; add++)
		span.addNumber(start++);
}

void	testSubject(void)
{
	std::cout << BLUE << "\tINIT TEST SUBJECT" << END << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp << std::endl;
}

void testError(TestType testType, unsigned int N, int range )
{
    try {
        switch (testType) {
            case ADD_TOO_MANY_NUMBERS:
			{
				std::cout << BLUE << "\tAdd too many numbers" << END << std::endl;
                Span foo(N);
                addRandomLoop(foo, range);
                foo.addNumber(rand() % range);
                break;
            }
            case CALCULATE_SPAN_WITH_NO_ELEMENTS:
			{
				std::cout << BLUE << "\tCalculate span with no elements" << END << std::endl;
                Span emptySpan(N);
                emptySpan.shortestSpan();
                break;
            }
            case CALCULATE_SPAN_WITH_ONE_ELEMENT:
			{
				std::cout << BLUE << "\tCalculate span with one element" << END << std::endl;
                Span oneElementSpan(N);
                oneElementSpan.addNumber(rand() % range);
                oneElementSpan.shortestSpan();
                break;
            }
            default:
                std::cerr << "Unrecognized test type" << std::endl;
                break;
        }
    } catch (const std::exception &e)
	{
        std::cout << e.what();
    }
}

int main(void)
{
	std::cout << RED << "\tINIT TEST ERROR" << END << std::endl;
	testError(ADD_TOO_MANY_NUMBERS, 5, 100);
    testError(CALCULATE_SPAN_WITH_NO_ELEMENTS, 5, 100);
    testError(CALCULATE_SPAN_WITH_ONE_ELEMENT, 5, 100);
	testSubject();

	try
	{
		std::cout << BLUE << "INIT TEST ADD" << END << std::endl;
		unsigned int N = 20;
		Span foo(N);
		std::cout << BLUE << "* Span foo" << END << std::endl;
		addLoop(foo, 1, N);
		std::cout << foo << std::endl;
		std::cout << BLUE << "* Span fii" << END << std::endl;
		Span fii(N);
		addRandomLoop(fii, N);
		std::cout << fii << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (EXIT_SUCCESS);
}
