/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 10:08:18 by dacortes          #+#    #+#             */
/*   Updated: 2024/07/09 16:30:55 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP 
# define SPAN_HPP

/******************************************************************************/
/*                            INCLUDES                                        */
/******************************************************************************/

# include <cerrno>
# include <string>
# include <cstdlib>
# include <iostream>
# include <iterator>
# include <stdint.h>
# include <vector>
# include <time.h>
# include <limits>
# include <bits/stl_algo.h>

/******************************************************************************/
/*                            COLORS                                          */
/******************************************************************************/

# define END "\033[m"                 //end
# define RED "\033[1m\033[1;31m"      //red
# define GREEN "\033[1m\033[1;32m"      //green
# define YELLOW "\033[1m\033[1;33m"      //yellow
# define BLUE "\033[1;34m"             //blue
# define TUR "\033[1m\033[1;35m"      //Turquesa
# define CYAN "\033[1;36m"             //Cyan
# define ORANGE "\033[1m\033[38;5;208m"  //orange
# define PURPLE "\033[1m\033[38;5;128m"  //purple

/******************************************************************************/
/*                            CLASS                                           */
/******************************************************************************/

# define ERROR_INDEX "\033[1m\033[1;31mError:\033[m Invalid  Index.\n"
# define ERROR_IS_FULL "\033[1m\033[1;31mError:\033[m Span is already full.\n"
# define ERROR_NOT_ELEMENTS "\033[1m\033[1;31mError:\033[m Not enough elements to calculate span.\n"

class Span
{
	private:
		std::vector<int>	_array;
		unsigned int		_maxSize;
	public:
		/*
		 * Orthodox Canonical Form
		*/
		Span(void);
		Span(const Span& obj);
		Span(unsigned int N);
		Span &operator=(const Span& obj);
		~Span(void){};
		/*
		 * Get Methods
		*/
		unsigned int getNumber(unsigned int search) const;
		unsigned int getMaxSize(void) const {return (_maxSize);};
		/*
		 * Member funtions
		*/
		void	addNumber(int add);
		long	shortestSpan(void) const;
		long	longestSpan(void) const;
		template <typename T>
		void	addNumber(const typename T::iterator &begin, const typename T::iterator &end)
		{
			if ((std::distance(begin, end) + this->_array.size()) > this->_maxSize)
				throw Span::SpanException(ERROR_IS_FULL);
			this->_array.insert(begin, end);
		};
		/*
			Class Exception
		*/
		class SpanException: public std::exception
		{
			private:
				std::string	_msgError;
			public:
				SpanException(std::string msgError): _msgError(msgError){}
				virtual const char *what() const throw()
				{
					return (_msgError.c_str());
				}
				~SpanException(void) throw(){}
		};
};
std::ostream &operator<<(std::ostream &os, const Span &obj);
#endif
