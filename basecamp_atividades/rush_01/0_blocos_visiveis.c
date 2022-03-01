/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0_blocos_visiveis.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 20:17:51 by coder             #+#    #+#             */
/*   Updated: 2022/02/14 02:55:40 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
//retorna qtd de blocos visiveis
int	ft_coldown(int *tab_0, int col)
{
	int	row;
	int	tab_coldown[4];
	int	col_down;

	size = 1;
	row = 3;
	col_down = 1;
	tab_coldown[] = {1, 0, 0, 0};
	while (row > 1)
	{
		if (tab_coldown[row] > tab_coldown[row + 1])
		{
			size = tab_coldown[row];
			tab_coldown[row] = 1;
			col_down = col_down + 1;
		}
		row--;
	}
	return (col_down);
}

//retorna quantidade de blocos visiveis
int	ft_rowleft(int *tab_0, int row)
{
	int	col;
	int	tab_rowleft[4];
	int	row_left;

	size = 1;
	col = 3;
	row_left = 1;
	tab_rowleft[] = {1, 0, 0, 0};
	while (col < 5)
	{
		if (tab_rowleft[col] > tab_rowleft[col - 1])
		{
			size = tab_rowleft[row];
			tab_rowleft[row] = 1;
			row_left = row_left + 1;
		}
		col++;
	}
	return (row_left);
}

//retorna quantidade de blocos visiveis
int	ft_rowright(int *tab_0, int row)
{
	int	col;
	int	tab_rowright[4];
	int	row_left;

	size = 1;
	col = 3;
	row_right = 1;
	tab_rowright[] = {1, 0, 0, 0};
	while (col > 1)
	{
		if (tab_rowright[col] > tab_rowright[col + 1])
		{
			size = tab_rowright[row];
			tab_rowleft[row] = 1;
			row_left = row_left + 1;
		}
		col--;
	}
	return (row_left);
}

//retorna quantidade de blocos visiveis
int	ft_colup(int *tab_0, int col)
{
	int	row;
	int	tab_colup[4];
	int	col_up;

	size = 1;
	row = 2;
	col_up = 1;
	tab_colup[] = {1, 0, 0, 0};
	while (row < 5)
	{
		if (tab_colup[row] > tab_colup[row - 1])
		{
			size = tab_colup[row];
			tab_colup[row] = 1;
			col_up = col_up + 1;
		}
		row++;
	}
	return (col_up);
}
