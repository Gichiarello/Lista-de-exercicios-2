/*Giovanni Chiarello 31/05
Finalidade: mostra qual o maior numero de um vetor e a sua posição
*/
#include <stdio.h>
#include <locale.h>
#define TAM 10
int main(){
	setlocale(LC_ALL, "portuguese");
    int array[TAM], maior=0, pos, i;
    for(i=0; i<TAM; i++){
        printf("Digite um valor v[%d]: ", i+1); scanf("%d", &array[i]);
    }
    printf("Maior elemento do vetor:\n");
    for(i=1; i<TAM; i++){
    	if(array[i]>maior){
    		maior=array[i];
    		pos=i+1;
		}
    }
    printf("\nO maior elemento é %d e está na posição %d", maior, pos);

    return 0;
}
