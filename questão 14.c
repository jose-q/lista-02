#include <stdio.h>
#include <stdlib.h>



void main()
{
  int A, B, divisiveis = 0;

  printf("Digite o valor de A: ");
  scanf("%d", &A);
  printf("Digite o valor de B: ");
  scanf("%d", &B);

  if (A > B)
  {
    for (int i = B; i <= A; i++)
    {
      if (i % 3 == 0)
      {
        divisiveis += 1;
      }
    }
    printf("Contagem de números divisíveis por 3 na faixa A,B sendo A > B: %d\n", divisiveis);
  }
  else if (A < B)
  {
    for (int i = A; i <= B; i++)
    {
      if (i % 3 == 0)
      {
        divisiveis += 1;
      }
    }
    printf("Contagem de números divisíveis por 3 na faixa A,B sendo A < B: %d\n", divisiveis);
  }
  else
  {
    printf("A e B são iguais!\n");
  }
}