/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   7_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 22:18:35 by ddiniz            #+#    #+#             */
/*   Updated: 2022/02/15 22:29:18 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[4];
	int size;

	tab[0] = 1;
	tab[1] = 5;
	tab[2] = 7;
	tab[3] = 8;
	
	size = 4;
	printf("Orig: %d %d %d %d\n", tab[0], tab[1], tab[2], tab[3]);
	
	ft_rev_int_tab(tab, size);
	printf("Rever: %d %d %d %d\n", tab[0], tab[1], tab[2], tab[3]);
}