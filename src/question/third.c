#include <stdio.h>

void cadastrarPrecos(float precos[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Preco do produto %d: ", i + 1);
        scanf("%f", &precos[i]);
    }
}

void precosProdutos(float precos[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Preco do produto %d: %.2f\n", i + 1, precos[i]); 
    }
}

void desconto(float *value) {
    *value = *value - (*value * (10.0 / 100.0));
}

void aplicarDesconto(float precos[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        desconto(&precos[i]); 
    }
}

int main() {
    const int TAMANHO_VETOR = 5; 
    float precos[TAMANHO_VETOR];

    cadastrarPrecos(precos, TAMANHO_VETOR);

    printf("\n--- Precos originais ---\n");
    precosProdutos(precos, TAMANHO_VETOR);

    aplicarDesconto(precos, TAMANHO_VETOR);
    
    printf("\n--- Precos com 10%% de desconto ---\n");
    precosProdutos(precos, TAMANHO_VETOR);
    
    return 0;
}