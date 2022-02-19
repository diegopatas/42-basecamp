/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 23:57:19 by hbatista          #+#    #+#             */
/*   Updated: 2022/02/19 01:55:33 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	if (nb <= 0 || nb == 1)
		return (0);
	if (nb == 2)
		return (1);
	if (((nb / nb) == 1) && ((nb / 1) == nb) && ((nb % 2) != 0))
		return (1);
	return (0);
}

int main(void)
{
	int i;

	i = 4;
	printf("R: %d\n", ft_is_prime(i));
}