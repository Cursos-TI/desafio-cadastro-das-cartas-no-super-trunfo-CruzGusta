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
    char estadoA, estadoB;
    char codigoA [5], codigoB [5];
    char nomeCidA [30], nomeCidB [30];
    int PturisticosA, PturisticosB, resultado;
    float areaKmA, areaKmB, pibA, pibB, densiPopA, densiPopB, PIBca, PIBcb, densiPopREa, densiPopREb;
    unsigned long int populacaoA, populacaoB; // uso de unsigned para grandes numeros

    // perguntas para cadastro carta 1
    printf("--cadastro da carta A-- \n");
    printf(" Estado : \n");
    scanf(" %c", &estadoA );

    printf("Código da carta : \n");
    scanf(" %s", codigoA);

    printf("Nome da cidade : \n");
    scanf(" %s", nomeCidA);

    printf("População : \n");
    scanf("%lu", &populacaoA);

    printf("Área em km² : \n");
    scanf("%f",&areaKmA );

    printf("PIB : \n");
    scanf("%f",&pibA );

    printf("Pontos turisticos : \n");
    scanf("%d", &PturisticosA);

    densiPopA = populacaoA/areaKmA; // calculo da densidade ppulacional
    PIBca = (float) pibA/populacaoA; // calculo do PIB per capita com casting
    densiPopREa = (float) areaKmA/populacaoA; // densidade populaconal reverso
    float SuperPoderA = (float) populacaoA + areaKmA + pibA + PturisticosA + PIBca + densiPopREa;

    getchar();
//carta 2
       // perguntas para cadastro
    printf("--cadastro da carta B-- \n");
    printf("Estado : \n"); 
    scanf(" %c", &estadoB );

    printf("Código da carta : \n");
    scanf(" %s", &codigoB);

    printf("Nome da cidade : \n");
    scanf(" %s", &nomeCidB);

    printf("População : \n");
    scanf("%lu", &populacaoB);

    printf("Área em km² : \n");
    scanf("%f",&areaKmB );

    printf("PIB : \n");
    scanf("%f",&pibB );


    printf("Pontos turisticos : \n");
    scanf("%d", &PturisticosB);

    densiPopB = populacaoB/areaKmB;
    PIBcb = (float) pibB/populacaoB;
    densiPopREb = (float) areaKmB/populacaoB; // densidade populaconal reverso
    float SuperPoderB = (float) populacaoB+ areaKmB + pibB + PturisticosB + PIBcb + densiPopB;

    
// print dos resultados da carta A
   printf("     \n"); // espaço de linha ra estética
   printf("**carta A** \n");
   printf("Estado : %c \n Código da carta : %s \n", estadoA, codigoA);
   printf("Nome da cidade : %s \n População : %lu \n",nomeCidA, populacaoA );
   printf("Àrea : %.2f km² \n PIB : %.2f \n", areaKmA, pibA);
   printf("Pontos turisticos : %d \n", PturisticosA);
   printf("Densidade populacional : %.2f \n", densiPopA);
   printf("PIB per capita : %.2f \n", PIBca);
   printf("Super poder : %.2f \n", SuperPoderA);

// print dos resultados da carta B
   printf("     \n"); // espaço de linha ra estética
   printf("**carta B** \n");
   printf("Estado : %c \n Código da carta : %s \n", estadoB, codigoB);
   printf("Nome da cidade : %s \n População : %lu \n",nomeCidB, populacaoB );
   printf("Àrea : %.2f km² \n PIB : %.2f \n", areaKmB, pibB);
   printf("Pontos turisticos : %d \n", PturisticosB);
   printf("Densidade populacional : %.2f \n", densiPopB);
   printf("PIB per capita : %.2f \n", PIBcb);
   printf("Super poder : %.2f\n", SuperPoderB);


// comparações das cartas
   printf("     \n"); // espaço de linha ra estética
   printf("População: %d\n", populacaoA > populacaoB);
   printf("Área: %d\n", areaKmA > areaKmB);
   printf("PIB: %d\n", pibA > pibB);
   printf("Pontos turisticos: %d\n", PturisticosA > PturisticosB);
   printf("Densidade Populacional: %d\n", densiPopA < densiPopB);
   printf("PIB per Capita: %d\n", PIBca > PIBcb);
   printf("Super Poder: %d\n", SuperPoderA > SuperPoderB);


    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
