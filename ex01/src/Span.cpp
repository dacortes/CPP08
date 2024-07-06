/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 11:18:50 by dacortes          #+#    #+#             */
/*   Updated: 2024/07/06 10:18:40 by dacortes         ###   ########.fr       */
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
	(void)N;
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
	return (this->_array[pos]);
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