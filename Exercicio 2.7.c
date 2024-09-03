#include <stdio.h>
// 2.7 Faça um programa que receba dois números e mostre o maior. Se por acaso, os dois números forem
// iguais, imprima a mensagem Números iguais
int main() {
    int x, y;

    printf("Digite dois número inteiros: ");
    scanf("%d %d", &x, &y);

    if (x > y) {
        printf("O maior número é: %d\n", x);
    } else if (y > x) {
        printf("O maior número é: %d\n", y);
    } else {
        printf("Números iguais\n");
    }

    return 0;
}
