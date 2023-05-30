//crie um programa que leia 6 valores inteiros, em seguida mostre os valores em ordem inversa

#include <stdio.h>
#define TAM 6
int main(){
	
	int array[TAM], i;
	printf("Insira 6 numeros inteiros: \n");
	for (i=0;i<TAM;i++){
		scanf("%d", &array[i]);
	}
	printf("Ordem inversa dos numeros:\n");
	for(i=TAM-1;i>=0;i--){
		printf("%d\n", array[i]);
	}
	
	return 0;
}
