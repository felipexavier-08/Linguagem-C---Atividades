#include <stdio.h>

int main(){

    char estado1, estado2;
    char nomeCidade1[30], nomeCidade2[30];
    char codigo1[10], codigo2[10];
    int populacao1, populacao2, pontosT1, pontosT2;
    float area1, area2, pib1, pib2, densidadePopulacional1, densidadePopulacional2, pibPerCapta1, pibPerCapta2;

    printf("---------------------Cadastro da carta 1---------------------\n\n");

    printf("Digite o estado da carta 1(ex: A): ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta 1(ex: A01): ");
    scanf("%9s", codigo1);

    printf("Insira o nome da cidade da carta 1: ");
    scanf(" %29s", nomeCidade1);

    printf("Digite a população da cidade da carta 1: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade da carta 1: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade da carta 1: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turístico: ");
    scanf("%d", &pontosT1);


    printf("\n---------------------Cadastro da carta 2---------------------\n\n");

    printf("Digite o estado da carta 2(ex: A): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta 2(ex: A02): ");
    scanf("%9s", codigo2);

    printf("Insira o nome da cidade da carta 2: ");
    scanf(" %29s", nomeCidade2);

    printf("Digite a população da cidade da carta 2: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade da carta 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade da carta 2: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turístico: ");
    scanf("%d", &pontosT2);

    densidadePopulacional1 = (populacao1 / area1);
    densidadePopulacional2 = (populacao2 / area2);
    pibPerCapta1 = (pib1 / populacao1);
    pibPerCapta2 = (pib2 / populacao2);


    printf("\n\n---------------------------------------Exibição das Cartas---------------------------------------\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: R$ %.2f \n", pib1);
    printf("Número de Pontos Turísticos: %d", pontosT1);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidadePopulacional1);
    printf("PIB Per Capta: %.2f reais\n", pibPerCapta1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosT2);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidadePopulacional2);
    printf("PIB Per Capta: %.2f reais\n", pibPerCapta2);

    return 0;
}