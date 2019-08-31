// Faça  um  programa  que  leia  do  usuário  o  tamanho  de  um  vetor  a  ser  lido  e  faça  a  alocação  dinâmica  de 
// memória. Em seguida, leia do usuário seus valores e mostre quantos dos números são pares e quantos são 
// ímpares. Antes de terminar o programa, libere a memória alocada. 

#include <stdio.h>
#include <stdlib.h>


int main (void)
{
    // le o input do usuario
    int n;
    printf("digite o tamanho do vetor \n");
    scanf("%d",&n);

    int i,j=1;

// cria um ponteiro q vai seer o vetor dinamico
    int *v;

    // alocacao de memoria dinamica
    v = (int *) malloc(n * sizeof(int));

    // pega o input do usuario e coloca no vetor e o classico j pra quando for printar aparecer a partir do 1
    for(i = 0; i < n; i++,j++){
        printf("digite o %d numero \n",j);
        scanf("%d",&v[i]);
        // printf("%d \n",v[i]);
    }

    // declara pares e impares, que vao ser incrementados
    int pares = 0;
    int impares =0;

    // incrementa par se o numero retornar 0 na divisao por modulo
    for(i = 0; i < n; i++){
        if(v[i]%2==0){
            pares++;
        }
        // incrementa impar se o numero retornar um valor diferente de zero
        else{
            impares++;
        }

    }
    // imprime na tela
    printf("a lista tem %d pares e %d impares \n",pares, impares);
    // libera a memoria alocada
    free(v);
    return 0;
}