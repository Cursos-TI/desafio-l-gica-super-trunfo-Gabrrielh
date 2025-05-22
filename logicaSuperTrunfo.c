
#include <stdio.h>

int main() {
    char estado;
    char codigo;
    char cidades;
    int populacao;
    float pib;
    int pontos;

    printf("digite seu estado \n");
    scanf("%s", & estado);

    printf(" digite codigo da carta \n");
    scanf("%s", & codigo);

    printf("digite cidades \n");
    scanf("%s", & cidades);

    printf("digite população \n");
    scanf("%d", & populacao),

    printf("digite pib \n");
    scanf("%f", & pib);

     printf("digite pontos turisticos \n");
     scanf("%d", & pontos);

     printf("estado: %s - codigo: %s - cidades: %s ");

     printf("população: %d - pib: %f - pontos: %d");
 
    return 0;
}
