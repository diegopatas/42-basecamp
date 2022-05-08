/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorres- <etorres-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 20:40:51 by etorres-          #+#    #+#             */
/*   Updated: 2022/02/18 03:51:57 by etorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2);
void	sort(char *argv[], int size);

int	main(int argc, char *argv[])
{
	int	argv_index;
	int	str_index;

	sort(argv, argc);
	argv_index = 1;
	while (argv_index < argc)
	{
		str_index = 0;
		while (argv[argv_index][str_index])
		{
			write(1, &(argv[argv_index][str_index]), 1);
			str_index++;
		}
		write(1, "\n", 1);
		argv_index++;
	}
}

void	sort(char *argv[], int size)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < (size - 1))
	{
		j = 1;
		while (j < (size - 1))
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				temp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}
