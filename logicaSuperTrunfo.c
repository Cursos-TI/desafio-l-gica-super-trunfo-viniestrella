#include <stdio.h>
#include <string.h>
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

// Área para comparação avançada

int atributo1, atributo2;
float valor1Carta1 = 0, valor1Carta2 = 0;
float valor2Carta1 = 0, valor2Carta2 = 0;
char nomeAtributo1[30];
char nomeAtributo2[30];

printf("\n=== SUPER TRUNFO - COMPARACAO AVANCADA ===\n");

printf("\nEscolha o PRIMEIRO atributo:\n");
printf("1 - Populacao\n");
printf("2 - Area\n");
printf("3 - PIB\n");
printf("4 - Pontos Turisticos\n");
printf("5 - Densidade Populacional\n");
scanf("%d", &atributo1);

printf("\nEscolha o SEGUNDO atributo:\n");

if (atributo1 != 1) printf("1 - Populacao\n");
if (atributo1 != 2) printf("2 - Area\n");
if (atributo1 != 3) printf("3 - PIB\n");
if (atributo1 != 4) printf("4 - Pontos Turisticos\n");
if (atributo1 != 5) printf("5 - Densidade Populacional\n");

scanf("%d", &atributo2);

if (atributo1 == atributo2)
{
    printf("\nErro: nao e permitido escolher o mesmo atributo duas vezes!\n");
    return 0;
}

/* ATRIBUTO 1 */

switch (atributo1)
{
    case 1:
        valor1Carta1 = Populacao1;
        valor1Carta2 = Populacao2;
        strcpy(nomeAtributo1, "Populacao");
        break;

    case 2:
        valor1Carta1 = Area1;
        valor1Carta2 = Area2;
        strcpy(nomeAtributo1, "Area");
        break;

    case 3:
        valor1Carta1 = PIB1;
        valor1Carta2 = PIB2;
        strcpy(nomeAtributo1, "PIB");
        break;

    case 4:
        valor1Carta1 = PontosTuristicos1;
        valor1Carta2 = PontosTuristicos2;
        strcpy(nomeAtributo1, "Pontos Turisticos");
        break;

    case 5:
        valor1Carta1 = 1.0 / Densidade1;
        valor1Carta2 = 1.0 / Densidade2;
        strcpy(nomeAtributo1, "Densidade Populacional");
        break;

    default:
        printf("Opcao invalida!\n");
        return 0;
}

/* ATRIBUTO 2 */

switch (atributo2)
{
    case 1:
        valor2Carta1 = Populacao1;
        valor2Carta2 = Populacao2;
        strcpy(nomeAtributo2, "Populacao");
        break;

    case 2:
        valor2Carta1 = Area1;
        valor2Carta2 = Area2;
        strcpy(nomeAtributo2, "Area");
        break;

    case 3:
        valor2Carta1 = PIB1;
        valor2Carta2 = PIB2;
        strcpy(nomeAtributo2, "PIB");
        break;

    case 4:
        valor2Carta1 = PontosTuristicos1;
        valor2Carta2 = PontosTuristicos2;
        strcpy(nomeAtributo2, "Pontos Turisticos");
        break;

    case 5:
        valor2Carta1 = 1.0 / Densidade1;
        valor2Carta2 = 1.0 / Densidade2;
        strcpy(nomeAtributo2, "Densidade Populacional");
        break;

    default:
        printf("Opcao invalida!\n");
        return 0;
}

/* SOMA DOS ATRIBUTOS */

float somaCarta1 = valor1Carta1 + valor2Carta1;
float somaCarta2 = valor1Carta2 + valor2Carta2;

/* RESULTADO */

printf("\n====================================\n");
printf("Comparacao entre %s e %s\n", NomeCidade1, NomeCidade2);
printf("====================================\n");

printf("\nPrimeiro atributo: %s\n", nomeAtributo1);
printf("%s: %.2f\n", NomeCidade1, valor1Carta1);
printf("%s: %.2f\n", NomeCidade2, valor1Carta2);

printf("\nSegundo atributo: %s\n", nomeAtributo2);
printf("%s: %.2f\n", NomeCidade1, valor2Carta1);
printf("%s: %.2f\n", NomeCidade2, valor2Carta2);

printf("\nSoma dos atributos:\n");
printf("%s: %.2f\n", NomeCidade1, somaCarta1);
printf("%s: %.2f\n", NomeCidade2, somaCarta2);

/* Operador ternário */

printf("\nResultado Final:\n");

(somaCarta1 > somaCarta2)
    ? printf("%s venceu!\n", NomeCidade1)
    : (somaCarta2 > somaCarta1)
        ? printf("%s venceu!\n", NomeCidade2)
        : printf("Empate!\n");



    return 0;

}
