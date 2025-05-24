#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Gustavo Cruz.
//carta 1
int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // variaveis
    char estado;
    char codigo [5];
    char nomeCid [30];
    int populacao, Pturisticos;
    float areaKm, pib;

    // perguntas para cadastro
    printf(" Estado : \n");
    scanf("%c", &estado );

    printf("Código da carta : \n");
    scanf(" %s", codigo);

    printf("Nome da cidade : \n");
    scanf(" %s", nomeCid);

    printf("População : \n");
    scanf("%d", &populacao);

    printf("Área em km : \n");
    scanf("%f",&areaKm );

    printf("PIB : \n");
    scanf("%f",&pib );


    printf("Pontos turisticos : \n");
    scanf("%d", &Pturisticos);


// print dos resultados

   printf("Estado : %c \n Código da carta : %s \n", estado, codigo);
   printf("Nome da cidade : %s \n População : %d \n",nomeCid, populacao );
   printf("Àrea : %.2f km \n PIB : %.2f \n", areaKm, pib);
   printf("Pontos turisticos : %d \n", Pturisticos);
   getchar();


//carta 2
       // perguntas para cadastro
    printf("Estado : \n"); 
    scanf("%c", &estado );

    printf("Código da carta : \n");
    scanf(" %s", &codigo);

    printf("Nome da cidade : \n");
    scanf(" %s", &nomeCid);

    printf("População : \n");
    scanf("%d", &populacao);

    printf("Área em km : \n");
    scanf("%f",&areaKm );

    printf("PIB : \n");
    scanf("%f",&pib );


    printf("Pontos turisticos : \n");
    scanf("%d", &Pturisticos);


// print dos resultados

   printf("Estado : %c \n Código da carta : %s \n", estado, codigo);
   printf("Nome da cidade : %s \n População : %d \n",nomeCid, populacao );
   printf("Àrea : %.2f km \n PIB : %.2f \n", areaKm, pib);
   printf("Pontos turisticos : %d \n", Pturisticos);


    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
