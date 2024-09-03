#include <stdio.h>
#include <math.h>
// 2.4 - Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
// 2.4.1 O número digitado ao quadrado
// 2.4.2 A raiz quadrada do número digitado

int main(){
    
    int x, quadrado, raizQuadrada;
    
    printf("Digite um número: ");
    scanf("%d", &x);
    
    if (x >= 0){
    raizQuadrada = sqrt(x);
    quadrado = x * x;
    printf("A raiz quadrada de %d é %d\n", x, raizQuadrada);
    printf("O quadrado do número %d é %d", x, quadrado);}
    
    else{
    printf("Número invalido");}

    return 0;
}
