/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 18:24:28 by jforner           #+#    #+#             */
/*   Updated: 2022/06/23 14:56:48 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>

int main(int argc, char *argv[]) 
{
{
	if (argc == 1)
	{
		std::cout << "[ No problemo ]" << std::endl;
		return 0;
	}

	std::string	str(argv[1]);
	Harl	hal;
	switch(hal.priorities(str))
	{
		case 4:
		std::cout << "[ ERROR ]" << std::endl;
		hal.complain("ERROR");
		std::cout << std::endl << std::endl;

		case 3:
		std::cout << "[ WARNING ]" << std::endl;
		hal.complain("WARNING");
		std::cout << std::endl << std::endl;

		case 2:
		std::cout << "[ INFO ]" << std::endl;
		hal.complain("INFO");
		std::cout << std::endl << std::endl;

		case 1:
		std::cout << "[ DEBUG ]" << std::endl;
		hal.complain("DEBUG");
		std::cout << std::endl << std::endl;
		break;

		case 0:
		std::cout << "[ No problemo ]" << std::endl;
		break;
	}

	std::cout << std::endl;
}
	return 0; 
}