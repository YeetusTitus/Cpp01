/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 18:33:59 by jforner           #+#    #+#             */
/*   Updated: 2022/06/22 16:56:16 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Weapon.hpp>


Weapon::Weapon(std::string str)
{
	type = str;
	std::cout << type << " Weapon created" << std::endl;
	return;
}

Weapon::~Weapon()
{
	std::cout << type << " Weapon destroyed" << std::endl;
	return;
}

void	Weapon::setType(std::string str)
{
	type = str;
}

std::string	Weapon::getType(void)
{
	return type;
}
