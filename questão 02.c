#include <stdio.h>

int main() 
{
    
    int dia;
    
    printf("Entre com um numero:(onde 1 é Domingo e 7 é sabado) ");
    scanf("%d", &dia);

    switch(dia) {
        case 1: printf("Domingo"); 
        break;
        case 2: printf("Seungda"); 
        break;
        case 3: printf("Terça"); 
        break;
        case 4: printf("Quarta"); 
        break;
        case 5: printf("Quinta");
        break;
        case 6: printf("Sexta"); 
        break;
        case 7: printf("Sabado"); 
        break;
        default: printf("Numero invalido");
    }
		printf("teste \n");
}