/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 00:51:51 by ddiniz            #+#    #+#             */
/*   Updated: 2022/02/17 00:53:47 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char *str = "é";

	printf("R: %d\n", ft_str_is_uppercase(str));
}
