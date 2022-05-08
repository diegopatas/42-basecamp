/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorres- <etorres-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:56:10 by etorres-          #+#    #+#             */
/*   Updated: 2022/02/17 23:15:32 by etorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	arg_index;
	int	str_index;

	arg_index = 1;
	while (arg_index < argc)
	{
		str_index = 0;
		while (argv[arg_index][str_index])
		{
			write(1, &(argv[arg_index][str_index]), 1);
			str_index++;
		}
		write(1, "\n", 1);
		arg_index++;
	}
	return (0);
}
