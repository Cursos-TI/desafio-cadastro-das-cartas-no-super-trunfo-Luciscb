#include <stdio.h>

    int main(){
        int Populacao1 = 3942000, Populacao2 = 14140000, Pontos1 = 30, Pontos2 = 40;
        float Area1 = 1571.00, Area2 = 5672.65, PIB1 = 043.19, PIB2 = 349.00;
        char Estado1[50] = "Amazonas", Estado2[50] = "Bahia", Codigo1[50] = "A01", Codigo2[50] = "B01", Cidade1[50] = "Manaus", Cidade2[50] = "Salvador";
        int Carta1 = 1, Carta2 = 2;
        float divisao;
        float SuperPoder1, SuperPoder2;
        int resultado;
       
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

        printf("Comparação de Cartas\n");

        resultado = Populacao1 > Populacao2;

        printf("Carta 1 > carta 2: %d\n", Populacao1 > Populacao2);

        resultado = Area1 > Area2;

        printf("Área 1 > Área 2: %d\n", (int)Area1 > Area2);
    
        resultado = PIB1 > PIB2;

        printf("PIB 1 > PIB 2: %d\n", (int)PIB1 > PIB2);

        resultado = Pontos1 > Pontos2;

        printf("Pontos Turísticos 1 > Pontos Turísticos 2: %d\n", Pontos1 > Pontos2);

        resultado = (Populacao1 / Area1) > (Populacao2 / Area2);

        printf("Densidade Populacional 1 > Densidade Populacional 2: %d\n", (Populacao1 / (int)Area1) > (Populacao2 / (int)Area2));
    
        resultado = (PIB1 / Populacao1) > (PIB2 / Populacao2);

        printf("PIB per Capita 1 > Densidade PIB per Capita 2: %d\n", ((int)PIB1 / Populacao1) > ((int)PIB2 / Populacao2));

        resultado = Populacao1 + (int)Area1 + (int)PIB1 + Pontos1 + ((int)PIB1 / Populacao1) + (1) / (Populacao1 / (int)Area1) 
                > Populacao2 + (int)Area2 + (int)PIB2 + Pontos2 + ((int)PIB2 / Populacao2) + (1) / (Populacao2 / (int)Area2);

        printf("Super Poder 1 > Super Poder 2: %d\n", Populacao1 + (int)Area1 + (int)PIB1 + Pontos1 + ((int)PIB1 / Populacao1) + (1) / (Populacao1 / (int)Area1) 
        > Populacao2 + (int)Area2 + (int)PIB2 + Pontos2 + ((int)PIB2 / Populacao2) + (1) / (Populacao2 / (int)Area2));


        return 0;

}
    


        
        




