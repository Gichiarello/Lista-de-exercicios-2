//crie um programa que leia 10 valores inteiros, aponte todos os pares e fale quantos s�o

#include <stdio.h>
#include <locale.h>
#define TAM 10
int main(){
	setlocale(LC_ALL, "portuguese");
	int array[TAM], i, cont=0;
	printf("Insira 10 numeros inteiros: \n");
	for (i=0;i<TAM;i++){
		scanf("%d", &array[i]);
	}
	printf("todos os pares escritos e quantos s�o:\n");
	for(i=0;i<TAM;i++){
		if(array[i]%2==0){
			cont+=1;
		    printf("%d\n", array[i]);
	    }
	}
	printf("\n%d pares", cont);
	
	
	return 0;
}
