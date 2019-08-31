// Faça um programa que leia três valores inteiros e chame uma função que receba estes 3 valores de entrada e 
// retorne eles ordenados, ou seja, o menor valor na primeira variável, o segundo menor valor na variável do 
// meio, e o maior valor na última variável. Além de ordenar, essa  função deve  retornar o valor 1 se os  três 
// valores forem iguais e 0 se existirem valores diferentes. Exibir, na função main, os valores ordenados na tela. 

#include <stdio.h>
#include <stdlib.h>

int numeros(int n1,int n2, int n3, int* pn1,int* pn2,int* pn3)
{

// aqui eu fiz que para cada possibilidade os numeros sejam ajeitados, 
// usando uns ifs bem simples, se uma variavel for maior ou menor que a outra e assim por diante

// por exemplo se n1 for menor que n2 e n2 for menor que n3, entao sabemos que n1 eh o menor
    if(n1 < n2 && n2<n3){

        // aqui dentro eu estou guardando a variavel na posicao apontada pelo ponteiro, cada ponteiro corresponde
        // as variaveis menores ou maiores dependendo de qual if vai rodar
        // os ponteiros ja ficam entao, na ordem que vao ser chamados na main
        *pn1 = n1;
        *pn2 = n2;
        *pn3 = n3;
        // printf("if1");
    }
    // todos os ifs usasm a mesma logica acima
    else if(n1>n2 && n2>n3){
        *pn1 = n3;
        *pn2 = n2;
        *pn3 = n1;
        // printf("if2");

    }
    else if(n1>n2 && n2<n3 && n3 < n1){
        *pn1 = n2;
        *pn2 = n3;
        *pn3 = n1;
        // printf("if3");

    }
    else if(n1>n2 && n2<n3 && n3 > n1){
        *pn1 = n2;
        *pn2 = n1;
        *pn3 = n3;
        // printf("if4");
    }
    else if(n3<n1 && n1<n2){
        *pn1 = n3;
        *pn2 = n1;
        *pn3 = n2;
        // printf("if5");
    }
    else if(n1<n2 && n2>n3){
        *pn1 = n1;
        *pn2 = n3;
        *pn3 = n2;
        // printf("if6");
    }
    else
    {
        *pn1 = n1;
        *pn2 = n3;
        *pn3 = n2;
    }
    

    // se todos os numeros forem iguais retorna 1
    if(n1==n2 && n2==n3){
        return 1;
    }
    // se todos os numeros forem diferentes retorna 0
    else{
        return 0;
    }

}
int main (void)
{
    int j,i,v[3],pn1,pn2,pn3;

    // variavel para ficar bonitinho quando rodar o codigo
    j = 1;

    // capturando o que o user digitar e colocando no vetor de numeros
    for(i = 0; i < 3; i++,j++){

        // pra j nao passar de tres, ele eh so uma variavel pra que a fraze nao comece com "digite o 0 numero"
        if(j>3){
            j = 3;
        }
        // le o numero q o usuario digitar
        printf("digite o %d numero \n",j);
        scanf("%d",&v[i]);
    }

    printf("Codigo: \n");        

    // chamando as funcoes e printando os pn1 em ordem
    printf("%d \n",numeros(v[0],v[1],v[2],&pn1,&pn2,&pn3));
    printf("Numeros em ordem: \n");
    printf("%d,%d,%d \n",pn1,pn2,pn3);

}