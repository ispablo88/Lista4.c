#include <stdio.h>

void calcular_estatisticas(float *notas, int quantidade,
                           float *media, float *maior, float *menor) {
    float soma = 0.0;
    float *p = notas;  
    int i;   

    *maior = *notas;      
    *menor = *notas;      

    for (i = 0; i < quantidade; i++, p++) {
        soma += *p;

        if (*p > *maior) {
            *maior = *p;
        }
        if (*p < *menor) {
            *menor = *p;
        }
    }

    *media = soma / quantidade;
}

int main() {
    float notas[] = {8.5, 7.2, 9.1, 6.8, 8.9, 7.7, 9.5, 8.2};
    int qtd_notas = sizeof(notas) / sizeof(notas[0]);
    int i;

    float media, maior, menor;

    calcular_estatisticas(notas, qtd_notas, &media, &maior, &menor);

    printf("=== RELATÓRIO DE NOTAS ===\n");
    printf("Notas: ");
    for (i = 0; i < qtd_notas; i++) {
        printf("%.1f ", notas[i]);
    }

    printf("\n");
    printf("Média: %.2f\n", media);
    printf("Maior nota: %.2f\n", maior);
    printf("Menor nota: %.2f\n", menor);

    return 0;
}
