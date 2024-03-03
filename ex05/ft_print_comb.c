/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerome2 <alerome2@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 16:52:17 by alerome2          #+#    #+#             */
/*   Updated: 2024/03/03 10:13:27 by alerome2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_condition(char a, char b, char c)
{
	if (a < b && b < c)
	{
		if (a == '7' && b == '8' && c == '9')
		{
			write(1, "789", 3);
		}
		else
		{
			write(1, &a, 1);
			write(1, &b, 1);
			write(1, &c, 1);
			write(1, ", ", 2);
		}
	}
}

void	ft_print_comb(void)
{
	char	f;
	char	s;
	char	t;

	f = '0';
	while (f <= '7')
	{
		s = '0';
		while (s <= '8')
		{
			t = '0';
			while (t <= '9')
			{
				write_condition(f, s, t);
				t++;
			}
			s++;
		}
		f++;
	}
}
