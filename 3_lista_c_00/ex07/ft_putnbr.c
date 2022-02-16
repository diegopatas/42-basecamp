/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 20:31:35 by ddiniz            #+#    #+#             */
/*   Updated: 2022/02/13 14:41:33 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_char(char ch)
{
	write(1, &ch, 1);
}

long	is_negative(long neg)
{
	if (neg < 0)
	{
		write(1, "-", 1);
		neg = neg * -1;
	}
	return (neg);
}

void	ft_putnbr(int nb)
{
	char	to_print[10];
	long	x;
	int		i;

	x = nb;
	if (x == 0)
	{
		ft_print_char('0' + 0);
	}
	x = is_negative(x);
	i = 0;
	while (x > 0)
	{
		to_print[i] = '0' + x % 10;
		x /= 10;
		i++;
	}
	while (i >= 0)
	{
		ft_print_char(to_print[i]);
		i--;
	}
}
