#include <stdio.h>

int main() {

    // ---------- DECLARAÇÃO DAS VARIÁVEIS ----------
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[50], cidade2[50];

    unsigned long int pop1, pop2; // Agora usando unsigned long int
    float area1, area2;
    float pib1, pib2;
    int pts1, pts2;

    float dens1, dens2;
    float percap1, percap2;
    float super1, super2;

    // ---------- LEITURA DA CARTA 1 ----------
    printf("Carta 1:\n");
    printf("Estado: ");
    scanf(" %c", &estado1);

    printf("Codigo: ");
    scanf("%s", codigo1);

    printf("Cidade: ");
    scanf(" %[^\n]s", cidade1);

    printf("Populacao: ");
    scanf("%lu", &pop1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos Turisticos: ");
    scanf("%d", &pts1);

    // ---------- LEITURA DA CARTA 2 ----------
    printf("\nCarta 2:\n");
    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Codigo: ");
    scanf("%s", codigo2);

    printf("Cidade: ");
    scanf(" %[^\n]s", cidade2);

    printf("Populacao: ");
    scanf("%lu", &pop2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos Turisticos: ");
    scanf("%d", &pts2);

    // ---------- CÁLCULOS ----------
    dens1 = pop1 / area1;
    dens2 = pop2 / area2;

    percap1 = pib1 / pop1;
    percap2 = pib2 / pop2;

    // Super poder = soma dos atributos
    // OBS: 1/densidade -> menor densidade = maior poder
    super1 = (float)pop1 + area1 + pib1 + pts1 + percap1 + (1.0f / dens1);
    super2 = (float)pop2 + area2 + pib2 + pts2 + percap2 + (1.0f / dens2);

    // ---------- RESULTADOS ----------
    printf("\n\n===== COMPARAÇÃO DAS CARTAS =====\n\n");

    printf("Populacao: Carta 1 venceu (%d)\n", pop1 > pop2);
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pts1 > pts2);

    // densidade → MENOR vence → invertendo a comparação:
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", dens1 < dens2);

    printf("PIB per Capita: Carta 1 venceu (%d)\n", percap1 > percap2);
    printf("Super Poder: Carta 1 venceu (%d)\n", super1 > super2);

    return 0;
}
