/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 19:11:30 by hbatista          #+#    #+#             */
/*   Updated: 2022/02/19 01:34:25 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	factorial ;

	if (nb < 0 || nb >= 12)
		return (0);
	i = 1;
	factorial = 1;
	while (i <= nb)
	{
		factorial *= i;
		i++;
	}
	return (factorial);
}

int    ft_iterative_factorial(int nb);

int    main()
{
    int result = ft_iterative_factorial(4);
    printf("4 should return 24 ---> %d\n", result);

    result = ft_iterative_factorial(10);
    printf("10 should return 243628800 ---> %d\n", result);

    // result = ft_iterative_factorial(20);
    // printf("20 should return 0 ---> %d\n", result);

    result = ft_iterative_factorial(0);
    printf("0 should return 0 ---> %d\n", result);

    result = ft_iterative_factorial(-2);
    printf("-2 should return 0 ---> %d\n", result);

    result = ft_iterative_factorial('a');
    printf("'a' should return 0 ---> %d\n", result);
}