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
	this->_maxSize = onj._maxSize;
	return (*this);
}

/* 
	Get Methods
*/
unsigned int Span::getNumber(unsigned int search) const
{
	if (search >= this->_array.size())
		throw Span::SpanException(ERROR_INNDEX);
	std::multiset<int>::const_iterator iter = _array.find(search);
	return (*iter);
}

/*
	Member funtions
*/
void Span::addNumber(const int add)
{
}
