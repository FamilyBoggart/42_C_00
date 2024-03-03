/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerome2 <alerome2@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 00:04:20 by alerome2          #+#    #+#             */
/*   Updated: 2024/03/03 18:17:17 by alerome2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_negative(int number)
{
	if (number < 0)
	{
		write(1, "-", 1);
		number = number * -1;
	}
	return (number);
}

int	special_condition(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (1);
	}
	else
	{
		return (0);
	}
}

void	ft_putnbr(int nb)
{
	char	c;
	int		auxiliar;
	int		number;

	number = 1;
	if (special_condition(nb) == 1)
	{
		return ;
	}
	nb = check_negative(nb);
	auxiliar = nb;
	while (auxiliar >= 10)
	{
		auxiliar = auxiliar / 10;
		number = number * 10;
	}
	while (number >= 10)
	{
		c = (nb / number) + '0';
		write(1, &c, 1);
		nb = nb % number;
		number = number / 10;
	}
	c = nb + '0';
	write(1, &c, 1);
}
/*
int main() 
{	ft_putnbr(-2147483648);
	ft_putnbr(-7);
	ft_putnbr(50);
}
*/
