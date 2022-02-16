/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:21:28 by ddiniz            #+#    #+#             */
/*   Updated: 2022/02/08 18:20:24 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	ch1;

	ch1 = 'z';
	while (ch1 >= 'a')
	{
		write(1, &ch1, 1);
		ch1--;
	}
}
