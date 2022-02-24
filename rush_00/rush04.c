/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccamargo <ccamargo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 23:37:33 by ccamargo          #+#    #+#             */
/*   Updated: 2022/02/07 02:03:02 by ccamargo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

/*Esta função desenha na tela a primeira linha do retângulo e é a única
garantida de realizar algo. Esse algo é imprimir na tela um único caracter, no
caso um A, caso o retângulo que busque ser desenhado seja de 1x1. Após isso ela
verifica se o retângulo a ser desenhado terá mais de uma coluna. Caso positivo,
e caso o retângulo deva ter mais de duas colunas, ela escreve B até a penúltima
posição. Por último ela escreve o caracter da última coluna; um C; desse o
terminal para a linha de baixo e termina seu trabalho.*/
void	ft_print_first_line(int x)
{
	int	ix;

	ix = 1;
	ft_putchar('A');
	if (x > 1)
	{
		while (ix < (x - 1))
		{
			ft_putchar('B');
			ix++;
		}
		ft_putchar('C');
	}
	ft_putchar('\n');
}

/*Esta função desenha na tela as linhas do meio do retângulo caso ele deva ter
mais de duas linhas. Ela desenha quantas linhas forem necessárias até a
penúltima linha. Ela verifica imprime um B na primeira e última coluna do
retângulo e imprime espaços em branco no meio do retângulo. Ao terminar de
desenhar a última linha que lhe cabe, ela leva o cursor para a linha de baixo
e termina seu trabalho.*/
void	ft_print_middles_lines(int x, int y)
{
	int	ix;
	int	iy;

	ix = 0;
	iy = 1;
	if (y > 2)
	{
		while (iy < (y - 1))
		{
			ix = 0;
			while (ix <= x)
			{
				if (ix == 0 || ix == (x - 1))
					ft_putchar('B');
				else
					ft_putchar(' ');
				ix++;
			}
			ft_putchar('\n');
			iy++;
		}
	}
}

/*Esta função desenha a última linha e seu comportamento é quase igual a função
que desenha a primeira. No caso ela imprime o caracter C na primeira coluna.
Verifica se o retângulo a ser desenhado terá mais de uma coluna. Caso positivo,
e caso o retângulo deva ter mais de duas colunas, ela escreve B até a penúltima
posição. Ao final disso, ela escreve A na última posição, move o cursor para a
linha de baixo e termina seu trabalho.*/
void	ft_print_last_line(int x, int y)
{
	int	ix;

	ix = 1;
	if (y > 1)
	{
		ft_putchar('C');
		if (x > 1)
		{
			while (ix < x - 1)
			{
				ft_putchar('B');
				ix++;
			}
			ft_putchar('A');
		}
		ft_putchar('\n');
	}
}

/*Esta função apenas recebe o chamado da função main() e verifica se o número de
colunas e linhas passado é pelo menos 1. Afinal não existe retângulo de lado 0.
Após essa verificação ela começa a chamar as outras funções que desenharão o 
retângulo. Primeiro a função ft_print_first_line() que desenhará a primeira
linha, depois a ft_print_middle_lines() que desenhará as linhas do meio do
retângulo e por último a função ft_print_last_line() que desenhará a ultima
linha do retângulo.*/
void	rush(int x, int y)
{
	if (x >= 1 && y >= 1)
	{
		ft_print_first_line(x);
		ft_print_middles_lines(x, y);
		ft_print_last_line(x, y);
	}
}
