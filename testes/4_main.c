/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 21:04:45 by ddiniz            #+#    #+#             */
/*   Updated: 2022/02/15 22:09:41 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int x;
	int y;
	int *a;
	int *b;
	
	x = 8;
	y = 2;
	a = &x;
	b = &y;
	ft_ultimate_div_mod(a, b);

	printf("Div: %d\nMod: %d\n", *a, *b);
}