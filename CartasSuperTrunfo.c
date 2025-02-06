#include <stdio.h>
#include <string.h>


// eu nao tinha ctz se era pra usar somente printf e scanf, 
// mas somente com scanf eu nao conseguir fazer com que ele lesse uma string com espacos
// apos uma pesquisa de como usar o gets e como limpar o buffer para que ele rodasse corretamente
// cheguei a esse resultado:


void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    char nomecidade[50];
    int habitantes;
    float area;
    float pib;
    int pontos;

    printf("Digite o nome da cidade: ");
    fgets(nomecidade, sizeof(nomecidade), stdin);


    if (nomecidade[strlen(nomecidade) - 1] == '\n') {
        nomecidade[strlen(nomecidade) - 1] = '\0';
    }

  
    printf("Digite o número de habitantes: ");
    scanf("%d", &habitantes);
    limparBuffer();

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area);
    limparBuffer(); 

    printf("Digite o PIB da cidade (em R$): ");
    scanf("%f", &pib);
    limparBuffer();

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos);
    limparBuffer(); 

    printf("\nInformações da cidade:\n");
    printf("Nome da cidade: %s\n", nomecidade);
    printf("Número de habitantes: %d\n", habitantes);
    printf("Área da cidade: %.2f km²\n", area);
    printf("PIB da cidade: R$ %.2f\n", pib);
    printf("Número de pontos turísticos: %d\n", pontos);

    return 0;
}
