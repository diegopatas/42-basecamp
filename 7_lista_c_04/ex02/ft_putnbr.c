/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 03:35:27 by ddiniz            #+#    #+#             */
/*   Updated: 2022/02/19 04:33:26 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_print(int i, char *nbr);

void    ft_putnbr(int nb)
{
    int        i;
    int        valor;
    char    nbr[10];

    i = 0;
    valor = nb;
    if (nb < 0)
    {
        nb = nb * -1;
        write (1, "-", 1);
    }
    if (nb == 0)
        write (1, "0", 1);
    else if (nb == -2147483648)
        write (1, "2147483648", 10);
    while (nb > 0)
    {
        valor = nb % 10;
        nbr[i] = valor + '0';
        nb = nb / 10;
        i++;
    }
    i--;
    ft_print (i, nbr);
}

void    ft_print(int i, char *nbr)
{
    while (i >= 0)
    {
        write (1, &nbr[i], 1);
        i--;
    }
}