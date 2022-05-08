/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:44:25 by ddiniz            #+#    #+#             */
/*   Updated: 2022/02/08 21:56:37 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	letras[3];

	letras[0] = '0';
	while (letras[0] <= '7')
	{
		letras[1] = letras[0] + 1;
		while (letras[1] <= '8')
		{
			letras[2] = letras[1] + 1;
			while (letras[2] <= '9')
			{
				write(1, &letras[0], 1);
				write(1, &letras[1], 1);
				write(1, &letras[2], 1);
				if (letras[0] != '7')
					write(1, ", ", 2);
				letras[2]++;
			}
			letras[1]++;
		}
		letras[0]++;
	}
}
