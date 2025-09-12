#include <stdio.h>
#include <string.h>

// Definição da struct Carta, agora com 'populacao' como unsigned long int
struct Carta {
    char estado;
    char codigo[5];
    char nome_cidade[50];
    unsigned long int populacao;
    float area;
    float pib;
    int num_pontos_turisticos;
};

int main() {
    struct Carta carta1, carta2;
    char buffer[100];

    // --- CADASTRO DA CARTA 1 ---
    printf("--- Cadastro da Carta 1 ---\n");
    
    printf("Digite a letra do Estado (A-H): ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, " %c", &carta1.estado);

    printf("Digite o Codigo da Carta (ex: A01): ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%s", carta1.codigo);

    printf("Digite o Nome da Cidade: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, " %[^\n]", carta1.nome_cidade);

    printf("Digite a Populacao: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%lu", &carta1.populacao);

    printf("Digite a Area (em km²): ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%f", &carta1.area);

    printf("Digite o PIB (em bilhoes de reais): ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%f", &carta1.pib);

    printf("Digite o Numero de Pontos Turisticos: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &carta1.num_pontos_turisticos);

    // --- CADASTRO DA CARTA 2 ---
    printf("\n--- Cadastro da Carta 2 ---\n");

    printf("Digite a letra do Estado (A-H): ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, " %c", &carta2.estado);

    printf("Digite o Codigo da Carta (ex: B02): ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%s", carta2.codigo);

    printf("Digite o Nome da Cidade: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, " %[^\n]", carta2.nome_cidade);

    printf("Digite a Populacao: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%lu", &carta2.populacao);

    printf("Digite a Area (em km²): ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%f", &carta2.area);

    printf("Digite o PIB (em bilhoes de reais): ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%f", &carta2.pib);

    printf("Digite o Numero de Pontos Turisticos: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &carta2.num_pontos_turisticos);

    // --- CÁLCULOS PARA AS DUAS CARTAS ---
    float densidade1 = (float)carta1.populacao / carta1.area;
    float pib_per_capita1 = carta1.pib / (float)carta1.populacao;
    float super_poder1 = (float)carta1.populacao + carta1.area + carta1.pib + 
                         (float)carta1.num_pontos_turisticos + pib_per_capita1 + 
                         (1.0f / densidade1);

    float densidade2 = (float)carta2.populacao / carta2.area;
    float pib_per_capita2 = carta2.pib / (float)carta2.populacao;
    float super_poder2 = (float)carta2.populacao + carta2.area + carta2.pib +
                         (float)carta2.num_pontos_turisticos + pib_per_capita2 +
                         (1.0f / densidade2);

    // --- EXIBIÇÃO DAS CARTAS E RESULTADOS FINAIS ---
    printf("\n==================================\n");
    printf("--- Informacoes das Cartas ---\n");
    
    // Bloco de exibição da carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nome_cidade);
    printf("Populacao: %lu\n", carta1.populacao);
    printf("Area: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhoes de reais\n", carta1.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta1.num_pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1 * 1000000000);
    printf("Super Poder: %.2f\n", super_poder1);

    // Bloco de exibição da carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nome_cidade);
    printf("Populacao: %lu\n", carta2.populacao);
    printf("Area: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhoes de reais\n", carta2.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta2.num_pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2 * 1000000000);
    printf("Super Poder: %.2f\n", super_poder2);

    // --- COMPARAÇÃO DAS CARTAS ---
    printf("\n==================================\n");
    printf("--- Comparacao de Cartas ---\n");
    
    printf("Populacao: Carta %d venceu (%d)\n", (carta1.populacao > carta2.populacao) ? 1 : 2, (carta1.populacao > carta2.populacao));
    printf("Area: Carta %d venceu (%d)\n", (carta1.area > carta2.area) ? 1 : 2, (carta1.area > carta2.area));
    printf("PIB: Carta %d venceu (%d)\n", (carta1.pib > carta2.pib) ? 1 : 2, (carta1.pib > carta2.pib));
    

    printf("Pontos Turisticos: Carta %d venceu (%d)\n", (carta1.num_pontos_turisticos > carta2.num_pontos_turisticos) ? 1 : 2, (carta1.num_pontos_turisticos > carta2.num_pontos_turisticos));
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade1 < densidade2) ? 1 : 2, (densidade1 < densidade2));
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pib_per_capita1 > pib_per_capita2) ? 1 : 2, (pib_per_capita1 > pib_per_capita2));
    printf("Super Poder: Carta %d venceu (%d)\n", (super_poder1 > super_poder2) ? 1 : 2, (super_poder1 > super_poder2));

    printf("\n==================================\n");

    return 0;
}