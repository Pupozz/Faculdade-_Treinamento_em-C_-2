#include <stdio.h>
#include <math.h>
// 2.3 - Leia um número real. Se o número for positivo imprima a raiz quadrada. Do contrario, imprima o número ao quadrado.
int main(){
    
    float x, raiz, quadrado;
    
    printf("Digite um número real: ");
    scanf("%f", &x);
    
    if (x >= 0){
    raiz = sqrt(x);
    printf("O número digito %.2f é positivo, a raiz quadrada é: %f", x, raiz);}
    
    else {
    quadrado = x * x;
    printf("O número digitado %.2f é negativo, o seu quadrado é: %.2f", x, quadrado);}

    return 0;
}
