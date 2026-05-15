#include <stdio.h>
int main() {
    
    // Jogador 1 //
     char codigo1[50] = "A01", estado1[50] = "A", cidade1[50] = "Vitória";
    int pontos1 = 23;
    unsigned long int populacao1 = 322869;
    float area1 = 97.12, pib1 = 28400.0;
    float pibpercapta1, densidade1;
    float SuperPoderA;
    float inversodensidade1;
    
    // Jogador 2 //
    char estado2[50] = "B", codigo2[50] = "B02", cidade2[50] = "Salvador";
    int pontos2 = 35;
    unsigned long int populacao2 = 2418005;
    float area2 = 693.8, pib2 = 62954.0;
    float pibpercapta2, densidade2;
    float SuperPoderB;
    float inversodensidade2;
    
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
     
     printf("\n               Batalha das Cartas: (1) = Carta1 // (0) = Carta2!\n");
     
     int resultpopulacao = populacao1 > populacao2;
     int resultarea = area1 > area2;
     int resultpib = pib1 > pib2;
     int resultpontos = pontos1 > pontos2;
     int resultdensidade = densidade1 < densidade2;
     int resultpibpercapta = pibpercapta1 > pibpercapta2;
     int resultsuper = SuperPoder1 > SuperPoder2;
     
     printf("\nPopulação: (%d)\n", resultpopulacao);
     printf("Area: (%d)\n", resultarea);
     printf("Pib: (%d)\n", resultpib);
     printf("Pontos Turisticos: (%d)\n", resultpontos);
     printf("Densidade Populacional: (%d)\n", resultdensidade);
     printf("Pib per Capta: (%d)\n", resultpibpercapta);
     printf("Super Poder: (%d)\n", resultsuper);
     
     //            Comparação dos Atributos com if-else         //
     printf("\n             Comparação dos Atributos!!\n");
     printf("\n    ---População---");
     if (populacao1 > populacao2){
         printf("\nA População da Carta 1 Venceu com %lu de população", populacao1);
     }else{
         printf("\nA População da Carta 2 Venceu com %lu de população!", populacao2);
     }
     printf("\n    ---Área---");
     if (area1 > area2){
         printf("\nA Área da Carta 1 Venceu com %f de Área!", area1);
     }else{
         printf("\nA Área da Carta 2 Venceu com %f de Área!", area2);
     }
    printf("\n     ---Pib---");
    if (pib1 > pib2){
        printf("\nO Pib da Carta 1 Venceu com %f de Pib", pib1);
    }else{
        printf("\nO Pib da Carta 2 Venceu com %f de Pib", pib2);
    }
    printf("\n     ----Pontos Turisticos----");
    if (pontos1 > pontos2){
        printf("\nA Carta 1 Venceu com %d de Pontos Turisticos!", pontos1);
    }else{
        printf("\nA Carta 2 Venceu com %d de Pontos Turisticos!", pontos2);
    }
     return 0;
    
}