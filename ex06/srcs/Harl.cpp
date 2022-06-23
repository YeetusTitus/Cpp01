/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 18:51:28 by jforner           #+#    #+#             */
/*   Updated: 2022/06/23 14:54:23 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>

//Constructor and destructor
Harl::Harl()
{
	return;
}

Harl::~Harl()
{
	return ;
}

//other private

void Harl::debug( void )
{
	std::cout << "Get stickbug !";
}
void Harl::info( void )
{
	std::cout << "The mother of Nicolas is a *** !";
}
void Harl::warning( void )
{
	std::cout << "Lunatic asylum for the moon";
}
void Harl::error( void )
{
	std::cout << "Trapped in a closed room mystery ...";
}


//other public
int	Harl::priorities(std::string str)
{
	if (str == "DEBUG")
		return (1);
	if (str == "INFO")
		return (2);
	if (str == "WARNING")
		return (3);
	if (str == "ERROR")
		return (4);
	return (0);
}

void    	Harl::complain(std::string level)
{
	void    	(Harl::*functionP[])( void ) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	msgType[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i=0; i < 4; i++)
	{
		if (level == msgType[i])
			(this->*functionP[i])();
	}
}
