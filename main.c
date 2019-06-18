/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mciupek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 11:54:20 by mciupek           #+#    #+#             */
/*   Updated: 2019/06/18 12:03:18 by mciupek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_factorial(int nb);
int ft_recursive_factorial(int nb);
int ft_iterative_power(int nb, int power);
int ft_recursive_power(int nb, int power);
int ft_fibonacci(int index);
int ft_sqrt(int nb);
int ft_is_prime(int nb);

int		ft_spaces(char *str)
{
	int i;

	i = 0;
	while ((str[i] < '0' || str[i] > '9') && str[i] != '-' && str[i] != '+')
	{
		if (str[i] != '\t' && str[i] != '\n' && str[i] != '\v' &&
				str[i] != '\f' && str[i] != '\r' && str[i] != ' ')
			return (-1);
		i++;
	}
	return (i);
}

int		ft_atoi(char *str)
{
	int		i;
	int		signe;
	long	nb;

	i = ft_spaces(str);
	if (i == -1)
		return (0);
	signe = 1;
	nb = 0;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signe = signe * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	nb = signe * nb;
    if (nb < -2147483648 || nb > 2147483647)
        return (0);
	return ((int)nb);
}

int main(int argc, char **argv)
{
	if (argc == 0)
		return 0;

	int nb = ft_atoi(argv[1]);
    //int power = ft_atoi(argv[2]);
    
    //printf("ft_iterative_factorial(%d) = %d", nb, ft_iterative_factorial(nb));
    //printf("ft_recursive_factorial(%d) = %d", nb, ft_recursive_factorial(nb));
    //printf("ft_iterative_power(%d, %d) = %d", nb, power, ft_iterative_power(nb, power));
    //printf("ft_recursive_power(%d, %d) = %d", nb, power, ft_recursive_power(nb, power));
    //printf("ft_fibonacci(%d) = %d", nb, ft_fibonacci(nb));
    //printf("ft_sqrt(%d) = %d", nb, ft_sqrt(nb));
    printf("ft_is_prime(%d) = %d", nb, ft_is_prime(nb));
}
