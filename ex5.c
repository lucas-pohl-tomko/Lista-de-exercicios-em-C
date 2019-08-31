#include <stdio.h>
#include <stdlib.h>


int main (void)
{

    // passa a frase que eh um vetor de caracteres
    char vet[] = {"aeiouAEIOU"};
    // as vogais de acordo com a tabela
    int chars[]={97,101,105,111,117,65,69,73,79,85};
    int i,j;
    int qtd = 0;
    // percorre a frase usando o tamanho da frase ali pro contador parar
    for (i = 0; i < sizeof(vet)-1; i++)
    {
        // for para percorrer a lista da tabela, 
        for(j = 0; j < 10; j++){
            // printf("%c",chars[j]);
            // se o caracter (i) da frase for uma vogal da tabela ele aumenta 1 na qtd de vogais
            if (vet[i]==chars[j])
            {
                // printf("%d",chars[j]);
                qtd++;
            }
            }
        // printf("%c \n", vet[i]);
    }
    // printa palavra e qtd de vogais
    printf("a palavra %s tem %d vogais \n",vet, qtd);

}