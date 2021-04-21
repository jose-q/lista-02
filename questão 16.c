#include <stdio.h>
#include <stdlib.h>



void main()
{
  int somatorio_div_3 = 0;
  int somatorio_div_5 = 0;

  for (int i = 0; i <= 200; i++)
  {
    if (i <= 100 && i % 3 == 0)
      somatorio_div_3 += i;
    else if (i >= 100 && i % 5 == 0)
      somatorio_div_5 += i;
  }

  printf("Somatório dos números divisíveis por 3 no intervalo [0, 100]: %d\n", somatorio_div_3);
  printf("Somatório dos números divisíveis por 5 no intervalo [100, 200]: %d\n", somatorio_div_5);
}