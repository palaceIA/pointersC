#include <stdio.h>

void mostrarPontosJogadores(int *ponto, int qtdJogadores, int qtdSet) {
    printf("--- Pontos dos jogadores ---\n"); 
    for (int i = 0; i < qtdJogadores; i++) {
        printf("Jogador %d:\n", i + 1);
        for (int j = 0; j < qtdSet; j++) {
            printf("  Set %d : %d\n", j + 1, *(ponto + i * qtdSet + j));
        }
    }
}
void qtdParesImpares(int *ponto, int qtdJogadores, int qtdSet){
    int contPares= 0 ; 
    int contImp = 0 ; 
    for (int i = 0; i < qtdJogadores; i++) {
        for (int j = 0; j < qtdSet; j++) {
            if(*(ponto + i * qtdSet + j) % 2 == 0){
                contPares++; 
            } else {
                contImp++; 
            }
        }
    }
    printf("\nQuantidade de pontos pares : %d\n", contPares);
    printf("Quantidade de pontos ímpares : %d\n", contImp);
}
void jogadorVencedor(int *ponto, int qtdJogadores, int qtdSet){
    int vencedor = 0;
    int maiorSoma = 0;

    for (int i = 0; i < qtdJogadores; i++) {
        int soma = 0;
        for (int j = 0; j < qtdSet; j++) {
            soma += *(ponto + i * qtdSet + j);
        }
        if (soma > maiorSoma) {
            maiorSoma = soma;
            vencedor = i;
        }
    }
    printf("\nJogador vencedor: Jogador %d com %d pontos\n", vencedor + 1, maiorSoma);
}

void setDisputado(int *ponto, int qtdJogadores, int qtdSet){
    int setMaisDisputado = 0;
    int menorDiferenca = 0;

    for (int j = 0; j < qtdSet; j++) {
        int max = *(ponto + j);
        int min = *(ponto + j);
        for (int i = 0; i < qtdJogadores; i++) {
            int valor = *(ponto + i * qtdSet + j);
            if (valor > max) max = valor;
            if (valor < min) min = valor;
        }
        int diferenca = max - min;
        if (diferenca < menorDiferenca) {
            menorDiferenca = diferenca;
            setMaisDisputado = j;
        }
    }
    printf("\nSet mais disputado: Set %d (diferença de %d pontos)\n", setMaisDisputado + 1, menorDiferenca);
}

void mediaPorJogador(int *ponto, int qtdJogadores, int qtdSet){
    printf("\n--- Média por jogador ---\n");
    for (int i = 0; i < qtdJogadores; i++) {
        float soma = 0;
        for (int j = 0; j < qtdSet; j++) {
            soma += *(ponto + i * qtdSet + j);
        }
        printf("Jogador %d -> média: %.2f\n", i + 1, soma / qtdSet);
    }
}

void jogadorRegular(int *ponto, int qtdJogadores, int qtdSet){
    int jogadorMaisRegular = 0;
    int menorVariacao = 0;

    for (int i = 0; i < qtdJogadores; i++) {
        int max = *(ponto + i * qtdSet);
        int min = *(ponto + i * qtdSet);
        for (int j = 0; j < qtdSet; j++) {
            int valor = *(ponto + i * qtdSet + j);
            if (valor > max) max = valor;
            if (valor < min) min = valor;
        }
        int variacao = max - min;
        if (variacao < menorVariacao) {
            menorVariacao = variacao;
            jogadorMaisRegular = i;
        }
    }
    printf("\nJogador mais regular: Jogador %d (variação de %d pontos)\n", jogadorMaisRegular + 1, menorVariacao);
}


int main() {
    int pontosJogadores[4][4] = {
        {5, 7, 8, 6},   
        {4, 6, 5, 7},   
        {3, 9, 6, 8},   
        {2, 4, 7, 5}   
    };  

    int *p = &pontosJogadores[0][0]; 

    mostrarPontosJogadores(p, 4, 4); 
    qtdParesImpares(p, 4, 4);
    jogadorVencedor(p, 4, 4);
    setDisputado(p, 4, 4);
    mediaPorJogador(p, 4, 4);
    jogadorRegular(p, 4, 4);

    return 0;
}
