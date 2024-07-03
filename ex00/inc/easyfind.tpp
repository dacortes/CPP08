/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 15:34:30 by dacortes          #+#    #+#             */
/*   Updated: 2024/07/03 08:56:35 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
int easyfind(const T &array, int tofind)
{
	typename T::const_iterator it = std::find(array.begin(), array.end(), tofind);
	if (it == array.end())
		throw std::runtime_error(ERROR_NOT_INT);
	return (*it);
}

template <typename T>
void	pushBackTemplate(T &myvector, int start, int end)
{
	for (int i = start; i < end; ++i)
		myvector.push_back(i);
}


