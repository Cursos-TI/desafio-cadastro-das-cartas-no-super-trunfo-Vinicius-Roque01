#include <stdio.h>

int main() {
    // Variáveis da carta 1
    char estado1[4]; 
    char codigo1[10]; 
    char cidade1[100];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    // Variáveis da carta 2
    char estado2[4];
    char codigo2[10];
    char cidade2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    // Entrada de dados da carta 1
    printf("Estado 1 (ex: RJ): ");
    scanf("%3s", estado1);  // Lê até 3 caracteres (ex: "RJ")

    printf("Código 1 (ex: 001): ");
    scanf("%9s", codigo1);  // Lê até 9 caracteres

    printf("Cidade 1: ");
    scanf(" %[^\n]s", cidade1); 

    printf("População 1: ");
    scanf("%d", &populacao1);

    printf("Área 1 (km²): ");
    scanf("%f", &area1);

    printf("PIB 1 (bilhões): ");
    scanf("%f", &pib1);

    printf("Pontos turísticos 1: ");
    scanf("%d", &pontos_turisticos1);

    getchar(); 

    // Entrada de dados da carta 2
    printf("\nEstado 2 (ex: SP): ");
    scanf("%3s", estado2);

    printf("Código 2 (ex: 002): ");
    scanf("%9s", codigo2);

    printf("Cidade 2: ");
    scanf(" %[^\n]s", cidade2);

    printf("População 2: ");
    scanf("%d", &populacao2);

    printf("Área 2 (km²): ");
    scanf("%f", &area2);

    printf("PIB 2 (bilhões): ");
    scanf("%f", &pib2);

    printf("Pontos turísticos 2: ");
    scanf("%d", &pontos_turisticos2);

    // Exibição dos dados da carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);

    // Exibição dos dados da carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);

    return 0;
}
