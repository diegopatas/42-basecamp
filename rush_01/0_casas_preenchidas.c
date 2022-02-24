/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0_casas_preenchidas.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 20:20:19 by coder             #+#    #+#             */
/*   Updated: 2022/02/14 02:58:02 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_check_col(int *tab_res, int col)
{
	int	row;
	int	count;

	row = 1;
	count = 0;
	while (row < 5)
	{
		if (tab_0[row][col] > 0)
			count++;
		row++;
	}
	return (count);
}

int	ft_check_row(int *tab_res, int row)
{
	int	col;
	int	count;

	col = 1;
	count = 0;
	while (col < 5)
	{
		if (tab_0[row][col] > 0)
			count++;
		col++;
	}
	return (count);
}
