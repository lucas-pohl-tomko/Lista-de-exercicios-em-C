#include <stdio.h>

int calculaDiagonal(int mat[3][3])
{
    int i, j,resultado=0;

    // Soma os elementos da diagonal principal
    
    // For dentro de um for, para acessar o i e o j da matriz, ai se o i for igual o j quer dizer q ele ta na
    // diagonal principal, ai ele soma isso com resultado (por exemplo matriz[1][1],matriz[2][2] e matriz[3][3]
    // sao a diagonal principal)

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if(i==j){
                resultado+=mat[i][j];
            }
        }
    }

    // faz de novo o for dentro de um for, so que agora em vez de incrementar resultado ele printa a funcao
    // na tela pra ficar mais bonitinho <3 >.<

    printf("A matriz eh: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    // ai a funcao retorna resultado que vai ser printado quando a main chamar
    return resultado;
}
int pegaMatriz()
{
    // declarando a matriz 3x3
    int mat[3][3],i,j;
// pegando o input do usuario, cada posicao vai ser printada na tela
    for(i=0;i<3;i++){
        for (j = 0; j < 3; j++)
        {
            printf ("\nPosicao[%d][%d] = ", i, j);
            scanf ("%d", &mat[ i ][ j ]);
        }
        
    }

    // calcula a diagonal para quando essa funcao ser chamada ela ja retornar direto
    return calculaDiagonal(mat);
}

int main(void){
    // top

    printf("resultado = %d \n ",pegaMatriz());
}