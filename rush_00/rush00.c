/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccamargo <ccamargo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 23:37:33 by ccamargo          #+#    #+#             */
/*   Updated: 2022/02/07 02:04:42 by ccamargo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_first_line(int x)
{
	int	ix;

	ix = 1;
	ft_putchar('o');
	if (x > 1)
	{
		while (ix < (x - 1))
		{
			ft_putchar('-');
			ix++;
		}
		ft_putchar('o');
	}
	ft_putchar('\n');
}

void	ft_print_middles_lines(int x, int y)
{
	int	ix;
	int	iy;

	ix = 0;
	iy = 1;
	if (y > 2)
	{
		while (iy < (y - 1))
		{
			ix = 0;
			while (ix <= x)
			{
				if (ix == 0 || ix == (x - 1))
					ft_putchar('|');
				else
					ft_putchar(' ');
				ix++;
			}
			ft_putchar('\n');
			iy++;
		}
	}
}

void	ft_print_last_line(int x, int y)
{
	int	ix;

	ix = 1;
	if (y > 1)
	{
		ft_putchar('o');
		if (x > 1)
		{
			while (ix < x - 1)
			{
				ft_putchar('-');
				ix++;
			}
			ft_putchar('o');
		}
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if (x >= 1 && y >= 1)
	{
		ft_print_first_line(x);
		ft_print_middles_lines(x, y);
		ft_print_last_line(x, y);
	}
}
