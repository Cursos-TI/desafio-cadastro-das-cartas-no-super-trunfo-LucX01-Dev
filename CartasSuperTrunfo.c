#include <stdio.h>

int main (){
/*Declaração da variáveis*/
char Estado_01, Estado_02;
char Codigo_carta01[10], Codigo_carta02[10], Cidade01[15], Cidade02[15];
int Populacao01, Populacao02, Turistico01, Turistico02;
float Area01, Area02, Pib01, Pib02;
/*Fim da declaração das variáveis*/

/*Inicio da entrada de dados para a primeira carta*/

printf("Bem vindo! Vamos iniciar adicionando os dados correspondentes a primeira carta do SuperTrunfo.\n");

printf("Digite uma letra de 'A' a 'H' correspondendo ao estado solicitado: \n");
scanf("%s", &Estado_01);

printf("Agora digite um número de 01 a 04 para adicionar a sua carta: \n");
scanf("%s", Codigo_carta01);

printf("Digite o nome da cidade a qual quer adicionar a sua carta: \n");
scanf("%s", &Cidade01);

printf("Informe a quantidade da população da cidade: \n");
scanf("%d", &Populacao01);

printf("Informe a Àrea da cidade (não é necessário adicionar 'Km²'): \n");
scanf("%f", &Area01);

printf("Digite o PIB da cidade: \n");
scanf("%f", &Pib01);

printf("Por último, informe a quantidade de pontos turísticos: \n");
scanf("%d", &Turistico01);

/*Fim da entrada de dados para a primeira carta*/

/*Inicio da saída de dados para a primeira carta*/

printf("Cidade 1:\n");
printf("Estado: %s\n", Estado_01);
printf("Código: %s\n", Codigo_carta01);
printf("Nome da Cidade: %s\n", Cidade01);
printf("Popualação: %d\n", Populacao01);
printf("Área: %f\n", Area01);
printf("PIB: %f\n", Pib01);
printf("Número de Pontos Turísticos: %d\n", Turistico01);

return 0;
}
