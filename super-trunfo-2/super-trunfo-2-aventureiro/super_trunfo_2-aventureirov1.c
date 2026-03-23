#include <stdio.h>

int main(){

    char estado1[4], estado2[4];
    char nomeCidade1[30], nomeCidade2[30];
    char codigo1[10], codigo2[10];
    int populacao1, populacao2, pontosT1, pontosT2;
    float area1, area2, pib1, pib2, densidadePopulacional1, densidadePopulacional2, pibPerCapta1, pibPerCapta2;
    int atributo;
    char nomeAtributo[50];

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
    printf("PIB Per Capta: %.2f reais\n\n", pibPerCapta2);

    printf("------------------ Menu de opções ---------------------\n");
    printf("Escolha qual atributo será usado para comparar as cartas:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 -  PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - DensidadePopulacional\n");
    printf("Digite a opção escolhida: ");
    scanf("%d", &atributo);

    if(atributo == 1){
        //nomeAtributo = "População";
    }
    else if(atributo == 2){
        //nomeAtributo = "Área";
    }
    else if (atributo == 3){
        ///nomeAtributo = "PIB";
    }
    else if(atributo == 4){
        //nomeAtributo = "Nº de Pontos Turísticos";
    }
    else if(atributo == 5){
        //nomeAtributo = "Densidade Demográfica";
    }
    else{
        printf("Opção inválida !!!");
    
    }


    printf("\n\n----------------------Resultado Final(Atributo: %s)----------------------\n", nomeAtributo);

    switch(atributo){

        case 1 :

                printf("População da carta 1: %d\n", populacao1);
                printf("População da carta 2: %d\n", populacao2);

            if(populacao1 > populacao2){
                printf("Carta 1 Venceu !!!");
            }
            else if(populacao1 == populacao2){
                printf("Empate!!!");
            }
            else{
                printf("Carta 2 Venceu !!!");
            }
        break;

        case 2:

            printf("Área da carta 1: %.2f\n", area1);
            printf("Área da carta 2: %.2f\n", area2);

            if(area1 > area2){
                printf("Carta 1 Venceu !!!");
            }
            else if(area1 == area2){
                printf("Empate!!!");
            }
            else{
                printf("Carta 1 Venceu !!!");
            }

        break;


    }

    return 0;
}


