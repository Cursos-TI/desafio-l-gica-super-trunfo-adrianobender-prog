#include<stdio.h>
int main(){
    /* Declaração das variáveis do jogo super trunfo, neste momento serão cadastradas 2 cartas, por isso as variaveis estão duplicadas*/
    int  p_tur1, p_tur2, opcao;
    float area1, area2, pib1, pib2, densidade1,densidade2, pib_pcap1, pib_pcap2, superpoder1, superpoder2;
    char cidade1[50], cidade2[50], estado1, estado2, cod_carta1[4], cod_carta2[4];
    unsigned long int populacao1, populacao2;

    /*neste momento coleta as informações das cartas e aloca nas variaveis de cada carta*/
    /*recebe letra do estado carta 1*/
    printf("Digite a letra do Estado da carta 1: \n");
    scanf(" %c", &estado1);

    /*recebe o código das cartas 1*/
    printf("Digite o codigo da  carta 1 (Letra do Estado + um numero de 01 a 04): \n");
    scanf("%s", cod_carta1);

    /*recebe o nome da cidade da carta 1*/
    printf("Digite o nome da cidade da carta 1: \n");
    scanf("%s", cidade1);

    /*recebe os valores das população carta 1*/
    printf("Digite a populacao da  carta 1: \n");
    scanf("%lu", &populacao1);

    /*recebe o valor da área carta 1*/
    printf("Digite a area(km²) da carta 1: \n");
    scanf("%f", &area1);

    /*recebe o valore do PIB carta 1*/
    printf("Digite o PIB (Bilhoes de reais) da carta 1: \n");
    scanf("%f", &pib1);

    /*recebe o numero de pontos turisticos*/
    printf("Digite o numero de pontos turisticos da carta 1: \n");
    scanf("%d", &p_tur1);

    /*recebe letra do estado carta 2*/
    printf("\nDigite a letra do Estado da carta 2: \n");
    scanf(" %c", &estado2);

    /*recebe o código das cartas 2*/
    printf("Digite o codigo da  carta 2 (Letra do Estado + um numero de 01 a 04): \n");
    scanf("%s", cod_carta2);

    /*recebe o nome da cidade da carta 2*/
    printf("Digite o nome da cidade da carta 2: \n");
    scanf("%s", cidade2);

    /*recebe os valores das população carta 2*/
    printf("Digite a populacao da carta 2: \n");
    scanf("%lu", &populacao2);

    /*recebe o valor da área carta 2*/
    printf("Digite a area(km²) da carta 2: \n");
    scanf("%f", &area2);

    /*recebe o valore do PIB carta 2*/
    printf("Digite o PIB (Bilhoes de reais) da carta 2: \n");
    scanf("%f", &pib2);

    /*recebe o numero de pontos turisticos*/
    printf("Digite o numero de pontos turisticos da carta 2: \n");
    scanf("%d", &p_tur2);

    /*calcula densidade e pib per capita*/
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pib_pcap1 = (pib1 * 1000000000.0f) / populacao1;
    pib_pcap2 = (pib2 * 1000000000.0f) / populacao2;

    /*calcula o super poder de cada carta*/
    superpoder1 = (area1 / populacao1) + p_tur1 + area1 + pib1 + pib_pcap1 + populacao1;
    superpoder2 = (area2 / populacao2) + p_tur2 + area2 + pib2 + pib_pcap2 + populacao2;


    /*exibe os valores da carta 1*/
    printf("\n|||*************************************|||");
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", cod_carta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f Km²\n", area1);
    printf("PIB: %.2f Bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", p_tur1);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade1); //exibe resultado do calculo da densidade
    printf("PIB per Capita: %.2f reais\n", pib_pcap1); //exibe resultado do calculo do pib per capita
    printf("Super Poder: %.2f\n", superpoder1);
    printf("|||*************************************|||\n");


    /*exibe os valores da carta 2*/
    printf("\n|||*************************************|||");
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", cod_carta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f Km²\n", area2);
    printf("PIB: %.2f Bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", p_tur2);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade2); //exibe resultado do calculo da densidade
    printf("PIB per Capita: %.2f reais\n", pib_pcap2); //exibe resultado do calculo do pib per capita
    printf("Super Poder: %.2f\n", superpoder2);
    printf("|||*************************************|||\n");
    

    /*menu de opções*/
    printf("\n*********** MENU DE COMPARAÇÃO ***********\n");
    printf("Escolha o atributo:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Opção: \n");
    scanf("%d", &opcao);

    printf("\n*********** RESULTADO ***********\n");
    /*Avalia a carta vencedora de acordo com o atributo selecionado*/
    switch(opcao){

        case 1: // POPULAÇÃO
            printf("Comparando População:\n");
            printf("%s: %lu\n", cidade1, populacao1);
            printf("%s: %lu\n", cidade2, populacao2);

            if(populacao1 > populacao2)
                printf("Vencedor: %s\n", cidade1);
            else if(populacao2 > populacao1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;


        case 2: // ÁREA
            printf("Comparando Área:\n");
            printf("%s: %.2f\n", cidade1, area1);
            printf("%s: %.2f\n", cidade2, area2);

            if(area1 > area2)
                printf("Vencedor: %s\n", cidade1);
            else if(area2 > area1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;


        case 3: // PIB
            printf("Comparando PIB:\n");
            printf("%s: %.2f\n", cidade1, pib1);
            printf("%s: %.2f\n", cidade2, pib2);

            if(pib1 > pib2)
                printf("Vencedor: %s\n", cidade1);
            else if(pib2 > pib1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;


        case 4: // PONTOS TURÍSTICOS
            printf("Comparando Pontos Turísticos:\n");
            printf("%s: %d\n", cidade1, p_tur1);
            printf("%s: %d\n", cidade2, p_tur2);

            if(p_tur1 > p_tur2)
                printf("Vencedor: %s\n", cidade1);
            else if(p_tur2 > p_tur1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;


        case 5: // DENSIDADE (MENOR VENCE)
            printf("Comparando Densidade Demográfica:\n");
            printf("%s: %.2f\n", cidade1, densidade1);
            printf("%s: %.2f\n", cidade2, densidade2);

            if(densidade1 < densidade2)
                printf("Vencedor: %s\n", cidade1);
            else if(densidade2 < densidade1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;


            default:
                printf("Opção inválida!\n");
    }

return 0;
}