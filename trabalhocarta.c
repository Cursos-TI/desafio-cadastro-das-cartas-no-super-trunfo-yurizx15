#include <stdio.h>

int main() {
    char pais1[50], pais2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;
    float densidade1, densidade2;
    int opcao;

    // Carta 1
    printf("Carta 1:\n");
    printf("Nome do País: ");
    scanf("%s", pais1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB (bilhões): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);

    densidade1 = populacao1 / area1;

    // Carta 2
    printf("\nCarta 2:\n");
    printf("Nome do País: ");
    scanf("%s", pais2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (bilhões): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);

    densidade2 = populacao2 / area2;

    // Menu de comparação
    printf("\n===== SUPER TRUNFO =====\n");
    printf("Comparando %s x %s\n", pais1, pais2);
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("\nPopulação: %s = %d | %s = %d\n", pais1, populacao1, pais2, populacao2);
            if (populacao1 > populacao2)
                printf("Vencedor: %s\n", pais1);
            else if (populacao2 > populacao1)
                printf("Vencedor: %s\n", pais2);
            else
                printf("Empate!\n");
            break;
        case 2:
            printf("\nÁrea: %s = %.2f | %s = %.2f\n", pais1, area1, pais2, area2);
            if (area1 > area2)
                printf("Vencedor: %s\n", pais1);
            else if (area2 > area1)
                printf("Vencedor: %s\n", pais2);
            else
                printf("Empate!\n");
            break;
        case 3:
            printf("\nPIB: %s = %.2f | %s = %.2f\n", pais1, pib1, pais2, pib2);
            if (pib1 > pib2)
                printf("Vencedor: %s\n", pais1);
            else if (pib2 > pib1)
                printf("Vencedor: %s\n", pais2);
            else
                printf("Empate!\n");
            break;
        case 4:
            printf("\nPontos Turísticos: %s = %d | %s = %d\n", pais1, pontos1, pais2, pontos2);
            if (pontos1 > pontos2)
                printf("Vencedor: %s\n", pais1);
            else if (pontos2 > pontos1)
                printf("Vencedor: %s\n", pais2);
            else
                printf("Empate!\n");
            break;
        case 5:
            printf("\nDensidade: %s = %.2f | %s = %.2f\n", pais1, densidade1, pais2, densidade2);
            if (densidade1 < densidade2)
                printf("Vencedor: %s\n", pais1);
            else if (densidade2 < densidade1)
                printf("Vencedor: %s\n", pais2);
            else
                printf("Empate!\n");
            break;
        default:
            printf("\nOpção inválida!\n");
    }

    return 0;
}


  
