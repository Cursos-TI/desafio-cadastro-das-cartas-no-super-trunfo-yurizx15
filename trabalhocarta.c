#include <stdio.h>

int main() {
    char pais1[50], pais2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;
    float densidade1, densidade2;
    int opcao1, opcao2;

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

    // Escolha dos atributos
    printf("\n===== SUPER TRUNFO =====\n");
    printf("Comparando %s x %s\n", pais1, pais2);

    printf("\nEscolha o PRIMEIRO atributo:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Demográfica\nOpção: ");
    scanf("%d", &opcao1);

    printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 5; i++) {
        if (i == opcao1) continue;
        switch (i) {
            case 1: printf("1 - População\n"); break;
            case 2: printf("2 - Área\n"); break;
            case 3: printf("3 - PIB\n"); break;
            case 4: printf("4 - Pontos Turísticos\n"); break;
            case 5: printf("5 - Densidade Demográfica\n"); break;
        }
    }
    printf("Opção: ");
    scanf("%d", &opcao2);

    // Função inline com ternário p/ pegar valor
    float pegarValor(int opcao, int pop, float area, float pib, int pontos, float dens) {
        return (opcao == 1) ? pop :
               (opcao == 2) ? area :
               (opcao == 3) ? pib :
               (opcao == 4) ? pontos : dens;
    }

    float v1a = pegarValor(opcao1, populacao1, area1, pib1, pontos1, densidade1);
    float v2a = pegarValor(opcao1, populacao2, area2, pib2, pontos2, densidade2);
    float v1b = pegarValor(opcao2, populacao1, area1, pib1, pontos1, densidade1);
    float v2b = pegarValor(opcao2, populacao2, area2, pib2, pontos2, densidade2);

    // Soma dos dois atributos
    float soma1 = v1a + v1b;
    float soma2 = v2a + v2b;

    // Exibição dos resultados
    printf("\n=== RESULTADO ===\n");
    printf("%s -> %.2f + %.2f = %.2f\n", pais1, v1a, v1b, soma1);
    printf("%s -> %.2f + %.2f = %.2f\n", pais2, v2a, v2b, soma2);

    // Decisão final com ternário
    (soma1 > soma2) ? printf("\nVencedor: %s!\n", pais1) :
    (soma2 > soma1) ? printf("\nVencedor: %s!\n", pais2) :
                      printf("\nEmpate!\n");

    return 0;
}

