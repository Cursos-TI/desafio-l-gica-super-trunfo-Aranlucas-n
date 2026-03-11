#include <stdio.h>


int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
   
//carta1
    char estado1[10], codigo1[10], cidade1[50];
    int populacao1, turismo1;
    float area1, pib1, densidade1;
// carta2
    char estado2[10], codigo2[10], cidade2[50];
    int populacao2, turismo2;
    float area2, pib2, densidade2; 

//Definição de variavel para o menu interativo e resultado
    int opcao1, opcao2, resultado;

// Variavel para soma dos atributos
    float carta1valor1, carta1valor2, soma1, soma2;
    float carta2valor1, carta2valor2; 
// Variavel para armazenar o nome do atributo  
    char *nomeatributo1; 
    char *nomeatributo2;      

    // Cadastro das Cartas:
   
    printf("### Cadastro de Cartas Super Trunfo ###\n");

    // Entrada de dados carta 1
    printf("\n ###Cadastro da carta 1 ###\n");
    printf("\nIniciais do estado (ex:SP):");
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

    // Entrada de de dados carta 2
    printf("\n### Cadastro da carta 2 ###\n");
    printf("\nIniciais do estado (ex:SP):");
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
  // Definido de forma explicita a variavel população para não ocorrer perda de dados

    densidade1 = (float)populacao1 / area1;  
    densidade2 = (float)populacao2 / area2;
    
     
    // Menu interativo com switch
    // Primeiro atributo
    printf("\n### Escolha 2 atributos diferentes para comparação! ###\n");
    printf("\n### Selecione o primeiro atributo de (1 a 5) para comparação das cartas! ###\n");
    printf("1. Comparar população!\n"); 
    printf("2. Comparar Área!\n");
    printf("3. Comparar PIB!\n");
    printf("4. Comparar Pontos turísticos!\n");
    printf("5. Comparar Densidade demografica\n");
    printf("Opção:");
    scanf("%d", &opcao1);

    //Segundo atributo. Incluido o operador != diferente de, para não repetir a opção
    printf("\n \n### Selecione o segundo atributo diferente do primeiro! ###\n");
    if(opcao1 != 1)
    printf("1. Comparar população!\n");
    if(opcao1 != 2)
    printf("2. Comparar Área!\n");
    if(opcao1 != 3)
    printf("3. Comparar PIB!\n");
    if(opcao1 != 4)
    printf("4. Comparar Pontos turísticos!\n");
    if(opcao1 != 5)
    printf("5. Comparar Densidade demografica\n");
      
    printf("Opção:");
    scanf("%d", &opcao2);

    //Impedir escolha do mesmo atributo

    if (opcao1 == opcao2){
         printf("\n### Não é permitido escolher o mesmo atributo! ###\n");

         return 0;
    }

    //Armazenar valor do primeiro atributo
    switch (opcao1)
    {    
    case 1:
    carta1valor1 = populacao1;
    carta2valor1 = populacao2;
    nomeatributo1 = "População";
    
    break;
    case 2:
    carta1valor1 = area1;
    carta2valor1 = area2;
    nomeatributo1 = "Área";

    break;
    case 3:
    carta1valor1 = pib1;
    carta2valor1 = pib2;
    nomeatributo1 = "Pib";
    
    break;
    case 4:
    carta1valor1 = turismo1;
    carta2valor1 = turismo2;
    nomeatributo1 = "Pontos Turísticos";

    break;
    case 5:
    carta1valor1 = 1 / densidade1;
    carta2valor1 = 1 / densidade2;
    nomeatributo1 = "Densidade Demografica";

    break;
  
    default:
    printf("### Opção inválida! ###\n\n");
    break;
    }

    //Armazenar valor do Segundo atributo
    switch (opcao2)
    {    
    case 1:
    carta1valor2 = populacao1;
    carta2valor2 = populacao2;
    nomeatributo2 = "População";
    
    break;
    case 2:
    carta1valor2 = area1;
    carta2valor2 = area2;
    nomeatributo2 = "Área";

    break;
    case 3:
    carta1valor2 = pib1;
    carta2valor2 = pib2;
    nomeatributo2 = "Pib";
    
    break;
    case 4:
    carta1valor2 = turismo1;
    carta2valor2 = turismo2;
    nomeatributo2 = "Pontos Turísticos";

    break;
    case 5:
    carta1valor2 = 1 / densidade1;
    carta2valor2 = 1 / densidade2;
    nomeatributo2 = "Densidade Demografica";

    break;
  
    default:
    printf("### Opção inválida! ###\n\n");
    break;
    }

    //soma dos atributos
    soma1 = carta1valor1 + carta1valor2;
    soma2 = carta2valor1 + carta2valor2;

     //Resultado da comparação
    printf("\n### Resultado da comparação! ###\n");
    printf("Nome das cidades %s e %s \n", cidade1, cidade2);
    printf("Nomes dos atributos: %s e %s\n", nomeatributo1, nomeatributo2);
    printf("Atributos carta 1: %.2f e %.2f\n", carta1valor1, carta1valor2);
    printf("Atributos carta 2: %.2f e %.2f\n", carta2valor1, carta2valor2);
    printf("Soma dos atributos da carta 1: %.2f\n", soma1);
    printf("Soma dos atributos da carta 2: %.2f\n", soma2);
    // Inclui um if para caso escolha a opção densidade demográfica, mostra o valor antes da
    // inversão (1 / densidade)
    if((opcao1 == 5) || (opcao2 == 5)){
        printf("Densidade Demográfica antes da inversão do valor carta 1: %.2f\n", densidade1);
        printf("Densidade Demográfica antes da inversão do valor carta 2: %.2f\n", densidade2);
    } 
    
    //Comparação utilizando operador ternario e if else encadeado
    resultado = (soma1 > soma2) ? 1 : (soma2 > soma1) ? 2 : 0;

    if(resultado == 1){
        printf("\n### Carta 1 cidade: %s Venceu! ###\n\n", cidade1);
    }else if(resultado == 2){
        printf("\n### Carta 2 cidade: %s Venceu! ###\n\n", cidade2);
    }else{
        printf("\n### Empate! ###\n\n");
    }
    


    return 0;
}
