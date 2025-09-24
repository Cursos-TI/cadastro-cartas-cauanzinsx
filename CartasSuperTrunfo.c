 #include <stdio.h>

int main() {
    int populacao_sao_paulo = 46000000;
    double pib_sao_paulo = 3.5;
    double area_sao_paulo = 248219.485;
    int pontos_turisticos_sao_paulo = 7;

    int populacao_bahia = 14800000;
    double pib_bahia = 482.8;
    double area_bahia = 564733.00;
    int pontos_turisticos_bahia = 8;

    printf("\nCarta 1 - Sao paulo\n");
    printf("Populacao: %d\n", populacao_sao_paulo);
    printf("PIB: %.2lf trilhoes de reais\n", pib_sao_paulo);
    printf("Area: %.2lf km²\n", area_sao_paulo);
    printf("Pontos turisticos: %d\n", pontos_turisticos_sao_paulo);
    printf("Pontos turisticos principais: MASP, Avenida Paulista, Parque Ibirapuera, Mercado Municipal, Pinacoteca, Museu do Futebol, Catedral da Se\n");

    printf("\nCarta 2 - Bahia\n");
    printf("Populacao: %d\n", populacao_bahia);
    printf("PIB: %.2lf bilhoes de reais\n", pib_bahia);
    printf("Area: %.2lf km²\n", area_bahia);
    printf("Pontos turisticos: %d\n", pontos_turisticos_bahia);
    printf("Pontos turisticos principais: Pelourinho, Farol da Barra, Elevador Lacerda, Mercado Modelo, Chapada Diamantina, Praia do Forte, Morro de Sao Paulo, Porto Seguro\n");

    return 0;
}