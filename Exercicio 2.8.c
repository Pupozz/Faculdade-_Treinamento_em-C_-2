#include <stdio.h>
/* 2.8 - Faça um programa que leia 2 notas de um aluno, verifique se as notas são válidas e exiba na tela a
 média destas notas. Uma nota válida deve ser, obrigatoriamente, um valor entre 0.0 e 10.00, onde 
 caso a nota não possua um valor válido, este fato deve ser informado ao usuário e o programa termina */
int main(){
    float nota1, nota2, media;
    printf("Digite a primeria nota do aluno: ");
    scanf("%f", &nota1);
    
    if (nota1 < 0.0 || nota1 > 10.00){
        printf("Primeira nota invalida. As notas devem ser entre 0.0 e 10.00\n");
        return 1;
    }
    
    printf("Digite a segunda nota do aluno: ");
    scanf("%f", &nota2);
    
    if (nota2 < 0.0 || nota2 > 10.00){
        printf("Segunda nota invalida. As notas devem ser entre 0.0 e 10.00\n");
        return 1;
    }
    media = (nota1 + nota2) /2;
    
    printf("A media do aluno é %.2f", media);
    
    return 0;
}
