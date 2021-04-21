#include <stdio.h>
#include <stdlib.h>



void main()
{
  int num;

  printf("Digite um numero: ");
  scanf("%d", &num);

  for (int i = 1; i <= 10; i++)
  {
    int mult = num * i;
    printf("%d X %d = %d\n", num, i, mult);
  }
}