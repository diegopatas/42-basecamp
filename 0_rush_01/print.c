/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 01:20:50 by coder             #+#    #+#             */
/*   Updated: 2022/02/14 02:47:04 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_print(int *tab_0[int row][int col])
{
	char text;
	int *value;

	row = 1;
	col = 1;
	while (row < 5)
	{
		while (col < 5)
		{
			*value = tab_0[row][col];
			text = value + '0';
			write(1, &text, 1);
			if (col == 4)
				write(1, &"\n", 1);
			col++;
		}
		row++;
		col = 1;
	}
}
