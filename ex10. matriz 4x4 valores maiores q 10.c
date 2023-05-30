#include <stdio.h>
#include <locale.h>
#define TAM1 5
#define TAM2 5
int main(){
	setlocale(LC_ALL,"portuguese");
	int matriz[TAM1][TAM2], i, j, cont=0;
	
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
            if(matriz[i][j]>10){
            	cont+=1;
			}
        }
    }
    printf("Existem %d numeros maiores que 10", cont);
    return 0;
	
}
