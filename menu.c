#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int escolha;
    setlocale(LC_ALL,"portuguese");
    do
    {
        printf("MENU\n");
        printf("Digite 1 para jogo cara ou coroa\nDigite 2 para jogo de adivinhação\nDigite 0 para sair\n");
        scanf("%d",&escolha);
        if (escolha==1)
            ex1();
        else if(escolha==2)
            ex2();
    }
    while (escolha != 0);
}

void ex1()
{
    int escolha,sorteio=0,acertos=0,erros=0,tentativas=0;
    printf("JOGO DE CARA OU COROA\nSerao 10 tentativas.\n");
    while (tentativas<10)
    {
        printf("Digite um numero (0 para cara, 1 para coroa): ");
        scanf("%d",&escolha);
        sorteio=rand()%2;
        if (sorteio==escolha)
        {
            acertos++;
            printf("Acertou\n");
            tentativas++;
        }
        else
        {
            erros++;
            printf("Errou\n");
            tentativas++;
        }
    }
    printf("Acertos %d,Erros %d\n",acertos, erros);


}
void ex2()
{
    int inicio=0,meio,fim=1023;
    int resposta,i=0,quant=0;
    printf("JOGO DE ADIVINHAÇÃO\nMáximo 10 tentativas.\n");
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
    if (resposta==2)
        printf("Resposta encontrada!\n");
    else{
        printf("Resposta não encontrada\n");}
        if (quant<=9)
            printf("Foram necessárias %d tentativas.\n",quant);

}
