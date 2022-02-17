/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:32:27 by ddiniz            #+#    #+#             */
/*   Updated: 2022/02/17 05:44:03 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char dest[9];
	char *src = "teste";
	//	char	str[] = "casa de sol";
	//	char	str[] = "casa de12 3sol";
	//	char	str[] = "casadesol";
	//	char	str[] = "121lkdlmmmNNmK";
	//	char	str[] = "ACADADIAQUEPASSA";
	// char	str[] = "";

	printf("Result: %s\n", ft_strcpy(dest, src));
}
