#include <stdio.h>
#include <stdlib.h>



void main()
{
  int verifica_palindromo = 0;
  int num = 0;

  printf("Digite um número de 5 dígitos: ");
  scanf("%d", &num);

  int i = 5;
  int aux = num;
  int mult = 10000;
  while (i != 0)
  {
    verifica_palindromo += (aux % 10) * mult;
    aux = aux / 10;
    mult = mult / 10;
    i--;
  }
  if (num == verifica_palindromo)
    printf("O número %d é palíndromo\n", num);
  else
    printf("O número %d não é palíndromo\n", num);
}