/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 22:27:44 by ddiniz            #+#    #+#             */
/*   Updated: 2022/02/10 11:58:17 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comma(int d_ce, int u_cd, char *ar_n)
{	
	if ((ar_n[d_ce] != '9') && (ar_n[u_cd] != '9'))
		{
			write(1, ", ", 2);
		}
}

void	ft_print_char(int indice, char *ar_n)
{
	write(1, &ar_n[indice], 1);
}

void	ft_printing(int k, int m, int i, int j, char *ar_n)
{
	ft_print_char(k, ar_n);
	ft_print_char(m, ar_n);
	write(1, " ", 1);
	ft_print_char(i, ar_n);
	ft_print_char(j, ar_n);
	ft_print_comma(k, j, ar_n);
}

void	ft_print_block1(int k, int m, int i, int j, char *nb)
{
	i = 0;
	j = i + 1;
	while (i <= 9)
	{
		while (j <= 9)
		{
			ft_printing(k, m, i, j, nb);
			j++;
		}
		i++;
	}
}

void	ft_print_block2(int k, int m, int i, int j, char *nb)
{
	i = 0;
	j = 0;
	while (i <= 9)
	{
		while (j <= 9)
		{
			ft_printing(k, m, i, j, nb);
			j++;
		}
		i++;
	}
}

void ft_print_comb2(void)
{
	char	*num;
	int	k;
	int	m;
	int i;
	int j;
	
	k = 0;
	m = 0;

	num = "0123456789";
	while (k <= 9)
	{
		while (m <= 9)
		{
			ft_print_block1(k, m, i, j,  num);
			ft_print_block2(k+1, m, i, j, num);
			m++;
		}
		k++;
	}
}

