#include <stdio.h>
    int main(){
        char estado1, estado2;              //Variáveis para armazenar os estados das cartas
        char codigo1[4], codigo2[4];        //Variáveis para armazenar os códigos das cartas
        char nome1[50], nome2[50];          //Variáveis para armazenar os nomes das cartas
        int populacao1, populacao2;         //Variáveis para armazenar a população das cartas
        float area1, area2;                 //Variáveis para armazenar a área das cartas
        float pib1, pib2;                   //Variáveis para armazenar o PIB das cartas
        int turistico1, turistico2;         //Variáveis para armazenar o número de pontos turísticos das cartas

        printf("Bem-vindo ao jogo Super Trunfo!\n");

        printf("Digite uma letra de A a H (representando um dos 8 estados brasileiros) para a Carta 1: ");      //Lê o estado da carta 1
        scanf(" %c", &estado1);

        printf("Digite uma letra de A a H (representando um dos estados brasileiros) para a Carta 2: ");        //Lê o estado da carta 2
        scanf(" %c", &estado2);

        printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B02) para a Carta 1: ");     //Lê o código da carta 1
        scanf(" %3s", codigo1);

        printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B02) para a Carta 2: ");     //Lê o código da carta 2
        scanf(" %3s", codigo2);

        printf("Digite o nome da cidade da Carta 1: ");     //Lê o nome da cidade da carta 1
        scanf(" %[^\n]", nome1);

        printf("Digite o nome da cidade da Carta 2: ");     //Lê o nome da cidade da carta 2
        scanf(" %[^\n]", nome2);

        printf("Digite a população da cidade da Carta 1: ");        //Lê a população da cidade da carta 1
        scanf("%d", &populacao1);

        printf("Digite a população da cidade da Carta 2: ");        //Lê a população da cidade da carta 2
        scanf("%d", &populacao2);

        printf("Digite a área da cidade em quilômetros quadrados da Carta 1: ");        //Lê a área da cidade da carta 1
        scanf("%f", &area1);

        printf("Digite a área da cidade em quilômetros quadrados da Carta 2: ");        //Lê a área da cidade da carta 2
        scanf("%f", &area2);

        printf("Digite o PIB da cidade da Carta 1: ");      //Lê o PIB da cidade da carta 1
        scanf("%f", &pib1);

        printf("Digite o PIB da cidade da Carta 2: ");      //Lê o PIB da cidade da carta 2
        scanf("%f", &pib2);

        printf("Digite a quantidade de pontos turísticos da cidade da Carta 1: ");      //Lê o número de pontos turísticos da cidade da carta 1
        scanf("%d", &turistico1);

        printf("Digite a quantidade de pontos turísticos da cidade da Carta 2: ");      //Lê o número de pontos turísticos da cidade da carta 2
        scanf("%d", &turistico2);

        printf("\n\n");

        printf("Carta 1:\n");
        printf("Estado: %c\n", estado1);                            //Imprime o estado da carta 1
        printf("Código: %s\n", codigo1);                            //Imprime o código da carta 1
        printf("Nome da Cidade: %s\n", nome1);                      //Imprime o nome da cidade da carta 1
        printf("População: %d\n", populacao1);                      //Imprime a população da cidade da carta 1
        printf("Área: %.2f km²\n", area1);                          //Imprime a área da cidade da carta 1
        printf("PIB: %.2f bilhões de reais\n", pib1);               //Imprime o PIB da cidade da carta 1
        printf("Número de Pontos turísticos: %d\n", turistico1);    //Imprime o número de pontos turísticos da cidade da carta 1

        printf("\n\n");

        printf("Carta 2:\n");
        printf("Estado: %c\n", estado2);                            //Imprime o estado da carta 2
        printf("Código: %s\n", codigo2);                            //Imprime o código da carta 2
        printf("Nome da Cidade: %s\n", nome2);                      //Imprime o nome da cidade da carta 2
        printf("População: %d\n", populacao2);                      //Imprime a população da cidade da carta 2
        printf("Área: %.2f km²\n", area2);                          //Imprime a área da cidade da carta 2
        printf("PIB: %.2f bilhões de reais\n", pib2);               //Imprime o PIB da cidade da carta 2
        printf("Número de Pontos turísticos: %d\n", turistico2);    //Imprime o número de pontos turísticos da cidade da carta 2

        return 0;       //Retorna 0 para indicar que o programa foi executado com sucesso
    }
