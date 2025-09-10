#include <stdio.h>
#include <string.h>

// Definição da struct Carta com os atributos necessários.
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
    struct Carta carta1;
    struct Carta carta2;
    char buffer[100]; 

    // --- CADASTRO E CÁLCULO DA CARTA 1 ---
    printf("--- Cadastro da Carta 1 ---\n");
    
    printf("Digite a letra do Estado (A-H): ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%c", &carta1.estado);

    printf("Digite o Codigo da Carta (ex: A01): ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%s", carta1.codigo);

    printf("Digite o Nome da Cidade: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%[^\n]", carta1.nome_cidade);

    printf("Digite a Populacao: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &carta1.populacao);

    printf("Digite a Area (em km²): ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%f", &carta1.area);

    printf("Digite o PIB (em bilhoes de reais): ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%f", &carta1.pib);

    printf("Digite o Numero de Pontos Turisticos: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &carta1.num_pontos_turisticos);
    
    // --- CADASTRO E CÁLCULO DA CARTA 2 ---
    printf("\n--- Cadastro da Carta 2 ---\n");

    printf("Digite a letra do Estado (A-H): ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%c", &carta2.estado);

    printf("Digite o Codigo da Carta (ex: B02): ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%s", carta2.codigo);

    printf("Digite o Nome da Cidade: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%[^\n]", carta2.nome_cidade);

    printf("Digite a Populacao: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &carta2.populacao);

    printf("Digite a Area (em km²): ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%f", &carta2.area);

    printf("Digite o PIB (em bilhoes de reais): ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%f", &carta2.pib);

    printf("Digite o Numero de Pontos Turisticos: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &carta2.num_pontos_turisticos);
    
    // --- EXIBIÇÃO E CÁLCULOS FINAIS ---
    printf("\n==================================\n");
    printf("--- Informacoes das Cartas ---\n");

    // Cálculo para a Carta 1
    float densidade1 = (float)carta1.populacao / carta1.area;
    float pib_per_capita1 = carta1.pib / (float)carta1.populacao; // Converte para float antes da divisão
    
    // O uso de (float) antes de carta1.populacao é um cast explícito. Isso garante que a divisão seja realizada com números de ponto flutuante, produzindo um resultado mais preciso. Embora o C já faça isso implicitamente por causa do carta1.area que é float, a explicitação melhora a clareza do código.

    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nome_cidade);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhoes de reais\n", carta1.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta1.num_pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1 * 1000000000); 
    
    // Cálculo para a Carta 2
    float densidade2 = (float)carta2.populacao / carta2.area;
    float pib_per_capita2 = carta2.pib / (float)carta2.populacao;
    
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nome_cidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhoes de reais\n", carta2.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta2.num_pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2 * 1000000000);
    
    printf("\n==================================\n");

    return 0;
}