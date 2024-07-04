/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 11:18:50 by dacortes          #+#    #+#             */
/*   Updated: 2024/07/03 12:28:37 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

/*
	Orthodox Canonical form
*/
Span::Span(void)
{}

Span::Span(const Span &obj)
{
	*this = obj;
}

Span::Span(unsigned int N)
{
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
const unsigned int Span::getNumber(unsigned int pos) const
{
	if (pos >= this->_array.size())
		throw Span::SpanException(ERROR_INDEX);
	std::vector<int>::const_iterator iter = this->_array.begin();
	for (unsigned int i = 0; i < this->_array.size(); i++)
	{
		if (i == pos)
			return (*iter);
	}
	return (0);
}

/*
	Member funtions
*/
void Span::addNumber(int add)
{
	if ((this->_array.size() + 1) > this->_maxSize)
		throw Span::SpanException(ERROR_IS_FULL);
	this->_array.insert(add);
}

void Span::shortestSpan(void) const
{
	if (this->_array.size() < 2)
		throw Span::SpanException(ERROR_NOT_ELEMENTS);
}

void Span::longestSpan(void) const
{
	if (this->_array.size() < 2)
		throw Span::SpanException(ERROR_NOT_ELEMENTS);
}