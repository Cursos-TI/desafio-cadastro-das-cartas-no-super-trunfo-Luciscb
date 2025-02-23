#include <stdio.h>

    int main(){
        int População, Pontos;
        float Área, PIB;
        char Estado, Cidade, Código[50];

        printf("Carta 01\n");
        scanf("%s", &Estado);
        printf("Estado: %s\n", Estado);

        scanf("%s", &Código);
        printf("código: %s\n", Código);

        scanf("%s", &Cidade);
        printf("Cidade: %s\n", Cidade);

        scanf("%d", &População);
        printf("População: %d\n", População);

        scanf("%f", &Área);
        printf("Área: %f\n", Área);

        scanf("%f", &PIB);
        printf("PIB: %f\n", PIB);

        scanf("%d", &Pontos);
        printf("Pontos: %d\n", Pontos);

        return 0;

}
        




