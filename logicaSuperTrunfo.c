#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
//carta1
    char estado1[10], codigo1[10], cidade1[50];
    int populacao1, turismo1;
    float area1, pib1, densidade1, pibpercapita1;
// carta2
    char estado2[10], codigo2[10], cidade2[50];
    int populacao2, turismo2;
    float area2, pib2, densidade2, pibpercapita2;
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
    printf("**Cadastro de Cartas Super Trunfo**");

    // Entradade de dados carta 1
    printf("\nCadastro da carta 1 \n");
    printf("\nInicias do estado (ex:SP):");
    scanf(" %s", estado1);
    printf("Código da carta de 01 a 04 (ex:A01, B03):");
    scanf(" %s", codigo1);
    printf("Nome da cidade:");
    scanf(" %s", cidade1);
    printf("População:");
    scanf(" %d", &populacao1);
    printf("Área em km²:");
    scanf(" %f", &area1);
    printf("Pib (Em bilhões de reais):");
    scanf(" %f", &pib1);
    printf("Número de Pontos Turísticos:");
    scanf(" %d", &turismo1);

    // Entradade de dados carta 2
    printf("\nCadastro da carta 2\n");
    printf("\nInicias do estado (ex:SP):");
    scanf(" %s", estado2);
    printf("Código da carta de 01 a 04 (ex:A01, B03):");
    scanf(" %s", codigo2);
    printf("Nome da cidade:");
    scanf(" %s", cidade2);
    printf("População:");
    scanf(" %d", &populacao2);
    printf("Área em km²:");
    scanf(" %f", &area2);
    printf("Pib (Em bilhões de reais):");
    scanf(" %f", &pib2);
    printf("Número de Pontos Turísticos:");
    scanf(" %d", &turismo2);    

  // Abaixo foi feita as operações matemáticas
  // Multiplicado por 1 bilhão para facilitar no calculo e na leitura das cartas.
  // Definido de forma explicita a variavel população para não ocrorrer perda de dados

    densidade1 = (float)populacao1 / area1; 
    pibpercapita1 = (pib1 * 1000000000) / (float)populacao1; 

    densidade2 = (float)populacao2 / area2; 
    pibpercapita2 = (pib2 * 1000000000) / (float)populacao2; 

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    
    printf("\nCarta vencedora com base na densidade populacional\n");
    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

     // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
    
    printf("\nCarta 1 - %s (%s): %.2f \n", cidade1, estado1, densidade1);
    printf("Carta 2 - %s (%s): %.2f \n", cidade2, estado2, densidade2);
    if(densidade1 < densidade2){
        printf("Resultado Carta 1 (%s) Venceu!", cidade1);
    }
    else{
        printf("Resultado carta 2 (%s) Venceu!\n", cidade2);
    }
   

    return 0;
}
