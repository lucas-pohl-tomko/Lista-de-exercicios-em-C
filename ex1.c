#include <stdio.h>
#include <stdlib.h>


int main (void)
{
    // declara o vetor de 5 posicoes
    int v[5];
    int cod;
    int i,j;
    // percorre o vetor e le o input do usuario
    for(i = 0; i < 5; i++){
        printf("digite o %d numero \n",i);
        scanf("%d",&v[i]);
    }
    // pega o codigo e coloca na variavel cod
    printf("digite o codigo: ");
    scanf("%d",&cod);

    // aqui ele so decide oq fazer com o codigo, se 0,1 ou 2. a funcao exit(0) indica que o programa deve ser 
    // encerrado 
    if(cod==0){
        exit(0);
    }
    else if(cod==1){
        // printa a funcao de forma normal (com o i crescendo)
        printf("\n");
        for(i = 0; i < 5; i++){
            printf(" %d",v[i]);
        }
        printf("\n");
    }
    
    else if(cod==2){
        // printa a funcao ao contrario(com o j diminuindo, sim dava pra ter usado i tambem achei q j fica
        // legivel )
        printf("\n");
        for(j = 4; j >= 0;j--){
            printf(" %d",v[j]);
        }
        printf("\n");
    }
    // se o usuario digitar qlqer coisa vai dar um erro
    else
    {
        printf("\n %d \n", cod);
        printf("\n erro \n");
    }
    

}