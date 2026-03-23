#include <stdio.h>
#include <string.h>

int main(){

    char estado1, estado2;
    char nomeCidade1[30], nomeCidade2[30];
    char codigo1[10], codigo2[10];
    int populacao1, populacao2, pontosT1, pontosT2;
    float area1, area2, pib1, pib2, densidadePopulacional1, densidadePopulacional2, pibPerCapta1, pibPerCapta2;
    int atributo1, atributo2;
    int resultado1, resultado2; 
    char nomeAtributo1[50], nomeAtributo2[50];
    float valor1At1, valor2At1, valor1At2, valor2At2, somaAtributos1, somaAtributos2;

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
    printf("Número de Pontos Turísticos: %d\n", pontosT1);
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

    printf("------------------ Primeiro Atributo ---------------------\n");
    printf("Escolha qual atributo será usado para comparar as cartas:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite a opção escolhida: ");
    scanf("%d", &atributo1);

    printf("\n\n------------------ Segundo Atributo ---------------------\n");
    printf("Escolha qual atributo será usado para comparar as cartas:\n");
    if(atributo1 != 1) printf("1 - População\n");
    if(atributo1 != 2) printf("2 - Área\n");
    if(atributo1 != 3) printf("3 - PIB\n");
    if(atributo1 != 4) printf("4 - Número de pontos turísticos\n");
    if(atributo1 != 5) printf("5 - Densidade Demográfica\n");
    printf("Digite a opção escolhida: ");
    scanf("%d", &atributo2);
    

    if(atributo1 == 1){
        strcpy(nomeAtributo1, "População");
        valor1At1 = populacao1;
        valor2At1 = populacao2;
    }
    else if(atributo1 == 2){
        strcpy(nomeAtributo1, "Área");
        valor1At1 = area1;
        valor2At1 = area2;
    }
    else if (atributo1 == 3){
        strcpy(nomeAtributo1, "PIB");
        valor1At1 = pib1;
        valor2At1 = pib2;
    }
    else if(atributo1 == 4){
        strcpy(nomeAtributo1, "Nº de Pontos Turísticos");
        valor1At1 = pontosT1;
        valor2At1 = pontosT2;
    }
    else if(atributo1 == 5){
        strcpy(nomeAtributo1, "Densidade Demográfica");
        valor1At1 = densidadePopulacional1;
        valor2At1 = densidadePopulacional2;
    }
    else{
        printf("Opção inválida !!!\n");
        return 1;
    }
    ///////
    if(atributo2 == 1){
        strcpy(nomeAtributo2, "População");
        valor1At2 = pontosT1;
        valor2At2 = pontosT2;
    }
    else if(atributo2 == 2){
        strcpy(nomeAtributo2, "Área");
        valor1At2 = pontosT1;
        valor2At2 = pontosT2;
    }
    else if (atributo2 == 3){
        strcpy(nomeAtributo2, "PIB");
        valor1At2 = pontosT1;
        valor2At2 = pontosT2;
    }
    else if(atributo2 == 4){
        strcpy(nomeAtributo2, "Nº de Pontos Turísticos");
        valor1At2 = pontosT1;
        valor2At2 = pontosT2;
    }
    else if(atributo2 == 5){
        strcpy(nomeAtributo2, "Densidade Demográfica");
        valor1At2 = densidadePopulacional1;
        valor2At2 = densidadePopulacional2;
    }
    else{
        printf("Opção inválida !!!\n");
        return 1;
    }

    //cálculos................
    switch(atributo1){

        case 1: // População
            if(populacao1 > populacao2){
                resultado1 = 1;
                resultado2 = 0;
            }
            else{
                resultado1 = 0;
                resultado2 = 1;
            } 
        break;

        case 2: // Área
            if(area1 > area2){
                resultado1 = 1;
                resultado2 = 0;
            }
            else{
                resultado1 = 0;
                resultado2 = 1;
            }
        break;

        case 3: // PIB
            if(pib1 > pib2){
                resultado1 = 1;
                resultado2 = 0;
            }
            else{
                resultado1 = 0;
                resultado2 = 1;
            }
        break;

        case 4: // Número de pontos turísticos
            if(pontosT1 > pontosT2){
                resultado1 = 1;
                resultado2 = 0;
            }
            else{
                resultado1 = 0;
                resultado2 = 1;
            }
        break;

        case 5: // Densidade demográfica (menor vence)
            if(densidadePopulacional1 > densidadePopulacional2){
                resultado1 = 0;
                resultado2 = 1;
            }
            else{
                resultado1 = 1;
                resultado2 = 0;
            }
        break;
    }

    switch(atributo2){

        case 1: // População
            if(populacao1 > populacao2){
                resultado1 += 1;
                resultado2 += 0;
            }
            else{
                resultado1 += 0;
                resultado2 += 1;
            } 
        break;

        case 2: // Área
            if(area1 > area2){
                resultado1 += 1;
                resultado2 += 0;
            }
            else{
                resultado1 += 0;
                resultado2 += 1;
            }
        break;

        case 3: // PIB
            if(pib1 > pib2){
                resultado1 += 1;
                resultado2 += 0;
            }
            else{
                resultado1 += 0;
                resultado2 += 1;
            }
        break;

        case 4: // Número de pontos turísticos
            if(pontosT1 > pontosT2){
                resultado1 += 1;
                resultado2 += 0;
            }
            else{
                resultado1 += 0;
                resultado2 += 1;
            }
        break;

        case 5: // Densidade demográfica (menor vence)
            if(densidadePopulacional1 > densidadePopulacional2){
                resultado1 += 0;
                resultado2 += 1;
            }
            else{
                resultado1 += 1;
                resultado2 += 0;
            }
        break;
    }

    somaAtributos1 = valor1At1 + valor1At2;
    somaAtributos2 = valor2At1 + valor2At2;

    printf("\n\n----------------------Resultado Final----------------------\n", nomeAtributo1, nomeAtributo2);

    printf("Cidade 1: %s\nCidade 2: %s\n", nomeCidade1, nomeCidade2);
    printf("Atributos usados na comparação: %s e %s \n", nomeAtributo1, nomeAtributo2);   
    printf("%s1: %.0f e %s2: %.0f\n%s1: %.2f e %s2: %.2f\n", nomeAtributo1, valor1At1, nomeAtributo1, valor1At2, nomeAtributo2, valor1At2, nomeAtributo2, valor2At2);
    printf("Soma dos Atributos da Carta 1: %.2f | Soma Dos Atributos da Carta 2: %2.f\n", somaAtributos1, somaAtributos2);
    if(resultado1>resultado2){

        printf("A carta 1 Venceu !!!");

    }else if(resultado1<resultado2){

        printf("A carta 2 Venceu !!!");

    }else{

        printf("Empate !!!");

    }

    return 0;
}