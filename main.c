#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero == 20) {
        printf("O número é igual a 20.\n");
    } else if (numero < 20) {
        printf("O número é menor que 20.\n");
    } else {
        printf("O número é maior que 20.\n");
    }

    return 0;
}
