#include <stdio.h>
#include <math.h>

//  2.2 - Leia um número fornecido pelo usário. Se esse número for positivo, calcule a raiz quadrada
// do número. Se o número for negativo, mostre um mensagem dizendo que o número é invalido
int main()
{
    int x, raiz;
    
    printf("Digite um número: ");
    scanf("%d", &x);
    
    raiz = sqrt(x);
    
    if(x >= 0)
    printf("A raiz quadrada do número digitado é %d", raiz);
    
    else
    printf("Número invalido");
    
    return 0;
}
