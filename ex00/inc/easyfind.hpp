/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 21:48:37 by dacortes          #+#    #+#             */
/*   Updated: 2024/05/15 10:02:22 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ESAYFIND_HPP
# define ESAYFIND_HPP

/******************************************************************************/
/*                            INCLUDES                                        */
/******************************************************************************/

# include <cstdlib>
# include <algorithm>
# include <stdexcept>

/******************************************************************************/
/*                            MACROS                                          */
/******************************************************************************/
# define ERROR_NOT_INT "\033[1m\033[1;31mError: \033[m Integer not found"

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
/*                            TEMPLATE                                        */
/******************************************************************************/

template <typename T>
int easyfind(const T &array, int tofind);
template <typename T>
void	pushBackTemplate(T &myvector, int start, int end);

#include "easyfind.tpp"
#endif
