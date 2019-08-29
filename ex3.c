#include <stdio.h>
#include <stdlib.h>

int negativos(float *vet, int N){

    int i;
    int qtdN;
    qtdN =0;

    for(i = 0;i < N;i++){
        if(vet[i]<0){
            qtdN++;
        }
    }

    return qtdN;
}
int main (void)
{

    float vet[] = {1,-2,-2,4,-3};

    printf("%d \n", negativos(vet,5));

}