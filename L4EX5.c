#include <stdio.h>
#include <string.h>

void inverter_string(char *str) {
    char *inicio = str;                   
    char *fim = str + strlen(str) - 1;    
    char temp;

    while (inicio < fim) {
        
        temp = *inicio;
        *inicio = *fim;
        *fim = temp;

        inicio++;
        fim--;
    }
}

int main() {
    char texto[] = "PONTEIROS";

    printf("String original: %s\n", texto);

    inverter_string(texto);

    printf("String invertida: %s\n", texto);

    return 0;
}
