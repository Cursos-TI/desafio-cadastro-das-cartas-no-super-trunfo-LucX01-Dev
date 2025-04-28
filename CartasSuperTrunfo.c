#include <stdio.h>

int main (){
/* Declaração das variáveis */
    char Estado_01, Estado_02;
    char Codigo_carta01[10], Codigo_carta02[10], Cidade01[50], Cidade02[50];
    char Estado_codigo01[15], Estado_codigo02[15];
    int Populacao01, Populacao02, Turistico01, Turistico02;
    float Area01, Area02, Pib01, Pib02;

/* Início da entrada de dados para a primeira carta */

    printf("Bem vindo! Vamos iniciar adicionando os dados correspondentes à primeira carta do SuperTrunfo.\n\n");

    printf("Digite uma letra de 'A' a 'H' correspondendo ao estado solicitado: \n");
    scanf(" %c", &Estado_01);

    printf("Agora digite um número de 01 a 04 para adicionar à sua carta: \n");
    scanf("%s", Codigo_carta01);

    printf("Digite o nome da cidade que quer adicionar à sua carta: \n");
    scanf(" %[^\n]", Cidade01);

    printf("Informe a quantidade da população da cidade: \n");
    scanf("%d", &Populacao01);

    printf("Informe a área da cidade (não é necessário adicionar 'Km²'): \n");
    scanf("%f", &Area01);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &Pib01);

    printf("Por último, informe a quantidade de pontos turísticos: \n");
    scanf("%d", &Turistico01);

/* Criando a string Estado + Código */
    sprintf(Estado_codigo01, "%c%s", Estado_01, Codigo_carta01);

/* Fim da entrada de dados para a primeira carta */

/* Início da entrada de dados para a segunda carta */

      printf("\n Ótimo! Finalizamos a adição de dados da primera carta. Agora vamos adicionando os dados correspondentes à segunda carta do SuperTrunfo.\n\n");

    printf("Digite uma letra de 'A' a 'H' correspondendo ao estado solicitado: \n");
    scanf(" %c", &Estado_02);

    printf("Agora digite um número de 01 a 04 para adicionar à sua carta: \n");
    scanf("%s", Codigo_carta02);

    printf("Digite o nome da cidade que quer adicionar à sua carta: \n");
    scanf(" %[^\n]", Cidade02);

    printf("Informe a quantidade da população da cidade: \n");
    scanf("%d", &Populacao02);

    printf("Informe a área da cidade (não é necessário adicionar 'Km²'): \n");
    scanf("%f", &Area02);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &Pib02);

    printf("Por último, informe a quantidade de pontos turísticos: \n");
    scanf("%d", &Turistico02);

/* Criando a string Estado + Código */
    sprintf(Estado_codigo02, "%c%s", Estado_02, Codigo_carta02);

/* Fim da entrada de dados para a segunda carta */

/* Início da saída de dados para a primeira carta */
    printf("\n Carta 01: \n");
    printf("Estado: %c\n", Estado_01);
    printf("Código: %s\n", Estado_codigo01);
    printf("Nome da Cidade: %s\n", Cidade01);
    printf("População: %d habitantes\n", Populacao01);
    printf("Área: %.2f km²\n", Area01);
    printf("PIB: %.2f bilhões de reais\n", Pib01);
    printf("Número de Pontos Turísticos: %d\n", Turistico01);

/* Fim da saída de dados para a primeira carta */

/* Início da saída de dados para a segunda carta */
printf("\n Carta 02: \n");
printf("Estado: %c\n", Estado_02);
printf("Código: %s\n", Estado_codigo02);
printf("Nome da Cidade: %s\n", Cidade02);
printf("População: %d habitantes\n", Populacao02);
printf("Área: %.2f km²\n", Area02);
printf("PIB: %.2f bilhões de reais\n", Pib02);
printf("Número de Pontos Turísticos: %d\n", Turistico02);

/* Fim da saída de dados para a segunda carta */
    return 0;
}