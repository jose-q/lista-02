#include <stdio.h>
#include <stdlib.h>



void main()
{
  int A, B, somatorio = 0;

  printf("Digite o valor de A:\n ");
  scanf("%d", &A);
  printf("Digite o valor de B:\n ");
  scanf("%d", &B);

  if (A > B)
  {
    for (int i = B; i <= A; i++)
    {
      if (i % 2 == 0)
      {
        somatorio += i;
      }
    }
    printf("Somatório de números pares na faixa A,B sendo A > B: %d\n", somatorio);
  }
  else if (A < B)
  {
    for (int i = A; i <= B; i++)
    {
      if (i % 2 == 0)
      {
        somatorio += i;
      }
    }
    printf("Somatório de números pares na faixa A,B sendo A < B: %d\n", somatorio);
  }
  else
  {
    printf("A e B são iguais!\n");
  }
}