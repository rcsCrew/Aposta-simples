#include <stdio.h>
#include <time.h> // para que possa rodar a linha 27 - 28
#include <stdlib.h>


void main()
{

    int saldo = 1; // saldo da conta
    int num;       // sera gerado um numero atraves da linha 27 - 28 de 0 - 1, onde saira o resultado.
    int aposta;    // valor da aposta
    char ok;       // iniciar o jogo
    int voltar;    // se quiser jogar novamente
    int reco;      // se falir, pode se escolher jogar novamente entao sera dado 2 fichas, se sair sera encerrado.
    system("cls");
    printf("Quer iniciar o jogo?\n");
    printf("se sim( 1 ), se nao ( 2 )\n");
    scanf("%d", &ok);
    system("cls");
    do
    {
        if (ok == 1)
        {
            printf("fichas: %d \n", saldo);
            printf("Digite o valor da aposta: ");
            scanf("%d", &aposta);

            if (aposta <= saldo)
            {
                srand(time(NULL));
                num = rand() % 2;
                system("cls");
                printf("\nIniciando:");
                if (num == 0)
                {
                    printf("\nVoce ganhou!");
                    saldo = saldo + aposta;
                }
                if (num == 1)
                {
                    printf("\nVoce perdeu!");
                    saldo = saldo - aposta;
                }
            }
            else
            {
                system("cls");
                printf("\nvoce faliu sua conta!");
                printf("\nvoce pode ganhar 2 fichas apenas digitando 1");
                printf("\nse voce quiser sair digite 2.");
                scanf("%d", &reco);
                if (reco == 1)
                {
                    saldo = 2;
                    printf("Suas fichas foram setadas: %d fichas", saldo);
                }
                else if (reco == 2)
                {
                    return 0;
                }
            }
        }
        printf("\nseu saldo e de: %d", saldo);
        printf("\nQuer jogar novamente?");
        printf("\nSe sim ( 1 ), Se nao ( 2 )\nR: ");
        scanf("%d", &voltar);
    } while (voltar == 1);
}