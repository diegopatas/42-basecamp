/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 20:05:00 by ddiniz            #+#    #+#             */
/*   Updated: 2022/02/17 21:04:02 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	dest[10];
	char	*src = "teste";
	char	fim[10];
	char	*inic = "teste";
	unsigned int	n;

	n = 3;
	printf("R: %s\n", ft_strncat(dest, src, n));
	printf("R: %s\n", strncat(fim, inic, n));
}
