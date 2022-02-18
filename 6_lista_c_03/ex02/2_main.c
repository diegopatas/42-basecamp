/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:56:27 by ddiniz            #+#    #+#             */
/*   Updated: 2022/02/17 20:14:49 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	dest[10];
	char	*src = "teste";
	char	fim[10];
	char	*inic = "teste";
	// unsigned int	n;

	// n = 6;
	printf("R: %s\n", ft_strcat(dest, src));
	printf("R: %s\n", strcat(fim, inic));
}
