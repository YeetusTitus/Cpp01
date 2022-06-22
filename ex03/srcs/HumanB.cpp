/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 18:43:17 by jforner           #+#    #+#             */
/*   Updated: 2022/06/22 16:56:05 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <HumanB.hpp>

HumanB::HumanB(std::string str)
{
	name = str;
	haveWeapon = 1;
	std::cout << name << " created" << std::endl;
	return;
}

HumanB::~HumanB()
{
	std::cout << name << " destroyed" << std::endl;
	return;
}

void	HumanB::attack(void)
{
	if (!haveWeapon)
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << name << " Don't have a weapon and can't attack" << std::endl;
}

void	HumanB::setWeapon(Weapon &w)
{
	weapon = &w;
	haveWeapon = 0;
	std::cout << name << " take the weapon : " << weapon->getType() << std::endl;
}