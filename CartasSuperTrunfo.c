#include <stdio.h>



int main() {

    char nome[20];
    int populacao;
    float area;
    float pib;
    int pontos;

    printf("=== Bem vindo ao super trunfo - paises ===\n\n");
    printf("No jogo Super Trunfo, os jogadores comparam as propriedades das cartas para determinar a mais forte.\n\n");

   
    
   
    //Solicitando nome da cidade

    printf("Digite o nome da cidade:\n");
    scanf("%s" , &nome);


    //Solicitando o restante dos atributos
    printf("População:\n");
    scanf("%d" , &populacao);

    printf("Área (em km²):\n");
    scanf("%f" , &area);

    printf("Pib (em milhões):\n");
    scanf("%f" , &pib);

    printf("Números de pontos turisticos:\n");
    scanf("%d" , &pontos);
    
// saida de dados
    printf("Nome: %s\n" , nome);
    printf("População: %d\n" , populacao);
    printf("Área: %f\n" , area);
    printf("Pib: %f\n" , pib);
    printf("Pontos turistico: %d\n" , pontos);

    return 0;


    




    
 
    
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
