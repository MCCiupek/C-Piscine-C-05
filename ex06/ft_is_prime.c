/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mciupek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 19:51:10 by mciupek           #+#    #+#             */
/*   Updated: 2019/06/18 21:29:57 by mciupek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int sqrt;

	sqrt = 1;
	if (nb < 1)
		return (0);
	while (sqrt != (sqrt + nb / sqrt) / 2 || sqrt == 1)
	{
		sqrt = (sqrt + nb / sqrt) / 2;
	}
	return (sqrt);
}

int ft_is_prime(int nb)
{
	int i;

	if (nb == 2)
		return (1);
	i = 2;
	while (i <= ft_sqrt(nb) || i <= nb)
	{
		if (nb % i != 0)
			return (0);
		i++;
	}
	return (1);
}
