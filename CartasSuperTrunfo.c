#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado;
  char codigoCarta [20];
  char nomeCidade [25];
  int população;
  float área;
  float PIB;
  int pontosTuristicos;

  // Área para entrada de dados
printf("Estado: \n");
scanf("%s", &estado);

printf("Código da Carta: \n");
scanf("%s", &codigoCarta);

printf("Nome da Cidade: \n");
scanf("%s", &nomeCidade);

printf("População: \n");
scanf("%d", &população);

printf("Área: \n");
scanf("%f", &área);

printf("PIB: \n");
scanf("%f", &PIB);

printf("Número de Pontos Turísticos: \n");
scanf("%d", &pontosTuristicos);



  // Área para exibição dos dados da cidade

return 0;
} 
