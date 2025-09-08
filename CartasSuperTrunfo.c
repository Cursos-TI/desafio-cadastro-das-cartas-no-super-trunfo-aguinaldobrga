#include <stdio.h>
#include <string.h>

// Definição da struct Carta com todos os atributos necessários.
// Usei nomes de variáveis claras para facilitar a leitura.
struct Carta {
    char estado;
    char codigo[5]; 
    char nome_cidade[50];
    int populacao;
    float area;
    float pib;
    int num_pontos_turisticos;
};

int main() {
    // Duas variáveis do tipo Carta
    struct Carta carta1;
    struct Carta carta2;

    // --- CADASTRO DA CARTA 1 ---
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Digite a letra do Estado (A-H): ");
    scanf(" %c", &carta1.estado); 

    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", carta1.nome_cidade);

    printf("Digite a Populacao: ");
    scanf("%d", &carta1.populacao);

    printf("Digite a Area (em km²): ");
    scanf("%f", &carta1.area);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &carta1.pib);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &carta1.num_pontos_turisticos);

    printf("\n"); 

    // --- CADASTRO DA CARTA 2 ---
    // Repete o mesmo processo para a segunda carta
    printf("--- Cadastro da Carta 2 ---\n");
    printf("Digite a letra do Estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Digite o Codigo da Carta (ex: B02): ");
    scanf("%s", carta2.codigo);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", carta2.nome_cidade);

    printf("Digite a Populacao: ");
    scanf("%d", &carta2.populacao);

    printf("Digite a Area (em km²): ");
    scanf("%f", &carta2.area);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &carta2.pib);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &carta2.num_pontos_turisticos);
    
    // --- EXIBIÇÃO DAS CARTAS ---
    printf("\n==================================\n");
    printf("--- Informacoes das Cartas ---\n");

    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nome_cidade);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhoes de reais\n", carta1.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta1.num_pontos_turisticos);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nome_cidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhoes de reais\n", carta2.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta2.num_pontos_turisticos);
    printf("\n==================================\n");

    return 0;
}

