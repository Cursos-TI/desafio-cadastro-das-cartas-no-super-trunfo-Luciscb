#include <stdio.h>

    int main(){
        int Populacao1 = 3942000, Populacao2 = 14140000, Pontos1 = 30, Pontos2 = 40;
        float Area1 = 1571.00, Area2 = 5672.65, PIB1 = 043.19, PIB2 = 349.00;
        char Estado1[50] = "Amazonas", Estado2[50] = "Bahia", Codigo1[50] = "A01", Codigo2[50] = "B01", Cidade1[50] = "Manaus", Cidade2[50] = "Salvador";
        int Carta1 = 1, Carta2 = 2;
        float divisao;
        float SuperPoder1, SuperPoder2;
       
        printf("Carta %d\n", Carta1);
        printf("Estado: %s\n", Estado1);
        
        printf("Código: %s\n", Codigo1);

        printf("Nome da Cidade: %s\n", Cidade1);

        printf("População: %d\n", Populacao1);

        printf("Área: %.2f km²\n", Area1);

        printf("PIB: %.2f bilhões de reais\n", PIB1);

        printf("Número de Pontos Turísticos: %d\n", Pontos1);
        
        divisao = Populacao1 / Area1;

        printf("Densidade Populacional: %.2f hab/km²\n", divisao);

        divisao = PIB1 /  Populacao1;
        
        printf("PIB per Capita: %f reais\n", divisao);

        SuperPoder1 = (float) Populacao1 + Area1 + PIB1 + (float) Pontos1 + (PIB1 / Populacao1) + (1) / (Populacao1 / Area1);

        printf ("Super Poder: %.2f\n", SuperPoder1);

        printf("\n");
        
        printf("Carta %d\n", Carta2);
        printf("Estado: %s\n", Estado2);
    
        printf("Código: %s\n", Codigo2);
    
        printf("Nome da Cidade: %s\n", Cidade2);
        
        printf("População: %d\n", Populacao2);

        printf("Área: %f.2km²\n", Area2);

        printf("PIB: %.2f bilhões de reais\n", PIB2);

        printf("Número de Pontos Turísticos: %d\n", Pontos2);

        divisao = Populacao2 / Area2;

        printf("Densidade Populacional: %.2f hab/km²\n", divisao);

        divisao = PIB2 / Populacao2;

        printf("PIB per Capita: %f reais\n", divisao);

        SuperPoder2 = (float) Populacao2 + Area2 + PIB2 + (float) Pontos2 + (PIB2 / Populacao2) + (1) / (Populacao2 / Area2);

        printf ("Super Poder: %.2f\n", SuperPoder2);

        printf("\n");

        printf("Comparação de Cartas (Atributo: População)\n");
        printf("Carta 1 - Amazonas (AM): 3942000\n");
        printf("Carta 2 - Bahia (BA): 14140000\n");

        if (Populacao1 > Populacao2) {
            printf("Carta 1 venceu!\n");
          } else {
            printf("Carta 2 venceu!\n");
          }

        printf("\n");

        printf("Comparação de Cartas (Atributo: Área)\n");
        printf("Carta 1 - Amazonas (AM): 1571.00\n");
        printf("Carta 2 - Bahia (BA): 5672.65\n");

        if (Area1 > Area2) {
            printf("Carta 1 venceu!\n");
          } else {
            printf("Carta 2 venceu!\n");
          }

        printf("\n");

        printf("Comparação de Cartas (Atributo: PIB)\n");
        printf("Carta 1 - Amazonas (AM): 043.19\n");
        printf("Carta 2 - Bahia (BA): 349.00\n");

        if (PIB1 > PIB2){
            printf("Carta 1 venceu!\n");
          } else {
            printf("Carta 2 venceu!\n");
          }

        printf("\n");

        printf("Comparação de Cartas (Atributo: Número de Pontos Turísticos)\n");
        printf("Carta 1 - Amazonas (AM): 30\n");
        printf("Carta 2 - Bahia (BA): 40\n");

        if (Pontos1 > Pontos2){
            printf("Carta 1 venceu!\n");
          } else {
            printf("Carta 2 venceu!\n");
          }

        printf("\n");

        printf("Comparação de Cartas (Atributo: Densidade Populacional)\n");
        printf("Carta 1 - Amazonas (AM): 2509.23 hab/km²\n");
        printf("Carta 2 - Bahia (BA): 2492.66 hab/km²\n");

        if ((float)Populacao1/Area1 > (float)Populacao2/Area2){
            printf("Carta 1 venceu!\n");
          } else {
            printf("Carta 2 venceu!\n");
          }

        printf("\n");

        printf("Comparação de Cartas (Atributo: PIB per Capita)\n");
        printf("Carta 1 - Amazonas (AM):  0.000011 reais\n");
        printf("Carta 2 - Bahia (BA): 0.000025 reais\n");

        if (PIB2/(float)Populacao1 > PIB2/(float)Populacao2){
            printf("Carta 1 venceu!\n");
          } else {
            printf("Carta 2 venceu!\n");
          }

        printf("\n");

        printf("Comparação de Cartas (Atributo: Super Poder)\n");
        printf("Carta 1 - Amazonas (AM): 3943644.25\n");
        printf("Carta 2 - Bahia (BA): 14146062.00\n");

        if ((float) Populacao1 + Area1 + PIB1 + (float) Pontos1 + (PIB1 / Populacao1) + (1) / (Populacao1 / Area1) >
            (float) Populacao2 + Area2 + PIB2 + (float) Pontos2 + (PIB2 / Populacao2) + (1) / (Populacao2 / Area2)){
            printf("Carta 1 venceu!\n");
          } else {
            printf("Carta 2 venceu!\n");
          }

        return 0;

}
    


        
        




