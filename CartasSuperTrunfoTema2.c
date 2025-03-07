#include <stdio.h>
    int main (){
        int Populacao1 = 3942000, Populacao2 = 14140000, Pontos1 = 30, Pontos2 = 40;
        float Area1 = 1571.00, Area2 = 5672.65, PIB1 = 043.19, PIB2 = 349.00;
        char Estado1[50] = "Amazonas", Estado2[50] = "Bahia", Codigo1[50] = "A01", Codigo2[50] = "B01", Cidade1[50] = "Manaus", Cidade2[50] = "Salvador";
        int Carta1 = 1, Carta2 = 2;
        float DensidadePopulacional1, DensidadePopulacional2, PIBperCapita1, PIBperCapita2, SuperPoder1, SuperPoder2;
        int escolhajogador;
        char estados[50];
       
        printf("Carta %d\n", Carta1);
        printf("Estado: %s\n", Estado1);
        
        printf("Código: %s\n", Codigo1);

        printf("Nome da Cidade: %s\n", Cidade1);

        printf("População: %d\n", Populacao1);

        printf("Área: %.2f km²\n", Area1);

        printf("PIB: %.2f bilhões de reais\n", PIB1);

        printf("Número de Pontos Turísticos: %d\n", Pontos1);
        
        DensidadePopulacional1 = Populacao1 / Area1;

        printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional1);

        PIBperCapita1 = PIB1 /  Populacao1;
        
        printf("PIB per Capita: %f reais\n", PIBperCapita1);

        SuperPoder1 = (float) Populacao1 + Area1 + PIB1 + (float) Pontos1 + (PIB1 / Populacao1) + (1) / (Populacao1 / Area1);

        printf ("Super Poder: %.2f\n", SuperPoder1);

        printf("\n");
        
        printf("Carta %d\n", Carta2);
        printf("Estado: %s\n", Estado2);
    
        printf("Código: %s\n", Codigo2);
    
        printf("Nome da Cidade: %s\n", Cidade2);
        
        printf("População: %d\n", Populacao2);

        printf("Área: %.2fkm²\n", Area2);

        printf("PIB: %.2f bilhões de reais\n", PIB2);

        printf("Número de Pontos Turísticos: %d\n", Pontos2);

        DensidadePopulacional2 = Populacao2 / Area2;

        printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional2);

        PIBperCapita2 = PIB2 / Populacao2;

        printf("PIB per Capita: %f reais\n", PIBperCapita2);

        SuperPoder2 = (float) Populacao2 + Area2 + PIB2 + (float) Pontos2 + (PIB2 / Populacao2) + (1) / (Populacao2 / Area2);

        printf ("Super Poder: %.2f\n", SuperPoder2);

        printf("\n");

        printf("Comparação de Cartas\n");
        printf("Estados: Amazonas e Bahia\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Número de Pontos Turísticos\n");
        printf("5. Densidade Populacional\n");
        printf("6. PIB per Capita\n");
        printf("7. Super Poder\n");
        printf("\nEscolha um atributo para comparar: ");
        scanf ("%d", &escolhajogador);
        
        switch (escolhajogador)
        {
        case 1:
          printf("Atributo: População\n");
          break;
        case 2:
          printf("Atributo: Área\n");
          break;
        case 3:
          printf("Atributo: PIB\n");
          break;
        case 4:
          printf("Atributo: Nùmero de Pontos Turísticos\n");
          break;
        case 5:
          printf("Atributo: Densidade Populacional\n");
          break;
        case 6:
          printf("Atributo: PIB per Capita\n");
          break;
        case 7:
          printf("Atributo: Super Poder\n");
          break;
        default:
          printf("Opção inválida\n");
          break;
        }

        if (escolhajogador == 1){
          if (Populacao1 > Populacao2){
            printf("Carta 1 venceu!\n");
            printf("População: %d", Populacao1);
          } else if (Populacao1 < Populacao2) {
            printf("Carta 2 venceu!\n");
            printf("População: %d\n", Populacao2);
          } else {
            printf("Empate!\n");
          }
        }
        
        if (escolhajogador == 2){
          if (Area1 > Area2){
            printf("Carta 1 venceu!\n");
            printf("Área: %.2f\n", Area1);
          } else if (Area1 < Area2) {
            printf("Carta 2 venceu!\n");
            printf("Área: %.2f", Area2);
          } else {
            printf("Empate!\n");
          }
        }

        if (escolhajogador == 3){
          if (PIB1 > PIB2){
            printf("Carta 1 venceu!\n");
            printf("PIB: %.2f\n", PIB1);
          } else if (PIB1 < PIB2) {
            printf("Carta 2 venceu!\n");
            printf("PIB: %.2f", PIB2);
          } else {
            printf("Empate!\n");
          }
        }
        
        if (escolhajogador == 4){
          if (Pontos1 > Pontos2){
            printf("Carta 1 venceu!\n");
            printf("Número de Pontos Turísticos: %d", Pontos1);
          } else if (Pontos1 < Pontos2) {
            printf("Carta 2 venceu!\n");
            printf("Nùmero de Pontos Turísticos: %d\n", Pontos2);
          } else {
            printf("Empate!\n");
          }
        }
        
        if (escolhajogador == 5){
          if (DensidadePopulacional1 < DensidadePopulacional2){
            printf("Carta 1 venceu!\n");
            printf("Densidade Populacional: %.2f\n", DensidadePopulacional1);
          } else if (DensidadePopulacional1 > DensidadePopulacional2) {
            printf("Carta 2 venceu!\n");
            printf("Densidade Populacional: %.2f", DensidadePopulacional2);
          } else {
            printf("Empate!\n");
          }
        }

        if (escolhajogador == 6){
          if (PIBperCapita1 > PIBperCapita2){
            printf("Carta 1 venceu!\n");
            printf("PIB per Capita: %f\n", PIBperCapita1);
          } else if (PIBperCapita1 < PIBperCapita2) {
            printf("Carta 2 venceu!\n");
            printf("PIB per Capita: %f", PIBperCapita2);
          } else {
            printf("Empate!\n");
          }
        }

        if (escolhajogador == 7){
          if (SuperPoder1 > SuperPoder2){
            printf("Carta 1 venceu!\n");
            printf("Super Poder: %.2f\n", SuperPoder1);
          } else if (SuperPoder1 < SuperPoder2) {
            printf("Carta 2 venceu!\n");
            printf("Super Poder: %.2f", SuperPoder2);
          } else {
            printf("Empate!\n");
          }
        }

        return 0;

}
    


        
        




