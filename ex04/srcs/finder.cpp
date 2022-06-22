/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   finder.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 21:26:46 by jforner           #+#    #+#             */
/*   Updated: 2022/06/22 21:44:44 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Change.hpp>

int the_finder(std::string str, std::string find)
{
    int i = -1;
    int j;
    while (str[++i])
    {
        j = 0;
        while (str[i + j] == find[j])
        {
            if (j + 1 == (int)find.length())
                return (i);
            j++;
        }
    }
    return (-1);
}
