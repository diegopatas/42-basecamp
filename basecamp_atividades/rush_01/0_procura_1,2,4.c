/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0_procura_1,2,4.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 20:24:43 by coder             #+#    #+#             */
/*   Updated: 2022/02/14 03:25:20 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

//conta quantos 10 existem na matriz res
int	count_10(int *tab_res, int *tab_0)
{
	int	row;
	int	col;
	int	count;

	row = 0;
	col = 0;
	count = 0;
	while (col < 7)
	{
		while (row < 7)
		{
			if (tab_res[row][col] == 10)
				count++;
			row++;
		}
		col++;
	}
	return (count);
}

//varre 10 unico e preenche com 4
void	ft_find_10(int *tab_res, int *tab_0)
{
	int	row;
	int	col;
	int	count;

	row = 0;
	col = 0;
	count = 0;
	if (count_10(*tab_res, *tab_0) == 1)
	{
		while (col < 7)
		{
			while (row < 7)
			{
				if (tab_res[row][col] == 10)
				{
					tab_0[row][col] = 4;
					count++;
				}
				row++;
			}
			col++;
			row = 1;
		}
	}
}

//encontra 1 ou 2 na tabela res e preenche tab_0 com 1 ou 2
void	ft_find_1_2(int *tab_res, int *tab_0)
{
	int	row;
	int	col;
	int	count;

	row = 1;
	col = 1;
	count = 1;
	while (col < 5 && col > 0)
	{
		while (row < 5 && row > 0)
		{
			if (tab_res[row][col] == 1)
			{
				tab_0[row][col] = 1;
				count++;
			}
			else if (tab_res[row][col] == 2)
			{
				tab_0[row][col] = 2;
				count++;
			}
			row++;
		}
		col++;
		row = 1;
	}
}
