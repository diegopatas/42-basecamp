/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 22:01:45 by ddiniz            #+#    #+#             */
/*   Updated: 2022/02/17 23:53:51 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	*str = "Minha string teste";
	char	*to_find = "i";
	
	char	*str1 = "Minha string teste";
	char	*to_find1 = "i";

	printf("R: %s\n", ft_strstr(str, to_find));
	printf("R: %s\n", strstr(str1, to_find1));
}
