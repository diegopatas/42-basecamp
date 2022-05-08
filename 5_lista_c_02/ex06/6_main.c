/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   6_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 01:00:52 by ddiniz            #+#    #+#             */
/*   Updated: 2022/02/17 01:09:55 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char *str = "";

	printf("R: %d\n", ft_str_is_printable(str));
}
