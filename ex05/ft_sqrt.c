/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mciupek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 17:01:57 by mciupek           #+#    #+#             */
/*   Updated: 2019/06/18 19:50:33 by mciupek          ###   ########.fr       */
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
	if (sqrt * sqrt == nb)
		return (sqrt);
	else
		return (0);
}
