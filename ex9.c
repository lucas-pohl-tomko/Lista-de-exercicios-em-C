// Faça  um  programa  que  leia  do  usuário  o  tamanho  de  um  vetor  a  ser  lido  e  faça  a  alocação  dinâmica  de 
// memória. Em seguida, leia do usuário seus valores e mostre quantos dos números são pares e quantos são 
// ímpares. Antes de terminar o programa, libere a memória alocada. 

#include <stdio.h>
#include <stdlib.h>


int main (void)
{
    int n;
    printf("digite o tamanho do vetor \n");
    scanf("%d",&n);

    int i;

    int v[n];

    for(i = 0; i < n; i++){
        printf("digite o %d numero \n",i);
        scanf("%d",&v[i]);
        // printf("%d \n",v[i]);
    }
    int pares = 0;
    int impares =0;

    for(i = 0; i < n; i++){
        if(v[i]%2==0){
            pares++;
        }
        else{
            impares++;
        }

    }
    printf("a lista tem %d pares e %d impares \n",pares, impares);
    
    // free(v);
    return 0;
}