/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 19:26:37 by ddiniz            #+#    #+#             */
/*   Updated: 2022/02/15 20:14:58 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nb);

int	main(void)
{
	int	num;
	int *nb;
	
	num = 0;
	nb = &num;
	*nb = 43;
	
	printf("num_f: %d\n", num);
	ft_ft(nb);
		
	printf("num_s: %d\n", num);
}