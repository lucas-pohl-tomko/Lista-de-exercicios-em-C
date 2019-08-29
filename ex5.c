#include <stdio.h>
#include <stdlib.h>


int main (void)
{

    char vet[] = {"aeiouAEIOU"};
    int chars[]={97,101,105,111,117,65,69,73,79,85};
    int i,j;
    int qtd = 0;
    for (i = 0; i < sizeof(vet)-1; i++)
    {
       
        for(j = 0; j < 10; j++){
            // printf("%c",chars[j]);
            if (vet[i]==chars[j])
            {
                // printf("%d",chars[j]);
                qtd++;
            }
            }
        // printf("%c \n", vet[i]);
    }
    
    printf("a palavra %s tem %d vogais \n",vet, qtd);

}