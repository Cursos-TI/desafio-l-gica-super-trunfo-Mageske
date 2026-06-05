#include <stdio.h>

int main() {
    
    // Jogador 1 //
    char codigo1[50] = "A01", estado1[50] = "A", cidade1[50] = "Vitória";
    int pontos1 = 23;
    int opcao1, opcao2;
    unsigned long int populacao1 = 322869;
    float area1 = 97.12, pib1 = 28400.0;
    float pibpercapta1, densidade1;
    float inversodensidade1;
    
    // Jogador 2 //
    char estado2[50] = "B", codigo2[50] = "B02", cidade2[50] = "Salvador";
    int pontos2 = 35;
    unsigned long int populacao2 = 2418005;
    float area2 = 693.8, pib2 = 62954.0;
    float pibpercapta2, densidade2;
    float inversodensidade2;
    
    // Variáveis para armazenar os valores e nomes dos atributos escolhidos
    float carta1_val1 = 0, carta1_val2 = 0;
    float carta2_val1 = 0, carta2_val2 = 0;
    char nomeAtributo1[50], nomeAtributo2[50];
    
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
    
    // --- PRIMEIRO MENU ---
    printf("\n1. População");
    printf("\n2. Área");
    printf("\n3. Pib");
    printf("\n4. Pontos Turisticos");
    printf("\n5. Densidade Demográfica");
    printf("\nEscolha o Primeiro Atributo: "); 
    scanf("%d", &opcao1);
     
    switch (opcao1) {
        case 1:
            carta1_val1 = (float)populacao1;
            carta2_val1 = (float)populacao2;
            sprintf(nomeAtributo1, "População");
            break;
        case 2:
            carta1_val1 = area1;
            carta2_val1 = area2;
            sprintf(nomeAtributo1, "Área");
            break;
        case 3:
            carta1_val1 = pib1;
            carta2_val1 = pib2;
            sprintf(nomeAtributo1, "PIB");
            break;
        case 4:
            carta1_val1 = (float)pontos1;
            carta2_val1 = (float)pontos2;
            sprintf(nomeAtributo1, "Pontos Turísticos");
            break;
        case 5:
            // Regra da densidade: menor vence. 
            // Usando o inverso, quem tem menor densidade fica com o maior valor na soma.
            carta1_val1 = inversodensidade1;
            carta2_val1 = inversodensidade2;
            sprintf(nomeAtributo1, "Densidade Demográfica (Inverso)");
            break;
        default:
            printf("\nOpção Inválida! O programa será encerrado.\n");
            return 0;
    }

    // --- SEGUNDO MENU ---
    printf("\n*** Escolha o Segundo Atributo ***");
    printf("\n1. População");
    printf("\n2. Área");
    printf("\n3. Pib");
    printf("\n4. Pontos Turisticos");
    printf("\n5. Densidade Demográfica");
    printf("\nEscolha o Segundo Atributo: "); 
    scanf("%d", &opcao2);

    // VALIDAÇÃO COM IF: Impede escolher o mesmo atributo
    if (opcao1 == opcao2) {
        printf("\nErro: Você não pode escolher o mesmo atributo duas vezes!\n");
        return 0;
    }

    switch (opcao2) {
        case 1:
            carta1_val2 = (float)populacao1;
            carta2_val2 = (float)populacao2;
            sprintf(nomeAtributo2, "População");
            break;
        case 2:
            carta1_val2 = area1;
            carta2_val2 = area2;
            sprintf(nomeAtributo2, "Área");
            break;
        case 3:
            carta1_val2 = pib1;
            carta2_val2 = pib2;
            sprintf(nomeAtributo2, "PIB");
            break;
        case 4:
            carta1_val2 = (float)pontos1;
            carta2_val2 = (float)pontos2;
            sprintf(nomeAtributo2, "Pontos Turísticos");
            break;
        case 5:
            carta1_val2 = inversodensidade1;
            carta2_val2 = inversodensidade2;
            sprintf(nomeAtributo2, "Densidade Demográfica (Inverso)");
            break;
        default:
            printf("\nOpção Inválida! O programa será encerrado.\n");
            return 0;
    }

    // --- SOMA DOS ATRIBUTOS ---
    float somaCarta1 = carta1_val1 + carta1_val2;
    float somaCarta2 = carta2_val1 + carta2_val2;

    // --- EXIBIÇÃO DOS RESULTADOS ---
    printf("\n================ RESULTADO FINAL ================\n");
    printf("Atributos Comparados: %s & %s\n\n", nomeAtributo1, nomeAtributo2);
    
    printf("Carta 1 - %s:\n", cidade1);
    printf("  - %s: %.2f\n", nomeAtributo1, carta1_val1);
    printf("  - %s: %.2f\n", nomeAtributo2, carta1_val2);
    printf("  - SOMA TOTAL: %.2f\n\n", somaCarta1);

    printf("Carta 2 - %s:\n", cidade2);
    printf("  - %s: %.2f\n", nomeAtributo1, carta2_val1);
    printf("  - %s: %.2f\n", nomeAtributo2, carta2_val2);
    printf("  - SOMA TOTAL: %.2f\n", somaCarta2);
    printf("=================================================\n");

    // --- OPERADOR TERNÁRIO PARA DEFINIR O VENCEDOR ---
    (somaCarta1 == somaCarta2) ? printf("Resultado: Empate!\n") :
    (somaCarta1 > somaCarta2)  ? printf("Resultado: %s VENCEU!\n", cidade1) : 
                                 printf("Resultado: %s VENCEU!\n", cidade2);

    return 0;
}