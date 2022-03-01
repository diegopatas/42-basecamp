/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0_matriz_soma.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 20:15:59 by coder             #+#    #+#             */
/*   Updated: 2022/02/14 03:06:27 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_matrix_row(int *tab_0)
{
	int row;
	int col;
	int tab_row[6][6];

	row = 0;
	col = 0;
	while (row < 7)
	{
		while (col < 7)
		{
			if(row == 0 || row == 6)
				tab_row[row][col] = tab_0[row][col];
			else if(row > 0 && row < 6 && col > 0 && col < 6)
			{
				if(tab_row[_row][col > 0)
					tab_row[row][col] = 0;
				else
					tab_row[row][col] = 10 - tab_0[row][1] - tab_0[row][2] - tab_0[row][3] - tab_0[row][4];
			}
			col++;	
		}
		row++;
		col = 1;
	}
	return (tab_row);
}

int ft_matrix_column(int *tab_0)
{
	int row;
	int col;
	int tab_col[6][6];
	
	row = 0;
	col = 0;
	while (col < 7)
	{
		while (row < 7)
		{
			if (col == 0 || col == 6)
				tab_col[row][col] = tab_0[row][col]
			else if (col > 0 && col < 6 && row > 0 && row < 6)
			{
				if (tab_col[row][col] > 0)
					tab_col[row][col] = 0;
				else
					tab_col[row][col] = 10 - tab_0[1][col] - tab_0[2][col] - tab_0[3][col] - tab_0[4][col];
			}
			col++;	
		}
		row = 1;
		col++;
	}
	return (tab_col);
}

//matriz resultante, menor valor entre linha e coluna
int ft_matrix_res(int *tab_row, int *tab_col)
{
	int col;
	int row;
	int tab_res[6][6];

	col = 0;
	row = 0;
	while (col < 7)
	{
		while (row < 7)
		{
			if (tab_row[row][col] <= tab_col[row][col])
				tab_res[row][col] = tab_row[row][col];
			else
				tab_res[row][col] = tab_col[row][col];
			count_row++;
		}
		col++;
		row = 0;
	}
	return (tab_res);
}
