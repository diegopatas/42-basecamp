/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 19:28:57 by ddiniz            #+#    #+#             */
/*   Updated: 2022/02/15 20:38:38 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nb);

int	main(void)
{
	int	num;
	int *n1;
	int	**n2;
	int	***n3;
	int	****n4;
	int	*****n5;
	int	******n6;
	int	*******n7;
	int	********n8;
	int	*********n9;
	
	num = 9;
	n1 = &num;
	n2 = &n1;
	n3 = &n2;
	n4 = &n3;
	n5 = &n4;
	n6 = &n5;
	n7 = &n6;
	n8 = &n7;
	n9 = &n8;
	ft_ultimate_ft(n9);

	printf("num: %d", num);
}