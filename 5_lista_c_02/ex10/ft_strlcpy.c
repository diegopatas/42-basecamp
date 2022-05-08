/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 04:33:12 by ddiniz            #+#    #+#             */
/*   Updated: 2022/02/17 18:12:46 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while ((i < size) && (src[i] != '\0'))
	{
		dest[i] = src[i];
			i++;
	}
	if (i == size)
		dest[i - 1] = '\0';
	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}
