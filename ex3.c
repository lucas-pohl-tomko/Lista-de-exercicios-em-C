#include <stdio.h>
#include <stdlib.h>

// funcao obrigatoria
int negativos(float *vet, int N){

    int i;
    int qtdN=0;
    // percorre o vetor, pra cada i < 0  ele conta um numero negativo 
    for(i = 0;i < N;i++){
        if(vet[i]<0){
            qtdN++;
        }
    }
    // retorna a qtd de numeros negativos
    return qtdN;
}
int main (void)
{
    // passa um vetor para a funcao
    float vet[] = {1,-2,-2,4,-3};
    // conta quantos numeros negatibos tem
    printf("%d \n", negativos(vet,5));

}
