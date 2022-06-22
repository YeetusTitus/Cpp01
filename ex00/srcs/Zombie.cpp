/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 18:43:17 by jforner           #+#    #+#             */
/*   Updated: 2022/06/22 16:56:37 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <zombie.hpp>

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string str)
{
	name = str;
	std::cout << name << " created" << std::endl;
	return;
}

Zombie::~Zombie()
{
	std::cout << name << " destroyed" << std::endl;
	return;
}
