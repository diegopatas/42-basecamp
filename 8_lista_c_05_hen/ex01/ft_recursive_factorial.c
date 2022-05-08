/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 13:49:03 by hbatista          #+#    #+#             */
/*   Updated: 2022/02/19 01:36:29 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb <= 0 || nb > 12)
		return (0);
	if (nb == 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

int    main()
{
    int result = ft_recursive_factorial(4);
    printf("4 should return 24 ---> %d\n", result);

    result = ft_recursive_factorial(10);
    printf("10 should return 243628800 ---> %d\n", result);

    // result = ft_recursive_factorial(20);
    // printf("20 should return 0 ---> %d\n", result);

    result = ft_recursive_factorial(0);
    printf("0 should return 0 ---> %d\n", result);

    result = ft_recursive_factorial(-2);
    printf("-2 should return 0 ---> %d\n", result);

    result = ft_recursive_factorial('a');
    printf("'a' should return 0 ---> %d\n", result);
}