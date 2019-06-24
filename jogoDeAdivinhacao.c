#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int inicio=0,meio,fim=1023;
    int resposta,i=0,quant=0;
    setlocale(LC_ALL,"portuguese");
    printf("JOGO DE ADIVINHAÇÃO\nSerão no máximo 10 tentativas\n");
    printf ("Pense em um numero entre 0 e 1023.\n");
    do
    {
        meio=(inicio+fim)/2;
        printf("O seu numero é %d? \nSe maior digite '0'\nSe menor digite '1' \nSe estiver certo digite '2'\n",meio);
        scanf("%d",&resposta);
        if (resposta==0)
        {
            inicio=meio+1;
        }
        if (resposta==1)
        {
            fim=meio-1;
        }
        i++;
        quant=i;
    }
    while (resposta!=2 && i<10);
    {

        if (resposta==2)
            printf("Resposta encontrada\n");
        else
        {
            printf("Resposta não encontrada\n");
        }
        if  (quant<=9)
        printf("Foram necessárias %d tentativas.\n",quant);
    }





    return 0;
}
