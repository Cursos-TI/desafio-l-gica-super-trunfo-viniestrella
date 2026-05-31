#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
  // Área para definição das variáveis para armazenar
  // as propriedades das cartas
    
    // Carta 1
    char Estado1[20], Codigocarta1[4], NomeCidade1[20];
    unsigned long int Populacao1;
    int PontosTuristicos1;
    float Area1, PIB1;
    float Densidade1, PIBperCapita1, SuperPoder1;

    // Carta 2
    char Estado2[20], Codigocarta2[4], NomeCidade2[20];
    unsigned long int Populacao2;
    int PontosTuristicos2;
    float Area2, PIB2;
    float Densidade2, PIBperCapita2, SuperPoder2;

  // Área para casdastro de dados

    // Dados da Carta 1
    
    // Estado
    printf("Digite o Estado da Carta 1: \n");
    scanf("%s", Estado1);
    
    // Código da Carta
    printf("Digite o Codigo da Carta 1: \n");
    scanf("%s", Codigocarta1);
   
    //Nome da Cidade
    printf("Digite o Nome da Cidade da Carta 1: \n");
    scanf("%s", NomeCidade1);
    
    // Polução
    printf("Digite a Populacao da Carta 1: \n");
    scanf("%lu", &Populacao1);

    // Pontos Turísticos
    printf("Digite o Numero de pontos turisticos da Carta 1: \n");
    scanf("%d", &PontosTuristicos1);
    
    //Área
    printf("Digite a Area da Carta 1: \n");
    scanf("%f", &Area1);

    // PIB
    printf("Digite o PIB da Carta 1: \n");
    scanf("%f", &PIB1);


    // Dados da Carta 2
    
    // Estado
    printf("Digite o Estado da Carta 2: \n");
    scanf("%s", Estado2);

    // Código da Carta
    printf("Digite o Codigo da Carta 2: \n");
    scanf("%s", Codigocarta2);

    //Nome da Cidade
    printf("Digite o Nome da Cidade da Carta 2: \n");
    scanf("%s", NomeCidade2);

    // Polução
    printf("Digite a Populacao da Carta 2: \n");
    scanf("%lu", &Populacao2);

    // Pontos Turísticos
    printf("Digite o Numero de pontos turisticos da Carta 2: \n");
    scanf("%d", &PontosTuristicos2);
    
    // Área
    printf("Digite a Area da Carta 2: \n");
    scanf("%f", &Area2);

    // PIB
    printf("Digite o PIB da Carta 2: \n");
    scanf("%f", &PIB2);




  // Área para os cálculos

    // Carta 1
    Densidade1 = (float)Populacao1/Area1;
    PIBperCapita1 = PIB1/(float)Populacao1;
    SuperPoder1 = (float)Populacao1+
                         Area1+
                         PIB1+
                  (float)PontosTuristicos1+
                         PIBperCapita1+
                         (1.0/Densidade1);

    // Carta 2
    Densidade2 = (float)Populacao2/Area2;
    PIBperCapita2 = PIB2/(float)Populacao2;
    SuperPoder2 = (float)Populacao2+
                         Area2+
                         PIB2+
                  (float)PontosTuristicos2+
                         PIBperCapita2+
                         (1.0/Densidade2);


  // Área para exibição dos dados das cartas

    // Exibindo os dados da Carta 1
    printf("Carta 1\n Estado: %s\n Codigo da carta: %s\n Cidade: %s\n",
        Estado1, Codigocarta1, NomeCidade1);
    
    printf(" Populacao: %lu\n Pontos turisticos: %d\n",
        Populacao1, PontosTuristicos1);

    printf(" Area: %.2f km2\n PIB: %.2f bilhoes de reais\n",
        Area1, PIB1);
    
    printf(" Densidade Populacional: %.2f\n PIB per capita: %.2f\n",
        (float)Populacao1/Area1, PIB1/(float)Populacao1);
    
    printf(" Super Poder: %.2f\n", SuperPoder1);

    // Exibindo os dados da Carta 2
    printf("Carta 2\n Estado: %s\n Codigo da carta: %s\n Cidade: %s\n",
        Estado2, Codigocarta2, NomeCidade2);
    
    printf(" Populacao: %lu\n Pontos turisticos: %d\n",
        Populacao2, PontosTuristicos2);

    printf(" Area: %.2f km2\n PIB: %.2f bilhoes de reais\n",
        Area2, PIB2);

    printf(" Densidade Populacional: %.2f\n PIB per capita: %.2f\n",
        (float)Populacao2/Area2, PIB2/(float)Populacao2);
    
    printf(" Super Poder: %.2f\n", SuperPoder2);

// Área para comparação das cartas

    int opcao;

    printf("\n=== MENU DE COMPARACAO ===\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional\n");
    printf("Escolha o atributo para comparacao: ");
    scanf("%d", &opcao);

    printf("\n=== RESULTADO DA COMPARACAO ===\n");

    switch(opcao)
    {
        case 1:
            printf("Atributo: Populacao\n");
            printf("%s: %lu habitantes\n", NomeCidade1, Populacao1);
            printf("%s: %lu habitantes\n", NomeCidade2, Populacao2);

            if (Populacao1 > Populacao2)
                printf("\nVencedor: %s\n", NomeCidade1);
            else if (Populacao2 > Populacao1)
                printf("\nVencedor: %s\n", NomeCidade2);
            else
                printf("\nEmpate!\n");
            break;

        case 2:
            printf("Atributo: Area\n");
            printf("%s: %.2f km²\n", NomeCidade1, Area1);
            printf("%s: %.2f km²\n", NomeCidade2, Area2);

            if (Area1 > Area2)
                printf("\nVencedor: %s\n", NomeCidade1);
            else if (Area2 > Area1)
                printf("\nVencedor: %s\n", NomeCidade2);
            else
                printf("\nEmpate!\n");
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f bilhões\n", NomeCidade1, PIB1);
            printf("%s: %.2f bilhões\n", NomeCidade2, PIB2);

            if (PIB1 > PIB2)
                printf("\nVencedor: %s\n", NomeCidade1);
            else if (PIB2 > PIB1)
                printf("\nVencedor: %s\n", NomeCidade2);
            else
                printf("\nEmpate!\n");
            break;

        case 4:
            printf("Atributo: Pontos Turisticos\n");
            printf("%s: %d pontos\n", NomeCidade1, PontosTuristicos1);
            printf("%s: %d pontos\n", NomeCidade2, PontosTuristicos2);

            if (PontosTuristicos1 > PontosTuristicos2)
                printf("\nVencedor: %s\n", NomeCidade1);
            else if (PontosTuristicos2 > PontosTuristicos1)
                printf("\nVencedor: %s\n", NomeCidade2);
            else
                printf("\nEmpate!\n");
            break;

        case 5:
            printf("Atributo: Densidade Populacional\n");
            printf("%s: %.2f hab/km²\n", NomeCidade1, Densidade1);
            printf("%s: %.2f hab/km²\n", NomeCidade2, Densidade2);

            // Regra especial: menor densidade vence
            if (Densidade1 < Densidade2)
                printf("\nVencedor: %s\n", NomeCidade1);
            else if (Densidade2 < Densidade1)
                printf("\nVencedor: %s\n", NomeCidade2);
            else
                printf("\nEmpate!\n");
            break;

        default:
            printf("Opcao invalida!\n");

            break;
    }

    return 0;

}