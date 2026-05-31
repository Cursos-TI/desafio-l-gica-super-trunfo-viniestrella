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

  // Área para a comparação entre os dados das cartas

printf("\n=== COMPARACAO DE CARTAS ===\n");
printf("Atributo escolhido: Populacao\n\n");

printf("Carta 1 - %s (%s): %lu habitantes\n",
       NomeCidade1, Estado1, Populacao1);

printf("Carta 2 - %s (%s): %lu habitantes\n",
       NomeCidade2, Estado2, Populacao2);

// Comparação usando if e if-else
if (Populacao1 > Populacao2)
{
    printf("\nResultado: Carta 1 (%s) venceu!\n",
           NomeCidade1);
}
else if (Populacao2 > Populacao1)
{
    printf("\nResultado: Carta 2 (%s) venceu!\n",
           NomeCidade2);
}
else
{
    printf("\nResultado: Empate!\n");
}

return 0;
} 
