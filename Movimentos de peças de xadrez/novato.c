//lógica
/*Torre: Move-se em linha reta horizontalmente ou verticalmente. Seu programa deverá simular o movimento da Torre cinco casas para a direita.
Bispo: Move-se na diagonal. Seu programa deverá simular o movimento do Bispo cinco casas na diagonal para cima e à direita. Para representar a diagonal, você imprimirá a combinação de duas direções a cada casa (ex: "Cima, Direita").
Rainha: Move-se em todas as direções. Seu programa deverá simular o movimento da Rainha oito casas para a esquerda.*/
#include<stdio.h>

int main(){

    int movimentosTorre = 1;
    int movimentosBispo = 1;
    int movimentosRainha = 1;

    printf("Movimentos da torre:\n");
    while(movimentosTorre <= 5){
        printf("Direita\n");
        movimentosTorre++;
    }

    printf("\n----------------------------\n");

    printf("\nMovimentos do Bispo: \n");
    do{
        printf("Cima, Direita\n");
        movimentosBispo++;
    }while(movimentosBispo <= 5); 

    printf("\n----------------------------\n");

    printf("\nMovimentos da Rainha\n");
    for(movimentosRainha = 1; movimentosRainha <= 8; movimentosRainha ++){
        printf("Esquerda\n");
    }


}