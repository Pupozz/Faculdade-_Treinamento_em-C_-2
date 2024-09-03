#include <stdio.h>

// 2.5 - faça um programa que receba um número um número inteiro e verifique se este número é par ou impar

int main(){
    
    int x;
    printf("Digite um número inteiro: ");
    scanf("%d", &x);
    
    if (x % 2==0)
    printf("%d é um número par", x);
    
    else
    printf("%d é um número impar", x);

    return 0;
}
