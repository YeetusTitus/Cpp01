/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 18:24:28 by jforner           #+#    #+#             */
/*   Updated: 2022/06/23 14:04:52 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>

int main() 
{
	Harl	hal;

	hal.complain("DEBUG");
	std::cout << std::endl << "Info = ";
	hal.complain("INFO");
	std::cout << std::endl << "Warning = ";
	hal.complain("WARNING");
	std::cout << std::endl << "Error = ";
	hal.complain("ERROR");
	std::cout << std::endl << std::endl;
	std::string	str;
	while (1)
	{
		std::cout << "Choose among DEBUG, INFO, WARNING, ERROR" << std::endl;
		std::cout << "To quit press CRTL+D" << std::endl;
		getline(std::cin, str);
		if (std::cin.eof())
		{
			std::cerr << "End of file, stop !\n";
			break;
		}
		hal.complain(str);
		std::cout << std::endl << std::endl;
	}
	return 0; 
}