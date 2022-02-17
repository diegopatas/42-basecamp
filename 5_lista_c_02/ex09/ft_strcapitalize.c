/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 02:03:36 by ddiniz            #+#    #+#             */
/*   Updated: 2022/02/17 14:55:19 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_low(char ch)
{
	int	valid;

	valid = 0;
	if ((ch >= 'a') && (ch <= 'z'))
	{
		valid = 1;
	}
	return (valid);
}

int	is_ant_valid(char ch)
{
	int	valid;

	valid = 1;
	if (((ch >= 'A') && (ch <= 'Z'))
		|| ((ch >= '0') && (ch <= '9'))
		|| ((ch >= 'a') && (ch <= 'z')))
	{
		valid = 0;
	}
	return (valid);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_strlowcase(str);
	i = 1;
	if ((str[0] >= 'a') && (str[0] <= 'z'))
	{
		str[0] -= 32;
	}
	while (str[i] != '\0')
	{
		if ((is_low(str[i]) == 1) && (is_ant_valid(str[i - 1]) == 1)
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
