#include <stdio.h>
// 2.6 - Escreva um programa que, dados dois números inteiros, mostre na tela o maior deles,
// assim como a diferença existente entre ambos.
int main() {
    int x, y, maior, diferenca;

    printf("Digite dois números inteiros: ");
    scanf("%d %d", &x, &y);
    
    if (x > y){
        maior = x;
        diferenca = x - y;}
        
    else{
     maior = y;
     diferenca = y - x;}
     
     printf("O maior número é %d\n", maior);
     printf("A diferença entre os números é %d\n", diferenca);

    return 0;
}