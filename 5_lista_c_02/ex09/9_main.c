/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   9_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 03:24:28 by ddiniz            #+#    #+#             */
/*   Updated: 2022/02/17 03:39:50 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	// char *str;

	char	src[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	// char	src[] = "meu 42nome É cassiano \n \r casa@#$@$@2";
		// char	src[] = "A MINHA CASA ççébRANCA 1231";
	//	char	src[] = "";
		// char	src[] = "minhA cAsA e verde e tem1 c113aldos";	
	
	printf("R: %s", ft_strcapitalize(src));
}