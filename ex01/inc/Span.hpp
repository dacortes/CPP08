/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 10:08:18 by dacortes          #+#    #+#             */
/*   Updated: 2024/07/03 12:24:25 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/******************************************************************************/
/*                            INCLUDES                                        */
/******************************************************************************/

# include <set>
# include <cerrno>
# include <string>
# include <cstdlib>
# include <iostream>
# include <iterator>
# include <stdint.h>

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
# define ERROR_IS_FULL "\033[1m\033[1;31mError:\033[m Container is full.\n"

class Span
{
	private:
		std::multiset<int>	_array;
		unsigned int		_maxSize;
	public:
		/*
		 * Orthodox Canonical Form
		*/
		Span(void);
		Span(const Span& obj);
		Span(unsigned int N);
		Span &operator=(const Span& obj);
		~Span(void);
		/*
		 * Get Methods
		*/
		const unsigned int getNumber(unsigned int search) const;
		/*
		 * Member funtions
		*/
		void	addNumber(const int add);
		void	shortesSpan(void) const;
		void	longestSpan(void) const;
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
