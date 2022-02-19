/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorres- <etorres-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:52:47 by etorres-          #+#    #+#             */
/*   Updated: 2022/02/17 23:15:20 by etorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	(void) argc;
	while (argv[0][i])
	{
		write(1, &(argv[0][i]), 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
