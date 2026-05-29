#include <stdio.h>
#include <string.h>

int main() {
  // DECLARACAO DE VARIAVEIS
  char estado1, codCarta1[255], nomeCidade1[255];
  unsigned long int populacao1;
  float area1, pib1, densidadePopulacional1, pibPerCapita1, superPoder1;
  int pontosTuristicos1;

  char estado2, codCarta2[255], nomeCidade2[255];
  unsigned long int populacao2;
  float area2, pib2, densidadePopulacional2, pibPerCapita2, superPoder2;
  int pontosTuristicos2;

  int resultadoPopulacao, resultadoArea, resultadoPib, resultadoPontosTuristicos, resultadoDensidadePopulacional, resultadoPibPerCapita, resultadoSuperPoder;

  // ENTRADA DE DADOS
  // CARTA 1
  printf("CARTA 1:\n");

  printf("Estado (Letra de 'A' a 'H'): ");
  scanf(" %c", &estado1);

  printf("Codigo da carta: ");
  scanf("%s", codCarta1);
  getchar();

  printf("Nome da cidade: ");
  fgets(nomeCidade1, 255, stdin);
  nomeCidade1[strcspn(nomeCidade1, "\n")] = 0; // remove o \n do final

  printf("Numero de habitantes da cidade: ");
  scanf("%lu", &populacao1);

  printf("Area da cidade em quilometros quadrados: ");
  scanf("%f", &area1);

  printf("PIB da cidade em bilhoes de reais: ");
  scanf("%f", &pib1);

  printf("Quantidade de pontos turisticos na cidade: ");
  scanf("%d", &pontosTuristicos1);
  getchar();

  // CALCULOS DENSIDADE POPULACIONAL, PIB PER CAPITA E SUPER PODER
  densidadePopulacional1 = (float)populacao1 / area1;
  pibPerCapita1 = (pib1 * 1000000000.0f) / (float)populacao1;
  superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + (1.0f / densidadePopulacional1);

  printf("\n\nCARTA 2:\n");

  printf("Estado (Letra de 'A' a 'H'): ");
  scanf(" %c", &estado2);

  printf("Codigo da carta: ");
  scanf("%s", codCarta2);
  getchar();

  printf("Nome da cidade: ");
  fgets(nomeCidade2, 255, stdin);
  nomeCidade2[strcspn(nomeCidade2, "\n")] = 0;

  printf("Numero de habitantes da cidade: ");
  scanf("%lu", &populacao2);

  printf("Area da cidade em quilometros quadrados: ");
  scanf("%f", &area2);

  printf("PIB da cidade em bilhoes de reais: ");
  scanf("%f", &pib2);

  printf("Quantidade de pontos turisticos na cidade: ");
  scanf("%d", &pontosTuristicos2);

  // CALCULOS DENSIDADE POPULACIONAL, PIB PER CAPITA E SUPER PODER
  densidadePopulacional2 = (float)populacao2 / area2;
  pibPerCapita2 = (pib2 * 1000000000.0f) / (float)populacao2;
  superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + (1.0f / densidadePopulacional2);

  // RESULTADOS DE COMPARAÇÕES
  resultadoPopulacao = populacao1 > populacao2;
  resultadoArea = area1 > area2;
  resultadoPib = pib1 > pib2;
  resultadoPontosTuristicos = pontosTuristicos1 > pontosTuristicos2;
  resultadoDensidadePopulacional = densidadePopulacional1 < densidadePopulacional2;
  resultadoPibPerCapita = pibPerCapita1 > pibPerCapita2;
  resultadoSuperPoder = superPoder1 > superPoder2;

  // EXIBIÇÃO DE RESULTADOS
  printf("\n========== SAIDA ==========\n");

  printf("\nCarta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Codigo: %c%s\n", estado1, codCarta1);
  printf("Nome da Cidade: %s\n", nomeCidade1);
  printf("Populacao: %lu\n", populacao1);
  printf("Area: %.2f km2\n", area1);
  printf("PIB: %.2f bilhoes de reais\n", pib1);
  printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
  printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional1);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
  printf("Super Poder: %.2f\n\n", superPoder1);

  printf("\nCarta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Codigo: %c%s\n", estado2, codCarta2);
  printf("Nome da Cidade: %s\n", nomeCidade2);
  printf("Populacao: %lu\n", populacao2);
  printf("Area: %.2f km2\n", area2);
  printf("PIB: %.2f bilhoes de reais\n", pib2);
  printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
  printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional2);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
  printf("Super Poder: %.2f\n", superPoder2);

  printf("=============================\n");

  printf("\nComparacao de Cartas:\n\n");
  printf("Populacao: Carta %d venceu (%d)\n", 2 - resultadoPopulacao, resultadoPopulacao);
  printf("Area: Carta %d venceu (%d)\n", 2 - resultadoArea, resultadoArea);
  printf("PIB: Carta %d venceu (%d)\n", 2 - resultadoPib, resultadoPib);
  printf("Pontos Turisticos: Carta %d venceu (%d)\n", 2 - resultadoPontosTuristicos,
          resultadoPontosTuristicos);
  printf("Densidade Populacional: Carta %d venceu (%d)\n",
          2 - resultadoDensidadePopulacional, resultadoDensidadePopulacional);
  printf("PIB per Capita: Carta %d venceu (%d)\n", 2 - resultadoPibPerCapita,
          resultadoPibPerCapita);
  printf("Super Poder: Carta %d venceu (%d)\n", 2 - resultadoSuperPoder,
          resultadoSuperPoder);

  return 0;
}