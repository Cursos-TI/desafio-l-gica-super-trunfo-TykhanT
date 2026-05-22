#include <stdio.h>

// Desafio Super Trunfo - Cidades
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  //nome das cidades de 1 e 2 (cidades e codigos das cartas não pode conter espaços)
  char codigo1 [10], codigo2 [10];  //codigo das cartas não ler com &codigonum pois da erro usar sem o & para strings
  char cidade1 [20], cidade2 [20];  //nome das cidades 
  int populacao1, populacao2; //população com num inteiro
  unsigned int area1, area2; //area em km² // ler float usa se %f // ler double usa se %lf
  float pib1, pib2; //pib das cidades 
  float capta1, capta2; //pib per capta
  int pontotur1, pontotur2; //quantidade de pontos turisticos
  float densidade1, densidade2; //densidade populacional
  float superpoder1, superpoder2; //superpoder das cartas
  int resultadopop, resultadoarea, resultadopib, resultadopt, resultadosup, resultadopcpta, resultadoden; //resultado da comparação
  int escolhamenu;

  // Área para entrada de dados
  printf ("Este é um menu para cadastro das cartas do desafio Super Trunfo\n");
  printf ("Por favor siga as etapas à seguir para cadastrar até 2 cartas no sistema\n");


  printf ("Agora por favor digite o cadastro da cidade número 1: \n"); //iniciando cadastro da carta número 1
  printf ("Agora digite o código da carta (Utilize uma letra seguido de 3 números sem espaçamento): \n");
  scanf (" %s", codigo1);

  printf ("Agora digite o nome de uma cidade (sem espaço): \n");
  scanf (" %s", cidade1);

  printf ("Digite a população dessa cidade: \n");
  scanf (" %i", &populacao1);

  printf ("Digite agora a área (em Km²): \n");
  scanf (" %u", &area1);

  printf ("Digite agora o PIB da cidade cadastrada (em bi): \n");
  scanf (" %f", &pib1);

  printf ("Para finalizar digite agora a quantidade de pontos turísticos na cidade: \n");
  scanf (" %i", &pontotur1);

  printf ("------------------------------------------------------ \n");
  printf ("----------------------Concluído!---------------------- \n");
  printf ("------------------------------------------------------ \n");

  printf ("Agora por favor digite o cadastro da cidade número 2: \n"); //iniciando cadastro da carta número 2

  printf ("Agora digite o código da carta (Utilize uma letra seguido de 3 números sem espaçamento): \n");
  scanf (" %s", codigo2);

  printf ("Agora digite o nome de uma cidade (sem espaço): \n");
  scanf (" %s", cidade2);

  printf ("Digite a população dessa cidade: \n");
  scanf (" %i", &populacao2);

  printf ("Digite agora a área (em Km²): \n");
  scanf (" %u", &area2);

  printf ("Digite agora o PIB da cidade cadastrada (em bi): \n");
  scanf (" %f", &pib2);

  printf ("Para finalizar digite agora a quantidade de pontos turísticos na cidade: \n");
  scanf (" %i", &pontotur2);

  printf ("------------------------------------------------------ \n");
  printf ("----------------------Concluído!---------------------- \n");
  printf ("------------------------------------------------------ \n");

  // calcular pib per capta 1 e 2

  capta1 = pib1 / (float) populacao1; //como populacao1 náo é num float usa se o casting correto (float) antes da variavel
  capta2 = pib2 / (float) populacao2;

  //calcular densidade populacional 1 e 2

  densidade1 = (float) (populacao1 / area1);//pode se fazer o calculo utilizando qualquer uma das duas operações ao lado
  densidade2 = (float) populacao2 / (float) area2;

  //Calcular o superpoder

  superpoder1 = (float) (populacao1 + area1 + pib1 + pontotur1 + capta1);
  superpoder2 = (float) (populacao2 + area2 + pib2 + pontotur2 + capta2);

  //agora mostrar o resultado das cartas 1 e 2 corretamente com todas as informações registradas
  // Área para exibição dos dados da cidade

  /* ocultando menu anterior
  //exibindo cadastro da carta Nº 1

  printf ("Sua carta de número 1 é: \n");
  printf ("Código da carta: %s \n", codigo1);
  printf ("Cidade: %s \n", cidade1);
  printf ("Sua população é de: %i Habitantes \n", populacao1); //usa se %d ou %i para int ou %u para unsigned int
  printf ("Sua área é de: %u Km² \n",area1);
  printf ("O PIB é de: R$ %.2f bi\n", pib1);
  printf ("Na cidade de %s existem %i pontos turísticos \n", cidade1, pontotur1);
  printf ("------------------------------------------------------ \n");
  printf ("-----------------------Cálculos----------------------- \n");
  printf ("O PIB per capta de %s é de : %.10f \n",cidade1, capta1); //se der 0 é porque o valor necessita de mais casas decimais
  printf ("Densidade populacional de: %.2f Habitantes por Km²\n", densidade1);
  printf ("SUPERPODER da carta Nº 1 é: %.2f \n", superpoder1);
  printf ("------------------------------------------------------ \n");
  printf ("------------------------------------------------------ \n");

  //exibindo cadastro da carta Nº 2

  printf ("Sua carta de número 2 é: \n");
  printf ("Código da carta: %s \n", codigo2);
  printf ("Cidade: %s \n", cidade2);
  printf ("Sua população é de: %i Habitantes \n", populacao2);
  printf ("Sua área é de: %u Km² \n", area2);
  printf ("O PIB é de: R$ %.2f bi\n", pib2); 
  printf ("Na cidade de %s existem %i pontos turísticos \n", cidade2, pontotur2);
  printf ("------------------------------------------------------ \n");
  printf ("-----------------------Cálculos----------------------- \n");
  printf ("O PIB per capta de %s é de : %.10f \n",cidade2, capta2);
  printf ("Densidade populacional de: %.2f Habitantes por Km²\n", densidade2);
  printf ("SUPERPODER da carta Nº 2 é: %.2f \n", superpoder2);
  printf ("------------------------------------------------------ \n");
  printf ("------------------------------------------------------ \n");
  */
  
  /*
  //calculo do resultado
  resultadopop = populacao1 > populacao2;
  resultadoarea = area1 > area2;
  resultadopib = pib1 > pib2;
  resultadopcpta = capta1 > capta2;
  resultadopt = pontotur1 > pontotur2;
  resultadoden = densidade1 > densidade2;
  resultadosup = superpoder1 > superpoder2;
  */


  printf ("Agora escolha qual dos atributos você quer comparar? \n");
  printf ("1 - População \n");
  printf ("2 - Área \n");
  printf ("3 - PIB \n");
  printf ("4 - Pontos Turísticos \n");
  printf ("5 - PIB per capta \n");
  printf ("6 - Densidade Populacional \n");
  printf ("7 - Superpoder \n");
  scanf ("%d", &escolhamenu);

  switch (escolhamenu)
  {
    case 1: //população
    printf ("Você escolheu comparar a população \n");
    printf ("------------------------------------------------------ \n");
    printf ("Cidades utilizadas na comparação... \n");
    printf ("Cidade nº 1: %s, Cidade nº 2: %s \n", cidade1, cidade2);
    printf ("------------------------------------------------------ \n");
    printf ("valor de cada uma das populações: \n");
    printf ("Cidade: %s : População: %d \n", cidade1, populacao1);
    printf ("Cidade: %s : População: %d \n", cidade2, populacao2);
    if (populacao1 > populacao2) {
      printf ("População da cidade 1 ganhou!\n");
    } else if (populacao1 < populacao2){
      printf ("População da cidade 2 Ganhou!\n");
    } else printf (" Empate !!!\n");
    break;

    case 2: //area
    printf ("Você escolheu comparar a área \n");
    printf ("------------------------------------------------------ \n");
    printf ("Cidades utilizadas na comparação... \n");
    printf ("Cidade nº 1: %s, Cidade nº 2: %s \n", cidade1, cidade2);
    printf ("------------------------------------------------------ \n");
    printf ("valor de cada uma das áreas: \n");
    printf ("Cidade: %s : População: %d \n", cidade1, area1);
    printf ("Cidade: %s : População: %d \n", cidade2, area2);
    if (area1 > area2) {
      printf ("A Área da cidade 1 ganhou!\n");
    } else if (area1 < area2){
      printf ("A Área da cidade 2 Ganhou!\n");
    } else printf (" Empate !!!\n");
    break;

    case 3: //pib
    printf ("Você escolheu comparar o PIB \n");
    printf ("------------------------------------------------------ \n");
    printf ("Cidades utilizadas na comparação... \n");
    printf ("Cidade nº 1: %s, Cidade nº 2: %s \n", cidade1, cidade2);
    printf ("------------------------------------------------------ \n");
    printf ("valor de cada PIB: \n");
    printf ("Cidade: %s : PIB: %.2f \n", cidade1, pib1);
    printf ("Cidade: %s : PIB: %.2f \n", cidade2, pib2);
    if (pib1 > pib2) {
      printf ("O PIB da cidade 1 ganhou!\n");
    } else if (pib1 < pib2){
      printf ("O PIB da cidade 2 Ganhou!\n");
    } else printf (" Empate !!!\n");
    break;

    case 4: //pontos turisticos
    printf ("Você escolheu comparar a quantidade de pontos turísticos \n");
    printf ("------------------------------------------------------ \n");
    printf ("Cidades utilizadas na comparação... \n");
    printf ("Cidade nº 1: %s, Cidade nº 2: %s \n", cidade1, cidade2);
    printf ("------------------------------------------------------ \n");
    printf ("Quantidade de pontos turísticos: \n");
    printf ("Cidade: %s : Pontos turísticos: %d \n", cidade1, pontotur1);
    printf ("Cidade: %s : Pontos turísticos: %d \n", cidade2, pontotur2);
    if (pontotur1 > pontotur2) {
      printf ("A cidade 1 ganhou!\n");
    } else if (pontotur1 < pontotur2){
      printf ("A cidade 2 Ganhou!\n");
    } else printf (" Empate !!!\n");
    break;

    case 5: //pib percapta
    printf ("Você escolheu comparar o PIB per capta \n");
    printf ("------------------------------------------------------ \n");
    printf ("Cidades utilizadas na comparação... \n");
    printf ("Cidade nº 1: %s, Cidade nº 2: %s \n", cidade1, cidade2);
    printf ("------------------------------------------------------ \n");
    printf ("valor de cada um dos PIBs per capta: \n");
    printf ("Cidade: %s : PIB per capta: %.10f \n", cidade1, capta1);
    printf ("Cidade: %s : PIB per capta: %.10f \n", cidade2, capta2);
    if (capta1 > capta2) {
      printf ("O PIB per capta da cidade 1 ganhou!\n");
    } else if (capta1 < capta2){
      printf ("O PIB per capta da cidade 2 Ganhou!\n");
    } else printf (" Empate !!!\n");
    break;

    case 6: //densidade pop
    printf ("Você escolheu comparar a densidade demográfica (quanto menor o valor melhor) \n");
    printf ("------------------------------------------------------ \n");
    printf ("Cidades utilizadas na comparação... \n");
    printf ("Cidade nº 1: %s, Cidade nº 2: %s \n", cidade1, cidade2);
    printf ("------------------------------------------------------ \n");
    printf ("valor de cada uma das densidades: \n");
    printf ("Cidade: %s : Densidade demográfica: %.2f pessoas por km² \n", cidade1, densidade1);
    printf ("Cidade: %s : Densidade demográfica: %.2f pessoas por km² \n", cidade2, densidade2);
    if (densidade2 > densidade1) {
      printf ("Densidade demográfica da cidade 1 ganhou!\n");
    } else if (densidade2 < densidade1){
      printf ("Densidade demográfica da cidade 2 Ganhou!\n");
    } else printf (" Empate !!!\n");
    break;

    case 7: //superpoder
    printf ("Você escolheu comparar o valor de Superpoder \n");
    printf ("------------------------------------------------------ \n");
    printf ("Cidades utilizadas na comparação... \n");
    printf ("Cidade nº 1: %s, Cidade nº 2: %s \n", cidade1, cidade2);
    printf ("------------------------------------------------------ \n");
    printf ("valor de cada uma dos Superpoderes: \n");
    printf ("Cidade: %s : Superpoder: %.2f \n", cidade1, superpoder1);
    printf ("Cidade: %s : Superpoder: %.2f \n", cidade2, superpoder2);
    if (superpoder1 > superpoder2) {
      printf ("O Superpoder da cidade 1 ganhou!\n");
    } else if (superpoder1 < superpoder2){
      printf ("O Superpoder da cidade 2 Ganhou!\n");
    } else printf (" Empate !!!\n");
    break;
     
    default:
        printf ("Opção inválida\n");
  }



  /*

  //mostrar o resultado das comparações agora com o valor 0 e 1
  printf ("------------------------------------------------------ \n");
  printf ("------------------------------------------------------ \n");
  printf ("-----------------------RESULTADO---------------------- \n");
  printf ("------------------------------------------------------ \n");
  printf ("------------------------------------------------------ \n");
  printf ("------------1 para ganhou e 0 para perdeu------------- \n");

  printf ("População carta 1 venceu?, %d \n", resultadopop);
  printf ("Área da carta 1 venceu?, %d \n", resultadoarea);
  printf ("PIB carta 1 venceu?, %d \n", resultadopib);
  printf ("PIB per capta da carta 1 venceu?, %d \n", resultadopcpta);
  printf ("Pontos turisticos da carta 1 venceu?, %d \n", resultadopt);
  printf ("Densidade populacional carta 1 venceu?, %d \n", resultadoden);
  printf ("Superpoder da carta 1 venceu?, %d \n", resultadosup);

  printf ("------------------------------------------------------ \n");
  printf ("critério de avaliação!!\n");
  printf ("POPULAÇAO DA CIDADE \n");
  printf ("------------------------------------------------------ \n");
  

  if (populacao1 > populacao2) {
    printf ("população 1 ganhou\n");
  } else {
    printf ("população 2 ganhou\n");
  }
    printf ("------------------------------------------------------ \n");
  */

return 0;
} 