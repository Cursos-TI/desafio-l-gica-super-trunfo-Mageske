#include <stdio.h>
int main() {
    
    // Jogador 1 //
     char codigo1[50], estado1[50], cidade1[50];
    int pontos1;
    unsigned long int populacao1;
    float area1, pib1;
    float pibpercapta1, densidade1;
    float SuperPoderA;
    float inversodensidade1;
    
    // Jogador 2 //
    char estado2[50], codigo2[50], cidade2[50];
    int pontos2;
    unsigned long int populacao2;
    float area2, pib2;
    float pibpercapta2, densidade2;
    float SuperPoderB;
    float inversodensidade2;
    
    //Leitura Jogador 1 //
    printf("            Jogador 1 \n");
    printf("Estado: "); scanf(" %[^\n]", estado1);
    printf("Código: "); scanf(" %s", codigo1);
    printf("Cidade: "); scanf(" %[^\n]", cidade1);
    printf("População: "); scanf(" %lu", &populacao1);
    printf("Área: "); scanf(" %f", &area1);
    printf("Pib: "); scanf(" %f", &pib1);
    printf("Pontos Turísticos: "); scanf(" %d", &pontos1);
    
    //Leitura Jogador 2 //
    printf("             Jogador 2  \n");
    printf("Estado: "); scanf(" %[^\n]", estado2);
    printf("Código: "); scanf(" %s", codigo2);
    printf("Cidade: "); scanf(" %[^\n]", cidade2);
    printf("População: "); scanf(" %lu", &populacao2);
    printf("Área: "); scanf(" %f", &area2);
    printf("Pib: "); scanf(" %f", &pib2);
    printf("Pontos Turísticos: "); scanf(" %d", &pontos2);
    
    //Calculando a Densidade Populacional//
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    
    //Calculando o Pib per Capta//
    pibpercapta1 = (pib1 * 1000000000.0) / populacao1;
    pibpercapta2 = (pib2 * 1000000000.0) / populacao2;
    
    inversodensidade1 = 1.0 / densidade1;
    float SuperPoder1 = populacao1 + area1 + pib1 + pibpercapta1 + pontos1 + inversodensidade1;
    
    inversodensidade2 = 1.0 / densidade2;
    float SuperPoder2 = populacao2 + area2 + pib2 + pibpercapta2 + pontos2 + inversodensidade2;
   
    //Informações dos Jogadores//
    printf("\nCarta 1:\n Estado: %s\n Código: %s\n Cidade: %s\n População: %lu\n Área: %.2f km2\n Pib: %.2f bilhões de reais\n Pontos Turisticos: %d\n Densidade Populacional: %.2f hab/km2\n Pib per Capta: %.2f reais\n Inverso da Densidade: %f\n", estado1, codigo1, cidade1, populacao1, area1, pib1, pontos1, densidade1, pibpercapta1, inversodensidade1);
     printf("\nCarta 2:\n Estado: %s\n Código: %s\n Cidade: %s\n População: %lu\n Área: %.2f km2\n Pib: %.2f bilhões de reais\n Pontos Turisticos: %d\n Densidade Populacional: %.2f hab/km2\n Pib per Capta: %.2f reais\n Inverso da Deensidade: %f\n", estado2, codigo2, cidade2, populacao2, area2, pib2, pontos2, densidade2, pibpercapta2, inversodensidade2);
     
     //Comparando as cidades com a estrutura if else//
     printf("\n          Batalha de Comparação das Cartas\n");
     printf("\n        -----População----");
     if (populacao1 > populacao2){
         printf("\nA Cidade de %s Venceu com %lu de população\n", cidade1, populacao1);
     }else{
         printf("\nA Cidade de %s Venceu com %lu de População\n", cidade2, populacao2);
     }
     printf("\n        -----Área------");
     if (area1 > area2){
         printf("\nA Cidade de %s Venceu com %.2f de Área\n", cidade1, area1);
     }else{
         printf("\nA Cidade de %s Venceu com %.2f de Área\n", cidade2, area2);
     }
     printf("\n         -----Pib-----");
     if (pib1 > pib2){
         printf("\nA Cidade de %s Venceu com %.2f de Pib\n", cidade1, pib1);
     }else{
         printf("\nO Pib da Cidade de %s Venceu com %.2f de Pib\n", cidade2, pib2);
     }
     printf("\n       ----Pontos Turísticos----");
     if (pontos1 > pontos2){
         printf("\nA Cidade de %s Venceu com %d de Pontos Turísticos\n", cidade1, pontos1);
     }else{
         printf("\nA Cidade de %s Venceu com %d de Pontos Turísticos\n", cidade2, pontos2);
     }
     
     //Decidindo o grande vencedor com a estrutura if else, A cidade que ganhar em 3 categorias Vence.
     printf("\n                =====VENCEDOR=====");
     if (populacao1 > populacao2 && area1 > area2 && pib1 > pib2 || populacao1 > populacao2 && area1 > area2 && pontos1 > pontos2 || populacao1 > populacao2 && pontos1 > pontos2 && pib1 > pib2){
         printf("\nA Cidade de %s é a Grande Vencedora!", cidade1);
     }else{
         printf("\nNão Houve um Vencedor Pois as Cidades Empataram!");
     }
     if (populacao2 > populacao1 && area2 > area1 && pib2 > pib1 || populacao2 > populacao1 && area2 > area1 && pontos2 > pontos1 || populacao2 > populacao1 && pontos2 > pontos1 && pib2 > pib1){
         printf("\nA Cidade de %s é a Grande Vencedora!", cidade2);
     }else{
         printf("\nNão Houve um Vencedor Pois as Cidades Empataram!");
     }
    
     return 0;
    
}