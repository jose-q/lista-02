#include <stdio.h>
#include <stdlib.h>


void main()
{
  int min, max, soma = 0;
  int media = 0;

  printf("Digite o valor minimo: ");
  scanf("%d", &min);
  printf("Digite o valor maximo: ");
  scanf("%d", &max);

  for (int i = min; i <= max; i++)
  {
    soma += i;
  }

  media = soma / (max - min);

  printf("Média Aritméica na faixa [%d-%d] é %d\n", min, max, media);
}