#include <stdio.h>

int encontrar_maior(int *array, int tamanho) {
    int *p = array;           
    int *maior = array; 
    int i;      

    for (i = 1; i < tamanho; i++) {
        p++; 
        if (*p > *maior) {
            maior = p; 
        }
    }

    return *maior; 
}

int main() {
    int numeros[8] = {45, 23, 78, 12, 67, 34, 89, 56};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);
    int i;

    int maior = encontrar_maior(numeros, tamanho);

    printf("Array: ");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\nMaior elemento: %d\n", maior);

    return 0;
}
