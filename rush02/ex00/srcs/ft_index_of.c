/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_index_of.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 19:36:21 by rcheiko           #+#    #+#             */
/*   Updated: 2020/10/25 19:36:23 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <main.h>

int		ft_index_of(char *str, char **strs, int size)
{
	int i;
	int j;
	int equal;
	int in;

	j = 0;
	while (j < size)
	{
		i = 0;
		equal = j;
		in = 1;
		while (!(str[i] == '\0' && strs[j][i] == '\0'))
		{
			if ((str[i] == '\0' && strs[j][i] != '\0')
			|| (str[i] != '\0' && strs[j][i] == '\0')
			|| (strs[j][i] != str[i]))
				in = 0;
			i++;
		}
		equal = (in == 0) ? (0) : (equal);
		if (equal != 0)
			return (equal);
		j++;
	}
	return (-1);
}
