/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 00:46:01 by ddiniz            #+#    #+#             */
/*   Updated: 2022/02/17 00:49:16 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char *str = " ";

	printf("R: %d\n", ft_str_is_lowercase(str));
}
