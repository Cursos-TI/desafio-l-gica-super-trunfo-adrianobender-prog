#include<stdio.h>

int main(){

    /* ================= VARIÁVEIS ================= */
    int  p_tur1, p_tur2;
    int  opcao1, opcao2;

    float area1, area2, pib1, pib2;
    float densidade1,densidade2;
    float pib_pcap1, pib_pcap2;
    float superpoder1, superpoder2;

    float valor1_c1, valor1_c2;
    float valor2_c1, valor2_c2;
    float soma1, soma2;

    char cidade1[50], cidade2[50];
    char estado1, estado2;
    char cod_carta1[4], cod_carta2[4];

    unsigned long int populacao1, populacao2;


    /* ================= CADASTRO ================= */
    printf("Digite a letra do Estado da carta 1: ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta 1: ");
    scanf("%s", cod_carta1);

    printf("Digite o nome da cidade da carta 1: ");
    scanf("%s", cidade1);

    printf("Digite a populacao da carta 1: ");
    scanf("%lu", &populacao1);

    printf("Digite a area da carta 1: ");
    scanf("%f", &area1);

    printf("Digite o PIB da carta 1: ");
    scanf("%f", &pib1);

    printf("Digite os pontos turisticos da carta 1: ");
    scanf("%d", &p_tur1);


    printf("\nDigite a letra do Estado da carta 2: ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta 2: ");
    scanf("%s", cod_carta2);

    printf("Digite o nome da cidade da carta 2: ");
    scanf("%s", cidade2);

    printf("Digite a populacao da carta 2: ");
    scanf("%lu", &populacao2);

    printf("Digite a area da carta 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB da carta 2: ");
    scanf("%f", &pib2);

    printf("Digite os pontos turisticos da carta 2: ");
    scanf("%d", &p_tur2);


    /* ================= CÁLCULOS ================= */
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pib_pcap1 = (pib1 * 1000000000.0f) / populacao1;
    pib_pcap2 = (pib2 * 1000000000.0f) / populacao2;

    superpoder1 = area1 + pib1 + p_tur1 + populacao1;
    superpoder2 = area2 + pib2 + p_tur2 + populacao2;


    /* ================= MENU 1 ================= */
    printf("\n=== PRIMEIRO ATRIBUTO ===\n");
    printf("1 Populacao\n2 Area\n3 PIB\n4 Pontos Turisticos\n5 Densidade\n");
    scanf("%d", &opcao1);


    /* ================= MENU 2 DINÂMICO ================= */
    printf("\n=== SEGUNDO ATRIBUTO ===\n");

    if(opcao1 != 1) printf("1 Populacao\n");
    if(opcao1 != 2) printf("2 Area\n");
    if(opcao1 != 3) printf("3 PIB\n");
    if(opcao1 != 4) printf("4 Pontos Turisticos\n");
    if(opcao1 != 5) printf("5 Densidade\n");

    scanf("%d", &opcao2);


    /* ================= ATRIBUTO 1 ================= */
    switch(opcao1){
        case 1: valor1_c1 = populacao1; valor1_c2 = populacao2; break;
        case 2: valor1_c1 = area1; valor1_c2 = area2; break;
        case 3: valor1_c1 = pib1; valor1_c2 = pib2; break;
        case 4: valor1_c1 = p_tur1; valor1_c2 = p_tur2; break;
        case 5: valor1_c1 = densidade1; valor1_c2 = densidade2; break;
        default: printf("Opcao invalida\n"); return 0;
    }


    /* ================= ATRIBUTO 2 ================= */
    switch(opcao2){
        case 1: valor2_c1 = populacao1; valor2_c2 = populacao2; break;
        case 2: valor2_c1 = area1; valor2_c2 = area2; break;
        case 3: valor2_c1 = pib1; valor2_c2 = pib2; break;
        case 4: valor2_c1 = p_tur1; valor2_c2 = p_tur2; break;
        case 5: valor2_c1 = densidade1; valor2_c2 = densidade2; break;
        default: printf("Opcao invalida\n"); return 0;
    }


    /* ================= SOMA ================= */
    soma1 = valor1_c1 + valor2_c1;
    soma2 = valor1_c2 + valor2_c2;


    /* ================= RESULTADO ================= */
    printf("\n===== RESULTADO =====\n");

    printf("%s -> %.2f + %.2f = %.2f\n", cidade1, valor1_c1, valor2_c1, soma1);
    printf("%s -> %.2f + %.2f = %.2f\n", cidade2, valor1_c2, valor2_c2, soma2);

    printf("\nVencedor: %s\n",
           soma1 > soma2 ? cidade1 :
           soma2 > soma1 ? cidade2 :
           "Empate");

    return 0;
}