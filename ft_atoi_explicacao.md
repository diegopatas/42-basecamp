# Exercício ATOI: c04/ex03

O que é?
 - transformar alpha em int: atoi

Procedimento
 - vejamos os casos:
	- num positivo (ou seja, só numeros positivos na string)
	- num negativo (ou seja, há um num negativo ou positivo na string)
	- string com espacos, sinais, misturas


## CASO: STRING DE UM NUM POSITIVO (ou seja, sua string tem apenas num char *str ="8478";)

```c
#include <stdio.h>

int	ft_atoi_p(char *str)
{
	int result; //seu retorno
	int i;		//seu index;

	i = 0;
	result = 0;
	while (str[i] != '0')
	{
		result = result * 10 + (str[i] - '0'); // em i=0, quanto vale result? e em i=1?
		i++;
	}
	return (result);	//se str =""; quanto é o result?
}

int	main(void)
{
	char *str = "8478";

	printf("Retornado: %d\n", ft_atoi_p(str));
	return (0);
}
```

## CASO: STRING DE UM NUM NEGATIVO (ou seja, char *str ="-8478";)

```c
#include <stdio.h>

ft_atoi_n(char *str)
{
	int	result;
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	result = 0;
	if (str[0] == '-')
	{
		sign = sign * -1;
		i++;
	}
	while (str[i] != '\0')
	{
		result = result * 10 + (str[i] -'0');
		i++;
	}
	return (result * sign);
}

int	main(void)
{
	char *str = "8478";

	printf("Retornado: %d\n", ft_atoi_p(str));
	return (0);
}
```

## CASO: exercício original (ou seja char *str = "  ---+--+1234ab567")

Enunciado:

1. usamos um while para valida o inicio da string, que pode ter "whitespaces" ver apêndice ou ver man isspace(3);
3. depois, usamos um while para validar qte de sinais -/+, se houver numero impar de (-), entao o resultado é neg;
4. seguindo, usamos um while para construir nosso numero a partir da base 10 (identico aos ex anteriores);
5. E o overflow/ underflow??? não precisamos considerar esses casos
6. Atencao: se voce testar a str do exercicio na atoi original, vai dar zero pq ela nao faz o tratamento de --, --+, e coisas do tipo, ela considera apenas - uma vez apenas

```c
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	result;
	int	sign;
	int	i;

	i = 0;
	sign = 1;
	result = 0;
	while (((str[i] >= 9) && (str[i] <= 13)) || str[i] == 32) //while para validar que os primeiros chars sao 'white spaces', veja tabela ascii
	{
		i++;
	}
	while ((str[i] == '-') || (str[i] == '+')) //while para validar sinais -/=
	{
		if (str[i] == '-')
			sign = sign * -1; //toda vez que aparece (-) o sinal altera, entao nao é necessário conferir se '-' apareceu um num impar de vezes
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9') //while para construir nosso num, que para quando achamos o char a do exercicio
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

int	main(void)
{
	char *str = "  ---+--1243ab567";

	printf("Returned: %d\n", ft_atoi(str));
	printf("Returned: %d\n", atoi(str));
}
```

## Apêndice:
### O que é atoi?

- Atoi: The atoi() function converts the initial portion of the string pointed to by nptr to int.

 - man de isspace(3): checks for white-space characters. 
In the "C" and "POSIX" locales, these are: 
 - space, form-feed ('\f'), 
 - newline ('\n'), 
 - carriage return ('\r'),
 - horizontal tab ('\t'),
 - vertical tab ('\v').
ASCII: de 9 ate 13

https://linux.die.net/man/3/isspace