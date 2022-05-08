/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 00:13:59 by hbatista          #+#    #+#             */
/*   Updated: 2022/02/19 01:47:57 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power < 1)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

int main(void)
{
	int b;
	int e;

	b = 1;
	e = 0;
	printf("R: %d\n", ft_recursive_power(b, e));
}
