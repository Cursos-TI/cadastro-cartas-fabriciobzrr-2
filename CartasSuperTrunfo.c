#include <stdio.h>
#include <string.h>

int main() {
  // Variaveis
  char estado, codigoCarta[20], nomeCidade[50];
  int populacao, pontosTuristicos;
  float area, pib, densidadePopulacional, pibPerCapita;

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
  printf("Area (em km²): ");
  scanf("%f", &area);
  printf("PIB: ");
  scanf("%f", &pib);
  printf("Numero de Pontos Turisticos: ");
  scanf("%d", &pontosTuristicos);

  // Calculo de densidade populaciona e pib per capita
  densidadePopulacional = populacao / area;
  pibPerCapita = (float) pib / populacao;

  // Exibição da carta 1
  printf("\nCarta de nº 1 cadastrada!\n");
  printf("\n=========== CARTA CADASTRADA ===========\n");
  
  printf("\nCarta 1:\n");
  printf("Estado: %c\n", estado);
  printf("Codigo da Carta: %c%s\n", estado, codigoCarta);
  printf("Nome da cidade: %s\n", nomeCidade);
  printf("Populacao: %d\n", populacao);
  printf("Area (em km²): %.2f km²\n", area);
  printf("PIB: %.2f\n", pib);
  printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos);
  printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita);

  
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
  printf("Area (em km²): ");
  scanf("%f", &area);
  printf("PIB: ");
  scanf("%f", &pib);
  printf("Numero de Pontos Turisticos: ");
  scanf("%d", &pontosTuristicos);

  // Calculo de densidade populaciona e pib per capita
  densidadePopulacional = populacao / area;
  pibPerCapita = (float) pib / populacao;
  
  // Exibição da carta 2
  printf("\nCarta de nº 2 cadastrada!\n");
  printf("\n=========== CARTA CADASTRADA ===========\n");

  printf("\nCarta 2:\n");
  printf("Estado: %c\n", estado);
  printf("Codigo da Carta: %c%s\n", estado, codigoCarta);
  printf("Nome da cidade: %s\n", nomeCidade);
  printf("Populacao: %d\n", populacao);
  printf("Area (em km²): %.2f km²\n", area);
  printf("PIB: %.2f\n", pib);
  printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos);
  printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita);

  return 0;
}