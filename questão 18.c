#include <stdio.h>
#include <stdlib.h>



void main()
{
  long double somatorio = 1;
  long double qtd = 1;

  for (int i = 2; i <= 64; i++)
  {
    qtd *= 2;
    somatorio += qtd;
    printf("Quadro %d coloca-se %.0Lf graos e o total = %.0Lf graos\n", i, qtd, somatorio);
  }
}