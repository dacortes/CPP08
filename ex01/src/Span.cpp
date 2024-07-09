/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 11:18:50 by dacortes          #+#    #+#             */
/*   Updated: 2024/07/09 16:13:42 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

/*
	Orthodox Canonical form
*/
Span::Span(void)
{
	this->_maxSize = 0;
}

Span::Span(const Span &obj)
{
	*this = obj;
}

Span::Span(unsigned int N)
{
	this->_maxSize = N;
}

Span &Span::operator=(const Span &obj)
{
	this->_array = obj._array;
	this->_maxSize = obj._maxSize;
	return (*this);
}

/* 
	Get Methods
*/
unsigned int Span::getNumber(unsigned int pos) const
{
	if (pos >= this->_array.size())
		throw Span::SpanException(ERROR_INDEX);
	return (this->_array[pos]);
}

/*
	Member funtions
*/
void Span::addNumber(int add)
{
	if ((this->_array.size() + 1) > this->_maxSize)
		throw Span::SpanException(ERROR_IS_FULL);
	this->_array.push_back(add);
}

long Span::shortestSpan(void) const
{
	if (this->_array.size() < 2)
		throw Span::SpanException(ERROR_NOT_ELEMENTS);
	long min = std::numeric_limits<unsigned int>::max();
	long last = 0;
	for (std::vector<int>::const_iterator iter = this->_array.begin();
		iter != this->_array.end(); iter++)
	{
		if (iter != this->_array.begin() and std::abs(*iter - last) < min)
			min = std::abs(*iter - last);
		last = *iter;
	}
	return (min);
}

long Span::longestSpan(void) const
{
	if (this->_array.size() < 2)
		throw Span::SpanException(ERROR_NOT_ELEMENTS);
	long min = *std::min_element(this->_array.begin(), this->_array.end());
	long max = *std::max_element(this->_array.begin(), this->_array.end());
	return (std::abs(max - min));
}

std::ostream &operator<<(std::ostream &os, const Span &obj)
{
	os << ORANGE << "Class Span:\n"
	<< TUR << "\tshortestSpan: " << END << obj.shortestSpan() << "\n"
	<< TUR << "\tlongestSpan: " << END << obj.longestSpan() << "\n"
	<< TUR << "number Array: " << END << "\n";
	for (size_t i = 0; i < obj.getMaxSize(); i++)
		os << "\t[" << i << "] " << obj.getNumber(i) << "\n";
	return (os);
}
