/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:15:10 by ddiniz            #+#    #+#             */
/*   Updated: 2022/02/15 20:51:01 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int	d;
	int	m;
	int	*div;
	int	*mod;
	
	a = 8;
	b = 2;
	div = &d;
	mod = &m;
	ft_div_mod(a, b, div, mod);
	printf("Div: %d\nMod: %d\n", *div, *mod);
}