/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-sous <gde-sous@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 04:55:51 by gde-sous          #+#    #+#             */
/*   Updated: 2022/02/14 03:27:29 by gde-sous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	char	numb[16];
	char	tab[6][6];
	int		j;
	int		i;

	numb[16] = {"4321122241211222"};
	tab[6][6] = {
	{' ', numb[0], numb[1], numb[2], numb[3], ' '},
	{numb[8], '	', '	', '	', ' ', numb[12]},
	{numb[9], '	', '	', ' ', ' ', numb[13]},
	{numb[10], '	', ' ', ' ', ' ', numb[14]},
	{numb[11], '	', ' ', ' ', ' ', numb[15]},
	{'	', numb[4], numb[5], numb[6], numb[7], '	'}};
	i = 0;
	while (i < 6)
	{
		j = 0;
		while (j < 6)
		{
			write (1, &tab[i][j], 1);
			if (tab[0][j] == '4' && tab[5][j] == '1')
			{
			tab[1][j] = '1';
			tab[2][j] = '2';
			tab[3][j] = '3';
			tab[4][j] = '4';
			}
			if (tab[0][j] == '1' && tab[5][j] == '4')
			{
				tab[1][j] = '4';
				tab[2][j] = '3';
				tab[3][j] = '2';
				tab[4][j] = '1';
			}
			if (tab[i][0] == '1')
				tab[i][1] = '4';
			if (tab[i][0] == '4')
				tab[i][1] = '1';
			if (tab[i][0] == '4')
			{
				tab[i][1] = '1';
				tab[i][2] = '2';
				tab[i][3] = '3';
				tab[i][4] = '4';
			}
			if (tab[5][j] == '1')
				tab[4][j] = '4';
			if (tab[i][5] == '1')
				tab[i][4] = '4';
			if (tab[i][0] == '1' && tab[i][5] == '2')
				tab[i][4] = '3';
			if (tab[0][j] == '1' && tab[5][j] == '2')
				tab[4][j] = '3';
			j++;
		}
		write (1, "\n", 1);
		i++;
	}
	return (0);
}
