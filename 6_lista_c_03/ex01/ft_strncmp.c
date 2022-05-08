/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:02:44 by ddiniz            #+#    #+#             */
/*   Updated: 2022/02/17 18:54:17 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				value;
	unsigned int	i;

	value = 0;
	i = 0;
	while ((i < n) || ((s1[i] != '\0') && (s2[i] != '\0')))
	{
		value = s1[i] - s2[i];
		if (value != 0)
			return (value);
		i++;
	}
	return (value);
}
