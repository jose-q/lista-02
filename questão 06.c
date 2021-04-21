#include<stdio.h>
#include<stdlib.h>

int main(){
    int eleitores = 1000;
    int indicador = 1, contador = 0, indice, branco = 0, nulo = 0;
    int votos[eleitores], votos_computados[5] = {0, 0, 0, 0, 0};
    char candidatos[5][25] = {
        "Paulo",
        "Renata",
        
    };

    printf("Eleições 2019\n\n");
    printf(
            "5 - %s\n"
            "7 - %s\n"
            "0 - Branco\n\n",
            candidatos[0],
            candidatos[1]

    );

    do{
        printf("Eleitor %dº: ", indicador++);
        scanf("%d", &votos[contador]);

        if(votos[contador] == -1)
            eleitores = 0;
        else
            contador++;
    }while(contador < eleitores);

    for(indice = 0; indice < contador; indice++){
        if(votos[indice] == 5)
            votos_computados[0] += 1;

        else if(votos[indice] == 7)
            votos_computados[1] += 1;


        else if(votos[indice] == 0)
            branco += 1;

        else
            nulo += 1;
    }

    printf("Apuração...\n");
    printf("%-25s............... %d\n", "Total de votos", contador);

    if(contador - (branco + nulo) < 0)
        printf("Votação inválida!\n");
    else
        printf("%-25s............... %d\n", "Total de votos válidos", contador - (branco + nulo));

    printf("%-25s............... %d\n", candidatos[0], votos_computados[0]);
    printf("%-25s............... %d\n", candidatos[1], votos_computados[1]);
}
  