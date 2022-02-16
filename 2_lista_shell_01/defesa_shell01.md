# Defesa

## Command to command

***ex01***

`groups` -> exibe o grupo do usuário

`coder=$FT_USER` -> define o user coder como uma var de ambiente

`|` -> redireciona a saída de um comando à entrada do segundo comando, não é uma execução meramente sequencial, entao ele ocorre ao mesmo tempo, mas redireciona a saída

`tr` -> traduz ou remove, entao ele traduz ou remove ' ' para ','

`-d` -> deleta, no caso, deleta quebra de linha

***ex02***

`find ./` -> procura na pasta e em todas as subpastas

`-type f` -> flag que filtra pelo tipo arquivo

`-name "*.sh"` -> flag que filtra todos files que terminam em .sh

`-exec command {} +` -> executa o command, no caso o basename, nos arquivos selecionados

`basename {}` -> retira o dir e o sufixo do nome

`\;` -> é um argumento usado por -exec para encerrar o loop de busca, poderiamos ter + (de append, podendo dar problemas e não exibir o esperado)

`cut -d` -> corta o ponto

`-f n-ésimo` -> considera os campos a partir do n-ésimo campo sempre começando por 1, e nesse caso queremos o 1

***ex03***

`find .` -> encontra tudo INCLUSIVE a pasta inicial

`|` -> redireciona a saída do primeiro comando como entrada para o segundo

`wc` -> conta ou palavras, ou bytes ou quebras de linha

`-l` -> entao usamos essa flag para contar as linhas quebradas, achando assim a contagem para pastas e arquivos regulares


***ex04***

`ifconfig` -> mostra as interfaces de rede

`|` -> redireciona a saída para o próximo comando, no caso o grep

`grep` -> busca a info no meio do arquivo para você e exibe a linha, procura a info sem o aspas


***ex06***

`\` -> usar barra para dar skip e criar nome do arquivo conforme pedido

`42` -> colocar numero dentro do arquivo

`touch -t` -> atualizar para 02/10/2021

`chmod` -> alterar permissoes do arquivo