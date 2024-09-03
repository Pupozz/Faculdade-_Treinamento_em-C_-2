#include <stdio.h>

// 2.1 - Faça um programa que receba dois números e mostre qual deles é o maior
int main()
{
    int x, y;
    
    printf("Digite dois números inteiros: ");
    scanf("%d %d", &x, &y);
    
    if(x > y)
    printf("%d é maior que %d", x, y);
    
    else
    printf("%d é maior que %d", y, x);


    return 0;
}
