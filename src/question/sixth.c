#include <stdio.h>

void mostrarNotasAlunos(float *notas, int qtAluno, int qtNotas) {
    printf("------Todas as notas-----\n");
    int elementos = qtAluno * qtNotas;
    for (int i = 0; i < elementos; i++) {
        printf("Nota %d : %.2f\n", i + 1, *(notas + i));
    }
}

float mostrarDiagonal(float *notas, int qtNotas) {
    printf("------Notas diagonal principal-----\n");
    float somaDiagonal = 0.0;
    for (int i = 0; i < qtNotas; i++) {
        somaDiagonal += *(notas + i * qtNotas + i);
    }
    return somaDiagonal;
}

int main() {
    float notas[3][3] = {
        {7.4, 8.5, 9.5},   
        {6.2, 5.7, 7.2},   
        {10.0, 9.0, 8.0}   
    };

    float *p = &notas[0][0]; 
    
    mostrarNotasAlunos(p, 3, 3);

    float valorDiagonal = mostrarDiagonal(p, 3);
    printf("Soma da diagonal principal: %.2f\n", valorDiagonal);

    return 0;
}
