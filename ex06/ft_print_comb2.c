/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerome2 <alerome2@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 18:56:34 by alerome2          #+#    #+#             */
/*   Updated: 2024/03/03 13:07:51 by alerome2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_validation(int number, int space)
{
	char	a;
	char	b;

	if (number < 10)
	{
		a = '0';
		b = number + '0';
	}
	else
	{
		a = '0' + number / 10;
		b = '0' + number % 10;
	}
	write(1, &a, 1);
	write(1, &b, 1);
	if (space == 1)
	{
		write(1, " ", 1);
	}
	else
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 100)
	{
		j = i + 1;
		while (j < 100)
		{
			if (i == 98 && j == 99)
			{
				write(1, "98 99", 6);
				j ++;
			}
			else
			{
				ft_validation(i, 1);
				ft_validation(j, 2);
				j++;
			}
		}
		i++;
	}
}
