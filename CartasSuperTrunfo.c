#include <stdio.h>


int main() {
  
  // VARIAVEIS PARA A CARTA 1 ( SAO_PAULO )

  char estado_sao_paulo;
  char codigo_da_carta[]="A01";
  char nome_da_cidade[]="sao paulo";
  int populacao_sao_paulo;
  float area_sao_paulo;
  float PIB_sao_paulo;
  int ponto_turistico_sao_paulo;

  // VARIAVEIS PARA A CARTA 2 ( BAHIA )

  char estado_Bahia;
  char codigo_da_carta[]="B01";
  char nome_da_cidade[]="fortaleza";
  int populacao_bahia;
  float area_bahia;
  float PIB_bahia;
  int ponto_turistico_bahia;

  // DADOS PARA A CARTA 1 
  
  printf(" --- sao paulo ---\n");
  printf("digite a população de sao paulo:\n");
  scanf("%d, &populacao:\n");
  printf("digite a area de sao paulo:\n");
  scanf("%f, &area_sao_paulo:\n");
  printf("digite o PIB de sao paulo:\n");
  scanf("%f, &PIB_sao_paulo:\n");
  printf("ponto turistico de sao paulo: Avenida Paulista\n");

  // DADOS PARA A CARTA 2

  printf(" --- Bahia ---\n");
  printf("digite a população de Bahia:\n");
  scanf("%d, &populacao:\n");
  printf("digite a area de Bahia:\n");
  scanf("%f, &area_bahia:\n");
  printf("digite o PIB de Bahia:\n");
  scanf("%f, &PIB_Bahia:\n");
  printf("ponto turistico de Bahia: Praia do forte\n");

return 0;
} 
