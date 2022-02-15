/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 19:46:38 by ddiniz            #+#    #+#             */
/*   Updated: 2022/02/15 20:14:17 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int x;
	int y;
	int *a;
	int *b;

	x = 4;
	y = 2;
	printf("x: %d\n", x);
	printf("y: %d\n", y);
	
	a = &x;
	b = &y;
	ft_swap(a, b);
	printf("x: %d\n", x);
	printf("y: %d\n", y);
}