#include <stdio.h>

//Determinando as variaveis//
int main() {
    char estado[20], codigo[20], cidade[20];
    int populacao, Numeropt;
    float area, PIB, DensidadePop, PIBper;

    char estado2[20], codigo2[20], cidade2[20];
    int populacao2, Numeropt2;
    float area2, PIB2, DensidadePop2, PIBper2;


    //Coletando as informações do carta 1//
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

    printf("Digite o PIB: ");
    scanf("%f", &PIB);

    printf("Digite o Numero de pontos turisticos: ");
    scanf("%d", &Numeropt);


        // Cálculos Carta 1
        DensidadePop = populacao / area;
        PIBper = (PIB * 1000000000.0) / populacao; // Converte PIB para reais


    //Coletando as informações da carta 2;
    printf("\nDigite as informacoes da Carta 2");

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

    printf("Digite o PIB: ");
    scanf("%f", &PIB2);

    printf("Digite o Numero de pontos turisticos: ");
    scanf("%d", &Numeropt2);


        // Cálculos Carta 2
        DensidadePop2 = populacao2 / area2;
        PIBper2 = (PIB2 * 1000000000.0) / populacao2; // Converte PIB para reais


    //Exibição das informações da Carta 1;
    printf("\n============================\n");
    printf("      CARTA 1 - %s\n", cidade);
    printf("============================\n");
    printf("Estado: %s\n", estado);
    printf("Codigo da carta: %s\n", codigo);
    printf("Populacao: %d habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f bilhoes de reais\n", PIB);
    printf("Pontos turisticos: %d\n", Numeropt);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePop);
    printf("PIB per Capita: R$ %.2f reais\n", PIBper);


    //Exibição das informações da Carta 2;
    printf("\n============================\n");
    printf("      CARTA 2 - %s\n", cidade2);
    printf("============================\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo da carta: %s\n", codigo2);
    printf("Populacao: %d habitantes\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", PIB2);
    printf("Pontos turisticos: %d\n", Numeropt2);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePop2);
    printf("PIB per Capita: R$ %.2f reais\n", PIBper2);

    return 0;
}
