#include <stdio.h>

int main() {
    // Variáveis Carta 1
    char estado[20], codigo[20], cidade[20];
    int populacao, Numeropt;
    float area, PIB, DensidadePop, PIBper, SuperPoder;

    // Variáveis Carta 2
    char estado2[20], codigo2[20], cidade2[20];
    int populacao2, Numeropt2;
    float area2, PIB2, DensidadePop2, PIBper2, SuperPoder2;

    // ===== Coleta Carta 1 =====
    printf("Digite o Estado: ");
    scanf("%s", estado);

    printf("Digite o codigo: ");
    scanf("%s", codigo);

    printf("Digite a cidade: ");
    scanf("%s", cidade);

    printf("Digite a populacao: ");
    scanf("%d", &populacao);

    printf("Digite a area (km²): ");
    scanf("%f", &area);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &PIB);

    printf("Digite o Numero de pontos turisticos: ");
    scanf("%d", &Numeropt);

    // Cálculos Carta 1
    DensidadePop = populacao / area;
    PIBper = (PIB * 1000000000.0f) / populacao; 
    SuperPoder = populacao + area + PIB + Numeropt + PIBper + (1.0f / DensidadePop);

    // ===== Coleta Carta 2 =====
    printf("\nDigite as informacoes da Carta 2\n");

    printf("Digite o Estado: ");
    scanf("%s", estado2);

    printf("Digite o codigo: ");
    scanf("%s", codigo2);

    printf("Digite a cidade: ");
    scanf("%s", cidade2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &PIB2);

    printf("Digite o Numero de pontos turisticos: ");
    scanf("%d", &Numeropt2);

    // Cálculos Carta 2
    DensidadePop2 = populacao2 / area2;
    PIBper2 = (PIB2 * 1000000000.0f) / populacao2; 
    SuperPoder2 = populacao2 + area2 + PIB2 + Numeropt2 + PIBper2 + (1.0f / DensidadePop2);

    // ===== Exibição Informações =====
    printf("\n============================\n");
    printf("      CARTA 1 - %s\n", cidade);
    printf("============================\n");
    printf("Estado: %s\n", estado);
    printf("Codigo da carta: %s\n", codigo);
    printf("Populacao: %d habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f bilhoes de R$\n", PIB);
    printf("Pontos turisticos: %d\n", Numeropt);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePop);
    printf("PIB per Capita: R$ %.2f reais\n", PIBper);
    printf("Super Poder: %.2f\n", SuperPoder);

    printf("\n============================\n");
    printf("      CARTA 2 - %s\n", cidade2);
    printf("============================\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo da carta: %s\n", codigo2);
    printf("Populacao: %d habitantes\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de R$\n", PIB2);
    printf("Pontos turisticos: %d\n", Numeropt2);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePop2);
    printf("PIB per Capita: R$ %.2f reais\n", PIBper2);
    printf("Super Poder: %.2f\n", SuperPoder2);

    // ===== Comparações =====
    printf("\n=====================================");
    printf("===== RESULTADO DAS COMPARACOES =====\n");

    printf("Populacao: %s\n", (populacao > populacao2) ? "Carta 1 Venceu (1)" : "Carta 2 Venceu (0)");
    printf("Area: %s\n", (area > area2) ? "Carta 1 Venceu (1)" : "Carta 2 Venceu (0)");
    printf("PIB: %s\n", (PIB > PIB2) ? "Carta 1 Venceu (1)" : "Carta 2 Venceu (0)");
    printf("Pontos turisticos: %s\n", (Numeropt > Numeropt2) ? "Carta 1 Venceu (1)" : "Carta 2 Venceu (0)");
    printf("Densidade Populacional: %s\n", (DensidadePop < DensidadePop2) ? "Carta 1 Venceu (1)" : "Carta 2 Venceu (0)");
    printf("PIB per Capita: %s\n", (PIBper > PIBper2) ? "Carta 1 Venceu (1)" : "Carta 2 Venceu (0)");
    printf("Super Poder: %s\n", (SuperPoder > SuperPoder2) ? "Carta 1 Venceu (1)" : "Carta 2 Venceu (0)");

    return 0;
}
