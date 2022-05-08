/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:13:09 by ddiniz            #+#    #+#             */
/*   Updated: 2022/02/16 01:05:31 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;
	int	i;

	i = 0;
	while (i <= size)
	{
		aux = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = aux;
		i++;
		size--;
	}
}
