/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 23:50:10 by coder             #+#    #+#             */
/*   Updated: 2022/02/14 00:16:47 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_matrix_row(int tab_row, int *tab_0); //matriz soma resto da linha
int ft_matrix_column( int *tab_0); //matriz soma resto da coluna
int ft_matrix_res(int *tab_row, int *tab_col) //matriz resultado
int ft_check_col(int *tab_res, int col); //casas preenchidas coluna
int ft_check_row(int *tab_res, int row) //casas preenchidas linha
int ft_coldown(int *tab_0, int col); //retorna quantidade de blocos visiveis
int ft_rowleft(int *tab_0, int row); //retorna quantidade de blocos visiveis
int count_10(int *tab_res, int * tab_0) //conta quantos 10 existem na matriz res
void ft_find_10(int *tab_res, int * tab_0)	//varre 10 unico e preenche com 4
void ft_find_1_2(int *tab_res, int * tab_0) //encontra 1 ou 2 na tabela res e preenche tab_0 com 1 ou 2
void ft_3_colup(int *tab_res, int * tab_0) //encontra 3 col up
void ft_3_coldown(int *tab_res, int * tab_0) //encontra 3 col down
void ft_3_rowleft(int *tab_res, int * tab_0) //encontra 3 row left
void ft_3_rowright(int *tab_res, int * tab_0) //encontra 3 row right
int ft_find3(int *tab_res, int * tab_0) //roda as 4 funcoes que entra o 3
void ft_4_colup(int *tab_res, int * tab_0) //encontra 4 col up
void ft_4_coldown(int *tab_res, int * tab_0) //encontra 4 col down
void ft_4_rowleft(int *tab_res, int * tab_0) //encontra 4 row left
void ft_4_rowright(int *tab_res, int * tab_0) //encontra 4 row right
int ft_find4(int *tab_res, int * tab_0) //roda as 4 funcoes que entra o 4

int	main( int argc, char *argv[ ])
{
	int tab_res[6][6];
	int count_fill;
	
	tab_res = ft_fill_blanks(*tab_0, * tab_res);
	count_fill = 0;
	while(count_fill < 16)
	{
		ft_find_10(* tab_res,* tab_0);
		ft_find_1_2(*tab_res,* tab_0);
		ft_find3(*tab_res,* tab_0);
		ft_find4(*tab_res,* tab_0)
		if(ft_find_error(*tab_0) >= 1)
		{
			write(1, "Error", 5);
			write(1, "\n", 1);
			return (0);
		}
		count_fill = ft_count_fill(*tab_0);
	}
	
}

int ft_fill_blanks(int * tab_0, int *tab_res) //cria a matriz res
{
	int tab_row[6][6];
	int tab_col[6][6];
	
	tab_row = ft_matrix_row(* tab_0);
	tab_col = ft_matrix_column(* tab_0);
	tab_res = ft_matrix_res(*tab_row, *tab_col);
	return tab_res;	
}

int ft_count_fill(int *tab_0)
{
	int row;
	int col;
	
	row = 1;
	col = 1;
	while(col < 5)
	{
		while(row < 5)
		{
			if(tab_0[row][col] > 0)
				count++;
			row++;
		}
		col++;
		row = 1;
	}
	return count;
}

int ft_find_error(int *tab_0)
{
	int col;
	int row;
	int count;
	int find_error;

	col = 1;
	row = 1;
	count = 0;
	find_error = 0;
	while(col < 5)
	{
		while(row < 5)
		{
			count = tab[row][col];
			if(count > 10)
				find_error = 1;
			count++;
		}
		count = 0;
		col++;
		row = 1;
	}
	return find_error;
}
