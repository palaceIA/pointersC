#include <stdio.h>


void inverterNotas(float *notas, int tamanho) {
    float *inicio = notas;              
    float *fim = notas + tamanho - 1;  

    while (inicio < fim) {
        float temp = *inicio;
        *inicio = *fim;
        *fim = temp;

        inicio++;  
        fim--; 
    }
}

void mostrarNotas(float *notas, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Nota %d : %.2f\n", i + 1, *(notas + i)); 
    }
}

int main() {
    float notas[6] = {7.8, 5.6, 10.0, 10.0, 10.0, 5.0};

    printf("----- Notas Originais -----\n");
    mostrarNotas(notas, 6);

    inverterNotas(notas, 6);

    printf("----- Notas Invertidas -----\n");
    mostrarNotas(notas, 6);

    return 0;
}
