#include <stdio.h>

int main(){
    char estado_1, estado_2;
    char código_1[20], código_2[20];
    char nome_1[50], nome_2[50];
    int população_1, população_2;
    float área_1, área_2;
    float pib_1, pib_2;
    int turismo_1, turismo_2;

    printf("Digite as informações da primeira cidade:\n");
    printf("Estado: \n");
    scanf(" %c", &estado_1);
    printf("Código: \n");
    scanf("%s", código_1);
    printf("Nome: \n");
    scanf("%s", nome_1);
    printf("População: \n");
    scanf("%d", &população_1);
    printf("Área: \n");
    scanf("%f", &área_1);
    printf("PIB: \n");
    scanf("%f", &pib_1);
    printf("Quantidade de pontos turísticos: \n");
    scanf("%d", &turismo_1);

    printf("Digite as informações da segunda cidade\n");
    printf("Estado: \n");
    scanf(" %c", &estado_2);
    printf("Código: \n");
    scanf("%s", código_2);
    printf("Nome: \n");
    scanf("%s", nome_2);
    printf("População: \n");
    scanf("%d", &população_2);
    printf("Área: \n");
    scanf("%f", &área_2);
    printf("PIB: \n");
    scanf("%f", &pib_2);
    printf("Quantidade de pontos turísticos: \n");
    scanf("%d", &turismo_2);


    printf("Carta 1:\n");
    printf("Estado: %c\n", estado_1);
    printf("Código da cidade: %s\n", código_1);
    printf("Nome da cidade: %s\n", nome_1);
    printf("População: %d\n", população_1);
    printf("Área: %.2f km²\n", área_1);
    printf("PIB: %.2f bilhões de reais\n", pib_1);
    printf("Número de pontos turísticos: %d\n", turismo_1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado_2);
    printf("Código da cidade: %s\n", código_2);
    printf("Nome da cidade: %s\n", nome_2);
    printf("População: %d\n", população_2);
    printf("Área: %.2f km²\n", área_2);
    printf("PIB: %.2f bilhões de reais\n", pib_2);
    printf("Número de pontos turísticos: %d\n", turismo_2);

    return(0);

}