/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorres- <etorres-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 20:02:15 by etorres-          #+#    #+#             */
/*   Updated: 2022/02/17 23:15:39 by etorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	arg_index;
	int	str_index;

	arg_index = argc - 1;
	while (arg_index > 0)
	{
		str_index = 0;
		while (argv[arg_index][str_index])
		{
			write(1, &(argv[arg_index][str_index]), 1);
			str_index++;
		}
		write(1, "\n", 1);
		arg_index--;
	}
	return (0);
}
