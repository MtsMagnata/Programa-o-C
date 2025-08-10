#include <stdio.h>

//Determinando as variaveis//

int main() {
    char estado[20];
    char codigo[20];
    char cidade[20];
    int populacao;
    float area;
    float PIB;
    int Numeropt;   
    
    char estado2[20];
    char codigo2[20];
    char cidade2[20];
    int populacao2;
    float area2;
    float PIB2;
    int Numeropt2;   


//Coletando as informações do carta 1//

    printf("Digite o Estado: \n");
    scanf ("%s", estado);

    printf("Digite o codigo: \n");
    scanf ("%s", codigo);

    printf("Digite a cidade: \n");
    scanf ("%s", cidade);

    printf("Digite a populacao\n");
    scanf ("%d", &populacao);

    printf("Digite a area:\n");
    scanf ("%f", &area);

    printf("Digite o PIB:\n");
    scanf ("%f", &PIB);

    printf("Digite o Numero de pontos turisticos:\n");
    scanf ("%d", &Numeropt);


//Coletando as informações da carta 2//

        printf("\nDigite as informacoes da Carta 2\n");

            printf("Digite o Estado: \n");
            scanf ("%s", estado2);

            printf("Digite o codigo: \n");
            scanf ("%s", codigo2);

            printf("Digite a cidade: \n");
            scanf ("%s", cidade2);

            printf("Digite a populacao\n");
            scanf ("%d", &populacao2);

            printf("Digite a area:\n");
            scanf ("%f", &area2);

            printf("Digite o PIB:\n");
            scanf ("%f", &PIB2);

            printf("Digite o Numero de pontos turisticos:\n");
            scanf ("%d", &Numeropt2);


//Informações exibadas ao usuário//

        printf("\nCarta 1\n");
        
        printf ("Estado: %s\n" , estado);
        
        printf ("Codigo da carta: %s\n" , codigo);

        printf ("Nome da Cidade: %s\n" , cidade);

        printf ("Populacao: %d\n" , populacao);

        printf ("Area: %.2f km²\n" , area);

        printf ("PIB: %.2f bilhoes de reais\n" , PIB);              

        printf ("Pontos turisticos: %d\n" , Numeropt);

                printf("\nCarta 2\n");
                
                printf ("Estado: %s\n" , estado2);
                
                printf ("Codigo da carta: %s\n" , codigo2);

                printf ("Nome da Cidade: %s\n" , cidade2);

                printf ("Populacao: %d\n" , populacao2);

                printf ("Area: %.2f km²\n" , area2);

                printf ("PIB: %.2f bilhoes de reais\n" , PIB2);              

                printf ("Pontos turisticos: %d\n" , Numeropt2);
    return 0;
 


}
