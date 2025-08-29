# 🖇️ Ponteiros em C

## 🔹 Conceito
Um **ponteiro** é uma variável especial que armazena o **endereço de memória** de outra variável.  
Em vez de guardar um valor diretamente (como `int` ou `char`), ele **“aponta”** para onde esse valor está localizado na memória.

💡 **Exemplo:**
```c
int x = 10;
int *p = &x;  // p guarda o endereço de x
printf("%d", *p); // acessa o valor de x através do ponteiro (imprime 10)
```

### Por que utilizar ? 

Manipulação eficiente de dados: Em vez de copiar grandes blocos de dados, podemos passar o endereço de memória desses dados para uma função. Isso economiza tempo e memória.

Alocação dinâmica de memória: Eles permitem que o programa solicite memória durante a execução, o que é crucial para trabalhar com estruturas de dados de tamanho variável, como listas ligadas e arrays dinâmicos.

Compartilhamento de dados: Múltiplas funções podem acessar e modificar a mesma variável na memória, bastando passar o ponteiro para essa variável.

### Como os ponteiros foram utilizados nas atividades
# Passagem de argumentos por referência
	Funções que precisavam alterar dados fora de seu escopo receberam endereços de memória como parâmetros.
	Exemplo: funções que invertiam arrays ou calculavam totais de pontuação.

# Acesso a matrizes 2D usando aritmética de ponteiros
Em vez de usar a notação matriz[i][j], acessamos elementos com:
```c
*(p + i * qtdColunas + j)
```

# Cálculos e análises diretamente na memória

- Somatória de pontos por jogador

- Determinar jogador vencedor

- Contagem de elementos pares e ímpares

- Tudo isso foi feito sem copiar os dados, apenas manipulando os ponteiros.