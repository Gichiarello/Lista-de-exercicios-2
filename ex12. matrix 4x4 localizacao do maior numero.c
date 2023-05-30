#include <stdio.h>
#include <locale.h>
#define TAM1 4
#define TAM2 4
int main(){
	setlocale(LC_ALL,"portuguese");
	int matriz[TAM1][TAM2], i, j, maior=0, posI, posJ;
	printf ("\nDigite valor para os elementos da matriz\n\n");
    for ( i=0; i<TAM1; i++ ){
        for ( j=0; j<TAM2; j++ ){
            printf ("\nElemento[%d][%d] = ", i+1, j+1);
            scanf ("%d", &matriz[ i ][ j ]);
        }
    }
    printf("\n\n******************* Saida de Dados ********************* \n\n");
    for ( i=0; i<TAM1; i++ ){
        for ( j=0; j<TAM2; j++ ){
            if(matriz[i][j]>maior){
            	maior = matriz[i][j];
            	posI = i+1;
            	posJ = j+1;
			}
        }
    }
    printf("\nO maior elemento da matriz é %d e esta na pocição %d i, %d j", maior, posI, posJ);
    return 0;
	
}
