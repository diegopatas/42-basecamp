/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:42:02 by ddiniz            #+#    #+#             */
/*   Updated: 2022/02/10 14:30:56 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_char(char ch)
{
	write(1, &ch, 1);
}

void	ft_print_comb2(void)
{
	int	col_1;
	int	col_2;

	col_1 = 0;
	while (col_1 <= 98)
	{
		col_2 = col_1 + 1;
		while (col_2 <= 99)
		{
			ft_print_char('0' + col_1 / 10);
			ft_print_char('0' + col_1 % 10);
			write(1, " ", 1);
			ft_print_char('0' + col_2 / 10);
			ft_print_char('0' + col_2 % 10);
			if (col_1 < 98)
				write(1, ", ", 2);
			col_2++;
		}
		col_1++;
	}
}
