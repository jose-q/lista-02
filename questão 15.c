#include <stdio.h>
#include <stdlib.h>


void main()
{
  int expoente = 7;
  int resultado = 1;

  for (int i = 0; i <= expoente; i++)
  {
    if (i == 0)
      printf("Resultado base 3 expoente %d = %d\n", i, resultado);
    else if (i == 1)
      printf("Resultado base 3 expoente %d = %d\n", i, 3);
    else
    {
      resultado = 3;
      for (int j = 2; j <= i; j++)
      {
        resultado *= 3;
      }
      printf("Resultado base 3 expoente %d = %d\n", i, resultado);
    }
  }
}