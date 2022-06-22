/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Change.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 18:51:28 by jforner           #+#    #+#             */
/*   Updated: 2022/06/22 21:19:22 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Change.hpp>

//Constructor and destructor
Change::Change(std::ifstream *afile, char *s1, char *s2)
{
	tochange = s1;
	changer = s2;
    afile->seekg(0, std::ios::end);
    size_t size = afile->tellg();
    text.resize(size);
    afile->seekg(0);
    afile->read(&text[0], size);
}

Change::~Change()
{
	return ;
}

//getter and setter
std::string	Change::getText(void)
{
	return text;
}

std::string	Change::getTochange(void)
{
	return	tochange;
}

std::string	Change::getChanger(void)
{
	return	changer;
}

//other
void	Change::replacement(int index)
{
	int	difference = changer.length() - tochange.length();
	if (difference < 0)
	{
		for(size_t i = index; i < (text.length() + difference); i++)
			text[i] = text[i - difference];
		text.resize(text.length() + difference);
	}
	else if (difference > 0)
	{
		text.resize(text.length() + difference);
		for(size_t i = text.length() - 1; i > (index + changer.length() - 1); i--)
			text[i] = text[i - difference];	
	}
	for(size_t i = index; i < index + changer.length(); i++)
		text[i] = changer[i - index];
}