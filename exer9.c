/*#include <stdio.h>

int main() {
  //crie um progama que leia 6 numeros inteiros pares e, em seguida mostre na tela os valores lidos em ordem inversa.

    int valores[6];
    int numero;
    int Pares = 0;

    printf("Digite 6 números inteiros pares:\n");
    for (int i = 0; i < 6; i++) {
        do {
            scanf("%d", &numero);
            if (numero % 2 != 0) {
                printf("O número não é par. Digite um número par: ");
            }
        } while (numero % 2 != 0);
        valores[i] = numero;
    }

    printf("Valores lidos em ordem inversa:\n");
    for (int i = 5; i >= 0; i--) {
        printf("%d\n", valores[i]);
    }

}*/