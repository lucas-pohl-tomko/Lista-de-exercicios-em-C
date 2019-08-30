// Faça um programa que leia três valores inteiros e chame uma função que receba estes 3 valores de entrada e 
// retorne eles ordenados, ou seja, o menor valor na primeira variável, o segundo menor valor na variável do 
// meio, e o maior valor na última variável. Além de ordenar, essa  função deve  retornar o valor 1 se os  três 
// valores forem iguais e 0 se existirem valores diferentes. Exibir, na função main, os valores ordenados na tela. 

#include <stdio.h>
#include <stdlib.h>

int numeros(int n1,int n2, int n3)
{
    int *pn1,*pn2,*pn3;
    int i,j;
    if(n1 > n2 && n2>n3){
        *pn1 = &n1;
        *pn2 = &n2;
        *pn3 = &n3;
    }
    else if(n1<n2 && n2<n3){
        *pn1 = &n3;
        *pn2 = &n2;
        *pn3 = &n1;
    }
    else if(n1<n2 && n2<n3){
        *pn1 = &n3;
        *pn2 = &n2;
        *pn3 = &n1;
    }
    else if(n1<n2 && n2<n3){
        *pn1 = &n3;
        *pn2 = &n2;
        *pn3 = &n1;
    }
    if(n1==n2 && n2==n3){
        return 1;
    }
    else{
        return 0;
    }
    
int main (void)
{
   

}