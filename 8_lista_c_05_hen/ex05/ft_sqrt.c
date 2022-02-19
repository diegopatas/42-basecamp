/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 23:21:51 by hbatista          #+#    #+#             */
/*   Updated: 2022/02/19 01:51:22 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	sub;
	int	count;

	sub = 1;
	count = 0;
	while (nb > 0)
	{
		nb = nb - sub;
		count++;
		sub = sub + 2;
	}
	if (nb < 0)
		return (0);
	return (count);
}

int main(void)
{
	int i;

	i = 4;
	printf("R: %d\n", ft_sqrt(i));
}