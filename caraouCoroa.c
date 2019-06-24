#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  int escolha,sorteio=0,acertos=0,erros=0,tentativas;
  setlocale(LC_ALL,"portuguese");
  printf("JOGO DE CARA OU COROA\n");
  printf("Serão 10 tentativas\n");
  while (tentativas<10){
      printf("Digite um numero (0 para cara, 1 para coroa): ");
      scanf("%d",&escolha);
      sorteio=rand()%2;
      if (sorteio==escolha){
          acertos++;
          printf("Acertou\n");
          tentativas++;
      }
      else{
        erros++;
        printf("Errou\n");
        tentativas++;
      }
  }
  printf("Acertos %d,Erros %d",acertos, erros);

  return 0;
}


