#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

#define MIN 1
#define MAX 4
#define ERRO "ERRO! Faça novamente. Lembre-se de digitar apenas valores entre 1 e 4 e não use o mesmo número mais de uma vez!"
#define MENS " Nas frases a seguir, pontue com:\n 4 - a que melhor descreve você;\n 3 - a próxima melhor descrição;\n 2 - a próxima melhor;\n 1 - aquela que menos descreve você."




    int main (){

        setlocale(LC_ALL,"");


    int TESTE[20], i = 0, j;

    char letras[4] = {'a', 'b', 'c', 'd'};



 do{

            j = 0;

            printf("%s", MENS);
            printf("\n\nEu tomo decisões importantes baseado em:\n a - Intuição\n b - O que me soa melhor\n c - O que me parece melhor\n d - Um estudo preciso e minucioso do assunto\n");



            for (i = MIN; i <= MAX; i++){


                setbuf(stdin, 0);
                printf(" [%c] -> ", letras[j]);
                j++;
                fflush(stdin);
                scanf("%d", &TESTE[i]);

            }   letras[strlen(letras)-1] = '\0';



                if (TESTE[1] > MAX || TESTE[2] > MAX || TESTE[3] > MAX || TESTE[4] > MAX){
                printf("%s\n", ERRO);
                }

                else if(TESTE[1] == TESTE[2] || TESTE[1] == TESTE[3] || TESTE[1] == TESTE[4] || TESTE[2] == TESTE[3] || TESTE[2] == TESTE[4] || TESTE[3] == TESTE[4]){
                    printf("%s\n", ERRO);

                }

    }while(TESTE[1] > MAX || TESTE[2] > MAX || TESTE[3] > MAX || TESTE[4] > MAX || TESTE[1] == TESTE[2] || TESTE[1] == TESTE[3] || TESTE[1] == TESTE[4] || TESTE[2] == TESTE[3] || TESTE[2] == TESTE[4] || TESTE[3] == TESTE[4]);





















getch();
return(0);


}
