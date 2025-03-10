#include <stdio.h>
    int main (){
        int Populacao1 = 3942000, Populacao2 = 14140000, Pontos1 = 30, Pontos2 = 40;
        float Area1 = 1571.00, Area2 = 5672.65, PIB1 = 043.19, PIB2 = 349.00;
        char Estado1[50] = "Amazonas", Estado2[50] = "Bahia", Codigo1[50] = "A01", Codigo2[50] = "B01", Cidade1[50] = "Manaus", Cidade2[50] = "Salvador";
        int Carta1 = 1, Carta2 = 2;
        float DensidadePopulacional1, DensidadePopulacional2, PIBperCapita1, PIBperCapita2, SuperPoder1, SuperPoder2;
        int primeiroatributo, segundoatributo, resultado1, resultado2, soma1, soma2;
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

        printf("Bem-vindo ao jogo!\n");
        printf("Comparação de Cartas\n");
        printf("Estados: Amazonas e Bahia\n");
        printf("ATRIBUTOS: \n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Número de Pontos Turísticos\n");
        printf("5. Densidade Populacional\n");
        printf("6. PIB per Capita\n");
        printf("7. Super Poder\n");
        printf("\nEscolha o primeiro atributo para comparar: ");
        scanf ("%d", &primeiroatributo);
        
        switch (primeiroatributo)
        {
        case 1:
          printf("Atributo: População\n");
          printf("Amazonas: %d\n", Populacao1);
          printf("Bahia: %d\n", Populacao2);
          resultado1 = Populacao1 > Populacao2 ? 1 : 0;
          break;
        case 2:
          printf("Atributo: Área\n");
          printf("Amazonas: %f\n", Area1);
          printf("Bahia: %f\n", Area2);
          resultado1 = Area1 > Area2 ? 1 :0;
          break;
        case 3:
          printf("Atributo: PIB\n");
          printf("Amazonas: %f\n", PIB1);
          printf("Bahia: %f\n", PIB2);
          resultado1 = PIB1 > PIB2 ? 1 :0;
          break;
        case 4:
          printf("Atributo: Número de Pontos Turísticos\n");
          printf("Amazonas: %d\n", Pontos1);
          printf("Bahia: %d\n", Pontos2);
          resultado1 = Pontos1 > Pontos2 ? 1 : 0;
          break;
        case 5:
          printf("Atributo: Densidade Populacional\n");
          printf("Amazonas: %f\n", DensidadePopulacional1);
          printf("Bahia: %f\n", DensidadePopulacional2);
          resultado1 = DensidadePopulacional1 < DensidadePopulacional2 ? 1 : 0;
          break;
        case 6:
          printf("Atributo: PIB per Capita\n");
          printf("Amazonas: %d\n", PIBperCapita1);
          printf("Bahia: %d\n", PIBperCapita2);
          resultado1 = PIBperCapita1 > PIBperCapita2 ? 1 : 0;
          break;
        case 7:
          printf("Atributo: Super Poder\n");
          printf("Amazonas: %d\n", SuperPoder1);
          printf("Bahia: %d\n", SuperPoder2);
          resultado1 = SuperPoder1 > SuperPoder2 ? 1 : 0;
          break;
        default:
          printf("Opção inválida\n");
          break;
        }

      printf("\n");

        printf("ATRIBUTOS: \n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Número de Pontos Turísticos\n");
        printf("5. Densidade Populacional\n");
        printf("6. PIB per Capita\n");
        printf("7. Super Poder\n");
        printf("\nEscolha o segundo atributo para comparar: ");
        scanf ("%d", &segundoatributo);

      if (primeiroatributo == segundoatributo)
      {
        printf("Você escolheu o mesmo atributo.\n");
      } else {
        switch (segundoatributo)
        {
        case 1:
          printf("Atributo: População\n");
          printf("Amazonas: %d\n", Populacao1);
          printf("Bahia: %d\n", Populacao2);
          resultado1 = Populacao1 > Populacao2 ? 1 : 0;
          break;
        case 2:
          printf("Atributo: Área\n");
          printf("Amazonas: %f\n", Area1);
          printf("Bahia: %f\n", Area2);
          resultado2 = Area1 > Area2 ? 1 :0;
          break;
        case 3:
          printf("Atributo: PIB\n");
          printf("Amazonas: %f\n", PIB1);
          printf("Bahia: %f\n", PIB2);
          resultado2 = PIB1 > PIB2 ? 1 :0;
          break;
        case 4:
          printf("Atributo: Número de Pontos Turísticos\n");
          printf("Amazonas: %d\n", Pontos1);
          printf("Bahia: %d\n", Pontos2);
          resultado2 = Pontos1 > Pontos2 ? 1 : 0;
          break;
        case 5:
          printf("Atributo: Densidade Populacional\n");
          printf("Amazonas: %f\n", DensidadePopulacional1);
          printf("Bahia: %f\n", DensidadePopulacional2);
          resultado2 = DensidadePopulacional1 < DensidadePopulacional2 ? 1 : 0;
          break;
        case 6:
          printf("Atributo: PIB per Capita\n");
          printf("Amazonas: %d\n", PIBperCapita1);
          printf("Bahia: %d\n", PIBperCapita2);
          resultado2 = PIBperCapita1 > PIBperCapita2 ? 1 : 0;
          break;
        case 7:
          printf("Atributo: Super Poder\n");
          printf("Amazonas: %d\n", SuperPoder1);
          printf("Bahia: %d\n", SuperPoder2);
          resultado2 = SuperPoder1 > SuperPoder2 ? 1 : 0;
          break;
        default:
          printf("Opção inválida\n");
          break;
        }
      }

       if (resultado1 && resultado2)
       {
        printf("Carta 1 venceu!\n");
       } else if(resultado1 != resultado2){
        printf("Empate!\n");
       } else {
        printf("Carta 2 venceu!\n");
       }

        return 0;

}
    


        
        




