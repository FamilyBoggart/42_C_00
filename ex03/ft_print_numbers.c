/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerome2 <alerome2@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 15:37:15 by alerome2          #+#    #+#             */
/*   Updated: 2024/03/02 13:45:36 by alerome2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int		number;
	char	ascii;

	number = 0;
	while (number < 10)
	{
		ascii = number + '0';
		number ++;
		write(1, &ascii, 1);
	}
}
