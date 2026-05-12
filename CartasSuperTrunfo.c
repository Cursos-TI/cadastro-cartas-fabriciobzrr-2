#include <stdio.h>
#include <string.h>

int main() {
  // Variaveis
  char estado, codigoCarta[20], nomeCidade[50];
  int populacao, pontosTuristicos;
  float area, pib;

  // Input's da carta 1
  printf("\nCarta 1:\n");
  printf("Estado: ");
  scanf(" %c", &estado);
  printf("Codigo da Carta: ");
  scanf("%s", codigoCarta);
  getchar();
  printf("Nome da cidade: ");
  fgets(nomeCidade, 50, stdin);
  nomeCidade[strcspn(nomeCidade, "\n")] = 0;
  printf("Populacao: ");
  scanf("%d", &populacao);
  printf("Area (em km2): ");
  scanf("%f", &area);
  printf("PIB: ");
  scanf("%f", &pib);
  printf("Numero de Pontos Turisticos: ");
  scanf("%d", &pontosTuristicos);

  // Exibição da carta 1
  printf("\nCarta de nº 1 cadastrada!\n");
  printf("\n=========== CARTA CADASTRADA ===========\n");
  
  printf("\nCarta 1:\n");
  printf("Estado: %c\n", estado);
  printf("Codigo da Carta: %c%s\n", estado, codigoCarta);
  printf("Nome da cidade: %s\n", nomeCidade);
  printf("Populacao: %d\n", populacao);
  printf("Area (em km²): %.2f\n", area);
  printf("PIB: %.2f\n", pib);
  printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos);
  
  // Input's da carta 2
  printf("\nCarta 2:\n");
  printf("Estado: ");
  scanf(" %c", &estado);
  printf("Codigo da Carta: ");
  scanf("%s", codigoCarta);
  getchar();
  printf("Nome da cidade: ");
  fgets(nomeCidade, 50, stdin);
  nomeCidade[strcspn(nomeCidade, "\n")] = 0;
  printf("Populacao: ");
  scanf("%d", &populacao);
  printf("Area (em km2): ");
  scanf("%f", &area);
  printf("PIB: ");
  scanf("%f", &pib);
  printf("Numero de Pontos Turisticos: ");
  scanf("%d", &pontosTuristicos);
  
  
  // Exibição da carta 2
  printf("\nCarta de nº 2 cadastrada!\n");
  printf("\n=========== CARTA CADASTRADA ===========\n");

  printf("\nCarta 2:\n");
  printf("Estado: %c\n", estado);
  printf("Codigo da Carta: %c%s\n", estado, codigoCarta);
  printf("Nome da cidade: %s\n", nomeCidade);
  printf("Populacao: %d\n", populacao);
  printf("Area (em km²): %.2f\n", area);
  printf("PIB: %.2f\n", pib);
  printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos);

  return 0;
}
