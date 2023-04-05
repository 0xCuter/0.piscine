/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 12:44:47 by scuter            #+#    #+#             */
/*   Updated: 2020/10/09 14:30:50 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int tmp[size];
	int i;

	i = 0;
	while (i < size)
	{
		tmp[i] = tab[size - i - 1];
		i++;
	}
	i = 0;
	while (i < size)
	{
		tab[i] = tmp[i];
		i++;
	}
}
