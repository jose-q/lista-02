#include <stdio.h>
#include <stdlib.h>



void main()
{
  for (int i = 1; i <= 10; i++)
  {
    if (i % 2 != 0)
    {
      int fat = 1;
      int num = i;
      while (num != 0)
      {
        fat *= num;
        num--;
      }
      printf("Fatorial de %d = %d\n", i, fat);
    }
  }
}