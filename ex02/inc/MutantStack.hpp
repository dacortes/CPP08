/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 10:21:01 by dacortes          #+#    #+#             */
/*   Updated: 2024/07/12 11:32:14 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

/******************************************************************************/
/*                            INCLUDES                                        */
/******************************************************************************/

# include <stack>

/******************************************************************************/
/*                            COLORS                                          */
/******************************************************************************/

# define END "\033[m"					//end
# define RED "\033[1m\033[1;31m"		//red
# define GREEN "\033[1m\033[1;32m"		//green
# define YELLOW "\033[1m\033[1;33m"		//yellow
# define BLUE "\033[1;34m"				//blue
# define TUR "\033[1m\033[1;35m"		//Turquesa
# define CYAN "\033[1;36m"				//Cyan
# define ORANGE "\033[1m\033[38;5;208m"	//orange
# define PURPLE "\033[1m\033[38;5;128m"	//purple

/******************************************************************************/
/*                            CLASS                                           */
/******************************************************************************/

template <typename T>
class MutantStack: public std::stack<T>
{
	public:
		/*
		 * Orthodox Canonical Form
		*/
		MutantStack(void);
		MutantStack(const MutantStack &obj);
		MutantStack &operator=(const MutantStack &obj);
		~MutantStack(void);
		/*
		 * Member funtions
		*/
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator	begin(void);
		iterator	end(void);
};
# include <MutantStack.tpp>
#endif
