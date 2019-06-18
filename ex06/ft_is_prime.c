/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mciupek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 19:51:10 by mciupek           #+#    #+#             */
/*   Updated: 2019/06/19 00:30:08 by mciupek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int sqrt;

	if (nb < 1)
		return (0);
	sqrt = (1 + nb) / 2;
	while (sqrt > (sqrt + nb / sqrt) / 2)
		sqrt = (sqrt + nb / sqrt) / 2;
	return (sqrt);
}

int		ft_is_prime(int nb)
{
	int i;

	if (nb == 2)
		return (1);
	if (nb < 2 || nb % 2 == 0)
		return (0);
	i = 3;
	while (i <= ft_sqrt(nb))
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}
