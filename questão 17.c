#include <stdio.h>
#include <stdlib.h>


void main()
{
  int conversao = 0;

  for (int i = 10; i <= 100; i += 10)
  {
    conversao = (i * 9 / 5) + 32;

    printf("%d°C = %d°F\n", i, conversao);
  }
}