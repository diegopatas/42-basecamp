/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   6_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 22:14:00 by ddiniz            #+#    #+#             */
/*   Updated: 2022/02/15 22:17:51 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char *str = "frase";
	int num_return;

	num_return = ft_strlen(str);
	printf("Num: %d\n", num_return);
}
