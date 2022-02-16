/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argc_argv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 23:26:27 by ddiniz            #+#    #+#             */
/*   Updated: 2022/02/14 17:11:46 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_valid(char param)
{
	int	i;
	int is_even;

	i = 0;
	is_even = i % 2;
	if (is_even == 0)
	{
		if (param[i] < '0' || param[i] > '9')
			return (0);
	}
	else if (is_even != 0)
	{
		if (param[i] != ' ')
			return (0);
	}
	else
	{
		return (1);
	}
}

void	ft_putnumber_decimals(int k, int *extra, int **tab_result)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while ((i < 5) && (j < 3))
	{
		**tab_result[k][i] = *extra[j];
		i++;
		j++;
	}
}

void	ft_putnumber_zeros(int *extra, int **tab_result)
{
	int	i;
	int	j;
	
	tab_result[0][0] = 0;
	tab_result[0][5] = 0;
	tab_result[5][0] = 0;
	tab_result[5][5] = 0;
	i = 1;
	j = 1;
	while ((i < 5) && (j < 5))
	{
		tab_result[i][j] = 0;
		i++;
		j++;
	}
}

void	ft_create_box(int *extra, int **tab_result)
{
	int k;
	ft_putnumber_zeros(extra, tab_result);
	ft_putnumber_decimals(0, extra, tab_result);
	ft_putnumber_decimals(5, extra, tab_result);
}

int	main(int argc, char **argv)
{
	int	i;
	int	numb_scan[15];
	int	box[5][5];

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] && is_valid(argv[1][i]))
		{
			is_even = i % 2;
			if (is_even == 0)
			{
				numb_scan[i] = argv[1][i] - '0';
			}
			i++;
		}
		ft_create_box(numb_scan, box);
	}
}
