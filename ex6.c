// Faça um programa que calcule o desvio padrão de um vetor v contendo n = 10 números, onde m é a média do 
// vetor.  

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


#include<stdio.h>

int main(void)
{
    int i,n=10;
    float v[n],somatoria=0,media,variancia=0;

    // variavel para ficar bonitinho quando rodar o codigo
    int j=1;

    // capturando o que o user digitar e colocando no vetor de numeros
    for(i=0; i<n; i++,j++){

        // pra j nao passar de dez, ele eh so uma variavel pra que a fraze nao comece com "digite o 0 numero"
        if(j>n){
            j=n;
        }
        printf("digite o %d numero \n",j);
        scanf("%f",&v[i]);
    }
    // aqui eu faco a somatoria pegando os valores e somando com a variavel somatoria.
    for(i = 0; i < n; i++){
        somatoria += v[i];
    }
    // media eh o resultado do for de cima sobre o tamanho do vetor
    media = somatoria/n;
    
    // aqui eu fiz eles ao quadrado so pegando e multiplicando por ele mesmo
    for(i = 0; i < n; i++){
        variancia +=  (v[i]-media)*(v[i]-media);
    }
    // a formula seria somar todos os valores da lista - a media elevado a 2 depois dividir o resultado por n
    // eu fiz esses passos separados

    variancia = variancia/n;

    // os dois jeitos de calcular a raiz funcionam, mas esse aqui eu tava lendo de um blog e nao entendi mt bem

    // 
    // tentativa #1 
    // 

    // float temp, sqrt;

    // // guarda metade do valor
    // sqrt = variancia / 2;
    // temp = 0;

    // while(sqrt != temp){
    //     temp = sqrt;
    //     sqrt = ( (variancia/temp) + temp) / 2;
    // }




    // 
    // tentativa #2
    // calcula a raiz da variancia que resulta no desvio 
    // 
    // 

    // atribui a variavel raiz, que basicamente eh o desvio, mas a formula eh a raiz da variancia entao eu so chamei
    // de raiz

    int k;
    // aqui faz mais uma variavel pq eu vou precisar de variancia depois
    float raiz = variancia;
    
    // faz a operacao enquanto k < 10
    for (k = 0; k < 10; k++)
        // formula da raiz, que vai repetir
        raiz = raiz/2 + variancia/(2*raiz);
            

    printf("o desvio eh: %f",raiz);
}