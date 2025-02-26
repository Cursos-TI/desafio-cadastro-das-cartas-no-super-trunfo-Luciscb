#include <stdio.h>

    int main(){
        int Populacao1 = 3942000, Populacao2 = 14140000, Pontos1 = 30, Pontos2 = 40;
        float Area1 = 1571.00, Area2 = 5672.65, PIB1 = 043.19, PIB2 = 349.00;
        char Estado1[50] = "Amazonas", Estado2[50] = "Bahia", Codigo1[50] = "A01", Codigo2[50] = "B01", Cidade1[50] = "Manaus", Cidade2[50] = "Salvador";
        int Carta1 = 1, Carta2 = 2;
        float divisao;
       
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

        return 0;

}
    


        
        




