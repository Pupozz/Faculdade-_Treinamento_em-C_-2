#include <stdio.h>

/*Leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação for maior
que 20% do salário imprima: Empréstimo não concedido , caso contrário imprima: Empréstimo concedido*/

int main() {
    float salario, prestacao;

    printf("Digite o salário do trabalhador: R$ ");
    scanf("%f", &salario);

    printf("Digite o valor da prestação do empréstimo: R$ ");
    scanf("%f", &prestacao);

    if (prestacao > 0.20 * salario) {
        printf("Empréstimo não concedido\n");
    } else {
        printf("Empréstimo concedido\n");
    }

    return 0;
}
