/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:01:29 by ddiniz            #+#    #+#             */
/*   Updated: 2022/02/18 01:20:46 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	*s1 = "";
	char	*s2 = "teste alphabetico";
	unsigned int	n;

	n = 0;
	printf("R: %d\n", ft_strncmp(s1, s2, n));
	printf("R: %d\n", strncmp(s1, s2, n));
}