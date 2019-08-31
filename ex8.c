//  Escreva um programa para converter uma cadeia de caracteres de letras minúscula em letras maiúsculas. Dica: 
//  estude a tabela ASCII.
#include <stdio.h>
#include <stdlib.h>

int main(void){

    // cadeia de caracteres
    char frase[] = {"bla hahah hgo ohohohHOHOHO"};

    int i;
    // sizeof menos 1 pra n pegar o /0, aquele safado
    for(i = 0; i < sizeof(frase)-1; i++)
    // confere se o caracter eh minusculo(se ele estiver nessa range)
        if(frase[i] >= 97 && frase[i] <= 122){
        // altera pra maiusculo
            frase[i] -= 32;
        }

    printf("\nTexto: %s\n", frase);

    return 0;
}