/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 17:19:45 by dacortes          #+#    #+#             */
/*   Updated: 2024/05/11 22:48:42 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "../inc/easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

void findInt(std::vector<int>myvector, int num)
{
	try
	{
		std::cout << BLUE << "find: " << END << ::easyfind(myvector, num) << std::endl;
	}
	catch(const std::runtime_error& error)
	{
		std::cerr << error.what() << '\n';
	}
}

int main(void)
{
	std::cout << TUR << "----------- TES VECTOR -----------" << std::endl;
	std::vector<int>myvector;
	pushBackTemplate(myvector, 1, 10);
	for (int i = 1; i < 15; ++i)	
		findInt(myvector, i);
	
	std::cout << TUR << "----------- TES LIST -----------" << std::endl;
	std::list<int>mylist;
	pushBackTemplate(myvector, 1, 10);
	for (int i = 1; i < 15; ++i)	
		findInt(myvector, i);
	return (EXIT_SUCCESS);
}
