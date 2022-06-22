/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 18:24:28 by jforner           #+#    #+#             */
/*   Updated: 2022/06/22 14:43:39 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <iostream>
# include <cstring>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "Str addr =\t" << &str << std::endl;	
	std::cout << "sPTR addr =\t" << stringPTR << std::endl;
	std::cout << "sREF addr =\t" << &stringREF << std::endl;
	std::cout << std::endl;

	std::cout << "Str val =\t" << str << std::endl;	
	std::cout << "stringPTR val =\t" << *stringPTR << std::endl;
	std::cout << "stringREF val =\t" << stringREF << std::endl;
	return (0);
}