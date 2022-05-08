/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0_procura_3,4.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 20:26:17 by coder             #+#    #+#             */
/*   Updated: 2022/02/13 23:40:29 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_3_colup(int *tab_res, int * tab_0) //encontra 3 na tabela e preenche tab_0 com 3
{
	int row = 1;
	int col = 1;
	int count = 0;
	int delta = 0;
	
	while(col < 5 && col > 0)
	{
		while (row < 5 && row > 0)
		{
			if(tab_res[row][col] == 3 && 4 - ft_check_col(tab_res, col) < 3)
			{
				if(4 - ft_check_col(tab_res,col) == 1)
					tab_0[row][col] = 3;
				if(((tab_0[0][col] - ft_colup(tab_0,col)) == 1) 
					tab_0[row][col] = 2;
				else if ((tab_0[0][col] - ft_colup(tab_0,col)) == 2)
					tab_0[row][col] = 1;
				ft_matrix_row(tab_0);
				ft_matrix_column(tab_0);
				ft_matrix_res(*tab_row, *tab_col);
			}
			row++;
		}
		col++;
		row = 1;
	}
}



void ft_3_rowleft(int *tab_res, int * tab_0) //encontra 3 na tabela e preenche tab_0 com 3
{
	int row = 1;
	int col = 1;
	int count = 0;
	int delta = 0;
	
	while(row < 5)
	{
		while (col < 5)
		{
			if(tab_res[row][col] == 3 && 4 - ft_check_row(tab_res, row) < 3)
			{
				if(4 - ft_check_row(tab_res,row) == 1)
					tab_0[row][col] = 3;
				if(((tab_0[row][0] - ft_rowleft(tab_0,col)) == 1) 
					tab_0[row][col] = 2;
				else if ((tab_0[row][0] - ft_rowleft(tab_0,col)) == 2)
					tab_0[row][col] = 1;
				ft_matrix_row(tab_0);
				ft_matrix_column(tab_0);
				ft_matrix_res(*tab_row, *tab_col);
			}
			col++;
		}
		row++;
		col = 1;
	}
}

void ft_3_coldown(int *tab_res, int * tab_0) //encontra 3 na tabela e preenche tab_0 com 3
{
	int row = 1;
	int col = 1;
	int count = 0;
	int delta = 0;
	
	while(col < 5 && col > 0)
	{
		while (row < 5 && row > 0)
		{
			if(tab_res[row][col] == 3 && 4 - ft_check_col(tab_res, col) < 3)
			{
				if(4 - ft_check_col(tab_res,col) == 1)
					tab_0[row][col] = 3;
				if(((tab_0[6][col] - ft_coldown(tab_0,col)) == 1) 
					tab_0[row][col] = 2;
				else if ((tab_0[6][col] - ft_coldown(tab_0,col)) == 2)
					tab_0[row][col] = 1;
				ft_matrix_row(tab_0);
				ft_matrix_column(tab_0);
				ft_matrix_res(*tab_row, *tab_col);
			}
			row++;
		}
		col++;
		row = 1;
	}
}

void ft_3_rowright(int *tab_res, int * tab_0) //encontra 3 na tabela e preenche tab_0 com 3
{
	int row = 1;
	int col = 1;
	int count = 0;
	int delta = 0;
	
	while(row < 5)
	{
		while (col < 5)
		{
			if(tab_res[row][col] == 3 && 4 - ft_check_row(tab_res, row) < 3)
			{
				if(4 - ft_check_row(tab_res,row) == 1)
					tab_0[row][col] = 3;
				if(((tab_0[row][6] - ft_rowright(tab_0,col)) == 1) 
					tab_0[row][col] = 2;
				else if ((tab_0[row][6] - ft_rowright(tab_0,col)) == 2)
					tab_0[row][col] = 1;
				ft_matrix_row(tab_0);
				ft_matrix_column(tab_0);
				ft_matrix_res(*tab_row, *tab_col);
			}
			col++;
		}
		row++;
		col = 1;
		
	}
}

void ft_4_coldown(int *tab_res, int * tab_0) //encontra 4 na tabela e preenche tab_0
{
	int row = 1;
	int col = 1;
	int count = 0;
	int delta = 0;
	
	while(col < 5 && col > 0)
	{
		while (row < 5 && row > 0)
		{
			if(tab_res[row][col] == 4)
			{
				if(4 - ft_check_col(tab_res,col) == 1)
					tab_0[row][col] = 4;
				if(((tab_0[0][col] - ft_coldown(tab_0,col)) == 1) 
					tab_0[row][col] = 3;
				else if ((tab_0[0][col] - ft_coldown(tab_0,col)) == 2)
					tab_0[row][col] = 1;
				ft_matrix_row(tab_0);
				ft_matrix_column(tab_0);
				ft_matrix_res(*tab_row, *tab_col);
			}
			row++;
		}
		col++;
		row = 1;
	}
}

void ft_4_colup(int *tab_res, int * tab_0) //encontra 4 na tabela e preenche tab_0
{
	int row = 1;
	int col = 1;
	int count = 0;
	int delta = 0;
	
	while(col < 5 && col > 0)
	{
		while (row < 5 && row > 0)
		{
			if(tab_res[row][col] == 4)
			{
				if(4 - ft_check_col(tab_res,col) == 1)
					tab_0[row][col] = 4;
				if(((tab_0[0][col] - ft_colup(tab_0,col)) == 1) 
					tab_0[row][col] = 3;
				else if ((tab_0[0][col] - ft_colup(tab_0,col)) == 2)
					tab_0[row][col] = 1;
				ft_matrix_row(tab_0);
				ft_matrix_column(tab_0);
				ft_matrix_res(*tab_row, *tab_col);
			}
			row++;
		}
		col++;
		row = 1;
	}
}

void ft_4_rowright(int *tab_res, int * tab_0) //encontra 4 na tabela e preenche tab_0
{
	int row = 1;
	int col = 1;
	int count = 0;
	int delta = 0;
	
	while(row < 5)
	{
		while (col < 5)
		{
			if(tab_res[row][col] == 4)
			{
				if(4 - ft_check_row(tab_res,row) == 1)
					tab_0[row][col] = 4;
				if(((tab_0[row][6] - ft_rowright(tab_0,col)) == 1) 
					tab_0[row][col] = 3;
				else if ((tab_0[row][6] - ft_rowright(tab_0,col)) == 2)
					tab_0[row][col] = 1;
				ft_matrix_row(tab_0);
				ft_matrix_column(tab_0);
				ft_matrix_res(*tab_row, *tab_col);
			}
			col++;
		}
		row++;
		col = 1;
		
	}
}

void ft_4_rowleft(int *tab_res, int * tab_0) //encontra 4 na tabela e preenche tab_0
{
	int row = 1;
	int col = 1;
	int count = 0;
	int delta = 0;
	
	while(row < 5)
	{
		while (col < 5)
		{
			if(tab_res[row][col] == 4)
			{
				if(4 - ft_check_row(tab_res,row) == 1)
					tab_0[row][col] = 4;
				if(((tab_0[row][6] - ft_rowleft(tab_0,col)) == 1) 
					tab_0[row][col] = 3;
				else if ((tab_0[row][6] - ft_rowleft(tab_0,col)) == 2)
					tab_0[row][col] = 1;
				ft_matrix_row(tab_0);
				ft_matrix_column(tab_0);
				ft_matrix_res(*tab_row, *tab_col);
			}
			col++;
		}
		row++;
		col = 1;
		
	}
}

int ft_find3(int *tab_res, int * tab_0)
{
	ft_3_colup(int *tab_res, int * tab_0);
	ft_3_coldown(int *tab_res, int * tab_0);
	ft_3_rowleft(int *tab_res, int * tab_0);
	ft_3_rowright(int *tab_res, int * tab_0);
	return tab_0;
}

int ft_find4(int *tab_res, int * tab_0)
{
	ft_4_colup(int *tab_res, int * tab_0);
	ft_4_coldown(int *tab_res, int * tab_0);
	ft_4_rowleft(int *tab_res, int * tab_0);
	ft_4_rowright(int *tab_res, int * tab_0);
	return tab_0;
}