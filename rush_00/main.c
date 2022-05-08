/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 23:53:21 by ccamargo          #+#    #+#             */
/*   Updated: 2022/02/14 20:34:22 by ddiniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

/*A função main() é a primeira a ser executada no início do programa, nossa
implementação recebe os parâmetros do número de linhas e colunas que se deseja
para desenhar um retângulo. Para passarmos os parâmetros executamos o binário
e passamos os parâmetros em seguida, separados por um espaço. (ex: para desenhar
um retângulo de 5x5 se digita no terminal: ./rush04.out 5 5 )
A função main() recebe esses parâmetros usando o argc e argv.
argc recebe a quantidade de argumentos passados. Sempre argc tem valor de pelo
menos 1, pois o nome do próprio programa é um parâmetro. Devido a isso que temos
que verificar se três argumentos foram passados e não somente dois. Um para o
número de colunas, outro para o número de linhas e um obrigatório que é o nome do
programa. 
argv recebe os valores dos argumentos passados na forma de strings. O primeiro
valor é sempre o nome do programa.
Como os valores dos argumentos são passados na forma de strings, temos que
convertê-los para inteiros para podermos utilizá-los corretamente. Isso é feito
pelos whiles e pelas linhas "col = (col * 10) + argv[1][i] - 48;" e
"lin = (lin * 10) + argv[2][i] - 48;" Elas pegam caracter a caracter dos numeros
passados no formato de string e multiplicam por 10, de forma que assim monte uma
variável inteira com o numero passado. O -48 diz respeito aos valores na tabela
ASCII dos caracteres de números tratados como tipo char. O caracter "1" tem valor
de 49 na tabela ASCII. Por isso da necessidade do -48. 49-48 = 1.
A função is_valid() verifica se os parâmetros passados contem apenas números
positivos. Ela retorna 0 (falso) caso possua algo que não um número e retorna
1 (verdadeiro) caso o parâmetro passado só possua números positivos.*/

int	is_valid(char *param)
{
	int	i;

	i = 0;
	while (param[i])
	{
		if (param[i] < '0' || param[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	col;
	int	lin;
	int	i;

	i = 0;
	col = 0;
	lin = 0;
	if (argc == 3)
	{
		while (argv[1][i] && is_valid(argv[1]))
		{
			col = (col * 10) + argv[1][i] - 48;
			i++;
		}
		i = 0;
		while (argv[2][i] && is_valid(argv[2]))
		{
			lin = (lin * 10) + argv[2][i] - 48;
			i++;
		}
		rush(col, lin);
	}
	return (0);	
}
