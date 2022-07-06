/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 18:24:28 by jforner           #+#    #+#             */
/*   Updated: 2022/07/06 15:11:09 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Change.hpp>

int main(int argc, char *argv[]) 
{
	if (error(argc, argv))
		return 1;
	std::ifstream	afile(argv[1]);
	Change	sed(&afile, argv[2], argv[3]);
	afile.close();
	int				index = 0;
	while(index < (int)sed.getText().length())
	{
		if (index == the_finder(&sed.getText()[index], sed.getTochange()) + index)
		{
      		sed.replacement(index);
			index += sed.getChanger().length();
		}
		else
			index++;
	}
	std::ofstream	bfile(argv[1], std::ios::trunc);
    bfile.seekp(0);
    bfile.write(&sed.getText()[0], sed.getText().length());
	bfile.close();
	// system("leaks replace");
	return 0; 
}