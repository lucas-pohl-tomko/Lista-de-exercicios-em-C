#include <stdio.h>
#include <stdlib.h>


int main (void)
{
    int v[5];
    // int v2[5];
    int cod;
    int i,j;

    for(i = 0; i < 5; i++){
        printf("digite o %d numero \n",i);
        scanf("%d",&v[i]);
    }
    printf("digite o codigo: ");
    scanf("%d",&cod);

    if(cod==0){
        exit(0);
    }
    else if(cod==1){
        for(i = 0; i < 5; i++){
            printf("%d",v[i]);
        }
    }
    else if(cod==2){

        for(j = 4; j >= 0;j--){
            printf("%d",v[j]);
        }
    }
    else
    {
        printf("%d", cod);
        printf("erro");
    }
    

}