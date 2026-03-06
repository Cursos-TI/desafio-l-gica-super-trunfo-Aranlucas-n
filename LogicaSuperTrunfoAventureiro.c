#include <stdio.h>


int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
   
//carta1
    char estado1[10], codigo1[10], cidade1[50];
    int populacao1, turismo1;
    float area1, pib1, densidade1, pibpercapita1;
// carta2
    char estado2[10], codigo2[10], cidade2[50];
    int populacao2, turismo2;
    float area2, pib2, densidade2, pibpercapita2;

//Definição de variavel para o menu interativo
    int opcao;

    // Cadastro das Cartas:
   
    printf("### Cadastro de Cartas Super Trunfo ###\n");

    // Entradade de dados carta 1
    printf("\n ###Cadastro da carta 1 ###\n");
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
    printf("\n### Cadastro da carta 2 ###\n");
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


    // Menu interativo com switch
    printf("\n \n### Selecione uma das opções (1 a 5) para comparação das cartas ###\n");
    printf("1. Comparar população!\n"); 
    printf("2. Comparar Área!\n");
    printf("3. Comparar PIB!\n");
    printf("4. Comparar Pontos turísticos!\n");
    printf("5 .Comparar Densidade demografica\n");
    printf("Opção:");
    scanf("%d", &opcao);

    //comparação das cartas com switch e if else 
    switch (opcao)
    {    
    case 1:
    printf("\nComparação utilizando População!\n");
    printf("\nNome das cidades:%s e %s\nAtributo População\n%s Possui %d Habitantes\n%s Possui %d Habitantes\n"
            , cidade1, cidade2, cidade1, populacao1, cidade2, populacao2);
    if (populacao1 == populacao2) 
        {
            printf("### As cartas empataram! ###\n\n\n");
    }else if(populacao1 > populacao2){
            printf("### A carta 1 %s venceu! ###\n\n\n", cidade1);
    }else{
            printf("### A carta 2 %s venceu! ###\n\n\n", cidade2);
        }
        
    break;
    case 2:
    printf("\nComparação utilizando Área!\n");
    printf("\nNome das cidades:%s e %s\nAtributo Área\n%s Possui Área de %.2fkm²\n%s Possui Área de %.2fkm²\n"
            , cidade1, cidade2, cidade1, area1, cidade2, area2);
    if (area1 == area2) 
        {
            printf("### As cartas empataram! ###\n\n\n");
    }else if(area1 > area2){
            printf("### A carta 1 %s venceu! ###\n\n\n", cidade1);
    }else{
            printf("### A carta 2 %s venceu! ###\n\n\n", cidade2);
        }
        
    break;
    //caso 3
    case 3:
    printf("\nComparação utilizando Pib!\n");
    printf("\nNome das cidades:%s e %s\nAtributo Pib\n%s Possui Pib de %.2f Bilhões\n%s Possui Pib de %.2f Bilhões\n"
            , cidade1, cidade2, cidade1, pib1, cidade2, pib2);
    if (pib1 == pib2) 
        {
            printf("### As cartas empataram! ###\n\n\n");
    }else if(pib1 > pib2){
            printf("### A carta 1 %s venceu! ###\n\n\n", cidade1);
    }else{
            printf("### A carta 2 %s venceu! ###\n\n\n", cidade2);
        }
        
    break;
    case 4:
    printf("\nComparação utilizando Pontos Turísticos!\n");
    printf("\nNome das cidades:%s e %s\nAtributo Pontos Turísticos\n%s Possui %d Pontos Turísticos \n%s Possui %d Pontos Turísticos\n"
            , cidade1, cidade2, cidade1, turismo1, cidade2, turismo2);
    if (turismo1 == turismo2) 
        {
            printf("### As cartas empataram! ###\n\n\n");
    }else if(turismo1 > turismo2){
            printf("### A carta 1 %s venceu! ###\n\n\n", cidade1);
    }else{
            printf("### A carta 2 %s venceu! ###\n\n\n", cidade2);
        }
        
    break;
    case 5:
    printf("\nComparação utilizando Densidade Demográfica!\n");
    printf("\nVence quem possuir a menor Densidade Demográfica\n");
    printf("\nNome das cidades:%s e %s\nAtributo Densidade Demográfica\n%s Possui Densidade Demográfica de %.2f hab/km²\n%s Possui Densidade Demográfica de %.2f hab/km²\n"
            , cidade1, cidade2, cidade1, densidade1, cidade2, densidade2);
    if (densidade1 == densidade2) 
        {
            printf("### As cartas empataram! ###\n\n\n");
    }else if(densidade1 < densidade2){
            printf("### A carta 1 %s venceu! ###\n\n\n", cidade1);
    }else{
            printf("### A carta 2 %s venceu! ###\n\n\n", cidade2);
        }
        
    break;
    
    default:
    printf("### Opção invalida! ###\n\n");
        break;
    }


    return 0;
}
