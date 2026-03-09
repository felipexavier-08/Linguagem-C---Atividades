#include<stdio.h>;

int main(){

    int nota1, nota2, nota3;
    float media;

    printf("----------------Cálculo de média----------------\n\n");
    printf("Digite a primeira nota: ");
    scanf("%d", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%d", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%d", &nota3);

    media = (nota1+nota2+nota3) / 3;

    printf("\n---------------Resultados----------------");
    printf("Nota 1: %d\nNota 2: %d\nNota 3: %d\nMedia: %.2f\n\n", nota1, nota2, nota3, media);


}