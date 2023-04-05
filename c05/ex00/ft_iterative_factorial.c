/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 16:07:34 by scuter            #+#    #+#             */
/*   Updated: 2020/10/16 16:13:25 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int tot;

	if (nb < 0)
		return (0);
	tot = 1;
	while (nb)
	{
		tot = tot * nb;
		nb--;
	}
	return (tot);
}
