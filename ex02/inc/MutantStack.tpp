/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 10:47:00 by dacortes          #+#    #+#             */
/*   Updated: 2024/07/12 11:32:27 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include<MutantStack.hpp>

/*
* Orthodox Canonical Form
*/
template <typename T>
MutantStack<T>::MutantStack(void): std::stack<T>(){}
template <typename T>
MutantStack<T>::MutantStack(const MutantStack& obj): std::stack<T>(obj) {}
template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &obj)
{
	return (std::stack<T>::operator=(obj));
}
template <typename T>
MutantStack<T>::~MutantStack(void){}
/*
* Member funtions
*/
template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(void)
{
	return (this->c.begin());
}
template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end(void)
{
	return (this->c.end());
}
