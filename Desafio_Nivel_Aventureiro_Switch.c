#include <stdio.h>
int main() {
    
    // Jogador 1 //
     char codigo1[50] = "A01", estado1[50] = "A", cidade1[50] = "Vitória";
    int pontos1 = 23;
    int atributo;
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
     
     printf("\n                    ***Menu de Comparação***");
     printf("\n                    %s   VS   %s", cidade1, cidade2);
     printf("\n1. População");
     printf("\n2. Área");
     printf("\n3. Pib");
     printf("\n4. Pontos Turisticos");
     printf("\n5. Densidade Demográfica");
     printf("\nEscolha um Atributo: "); scanf(" %d", &atributo);
     
     switch (atributo){
         case 1: if(populacao1 > populacao2){
             printf("\n %s Venceu com %lu de população superando %s com %lu de população", cidade1, populacao1, cidade2, populacao2);
         }else if (populacao2 > populacao1){
             printf("\n %s Venceu com %lu de população superando %s com %lu de população", cidade2, populacao2, cidade1, populacao1);
         }else{
             printf("Deu Empate");
         } break;
         case 2: if(area1 > area2){
             printf("\n %s Venceu com %.2f de Área superior a %.2f de População %s", cidade1, area1, cidade2, area2);
         }else if (area2 > area1){
             printf("\n %s Venceu com %.2fkm2 de Área superando %s com %.2fkm2 de Área", cidade2, area2, cidade1, area1);
         }else{
             printf("Deu Empate");
         } break;
         case 3: if(pib1 > pib2){
             printf("\n %s Venceu com %.2f de Pib superando %s com %.2f de Pib", cidade1, pib1, cidade2, pib2);
         }else if (pib2 > pib1){
             printf("\n %s Venceu com %.2f de Pib superando %s com %.2f de Pib", cidade2, pib2, cidade1, pib1);
         }else{
             printf("Deu Empate");
         } break;
         case 4: if(pontos1 > pontos2){
             printf("\n %s Venceu com %d de Pontos Turisticos superando %s com apenas %d", cidade1, pontos1, cidade2, pontos2);
         }else if (pontos2 > pontos1){
             printf("\n %s Venceu com %d de Pontos Turisticos superando %s com apenas %d Pontos Turisticos",cidade2, pontos2, cidade1, pontos1);
         }else{
             printf("Du Empate");
         } break;
         case 5: if(densidade1 < densidade2){
             printf("\n %s Venceu com %.2f hab/km2 de Densidade sendo Menor que %s com %.2f hab/km2 de Densidade", cidade1, densidade1, cidade2, densidade2);
         }else if (densidade2 < densidade1){
             printf("\n %s Venceu com %.2f hab/km2 de Densidade sendo Menor que %s com %.2f hab/km2 de Densidade", cidade2, densidade2, cidade1, densidade1);
         }else{
             printf("Deu Empate");
         } break;
         default: printf("Opção Invalida");
     } 
     
     return 0;
}