#include<stdio.h>

int f, n;

int main()
{
	printf("Digite o numero desejado: \n");
  scanf("%d", &n);

  for(f = 1; n > 1; n = n - 1)
  {
      f = f * n;
  }

  printf("O fatorial foi:%d",f);
  return 0;
}