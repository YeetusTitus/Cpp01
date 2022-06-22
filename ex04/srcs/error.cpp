/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 17:42:47 by jforner           #+#    #+#             */
/*   Updated: 2022/06/22 18:34:55 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Change.hpp>

int	error(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cerr << "the number of argumments is not correct !" << std::endl;
		return 1;
	}

  	std::fstream afile(argv[1]);
	if (!afile)
	{
		std::cerr << "Can't open the file !" << std::endl;
		return 1;
	}
	afile.close();
    return (0);
}