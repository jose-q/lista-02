#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,maior=0,menor=0;
printf("digite os valores:(digite 0 para pausar o programa)\n");
scanf("%d",&n);
maior=n;
menor=n;
while(n!=0){
if(n>0){
if(n>maior)maior=n;
if(n<menor)menor=n;}
else
printf("Valor invalido.\n");
printf("digite os valores:\n");
scanf("%d",&n);
}

printf("O maior numero digitado é:%d\n",maior);
printf("O menor numero digitado é:%d\n",menor);
system("Pause");
}