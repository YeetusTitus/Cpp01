/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 18:43:17 by jforner           #+#    #+#             */
/*   Updated: 2022/06/22 17:19:24 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <HumanA.hpp>

HumanA::HumanA(std::string str, Weapon &w):weapon(w)
{
	name = str;
	std::cout << name << " created" << std::endl;
	return;
}

HumanA::~HumanA()
{
	std::cout << name << " destroyed" << std::endl;
	return;
}

void	HumanA::attack(void)
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
