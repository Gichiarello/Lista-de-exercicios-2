#include <stdio.h>
#include <locale.h>
#define TAM 15
int main(){
	setlocale(LC_ALL, "portuguese");
	float array[TAM];
	float media, soma=0.0;
	int i;
	printf("Digite as 15 notas dos alunos:\n");
	for(i=0;i<TAM;i++){
		printf("Insira a %dª nota: ",i+1); scanf("%f", &array[i]);
	}
	for(i=0;i<TAM;i++){
		soma+=array[i];
	}
	media = soma/TAM;
	
	printf("\nA média das notas: %.2f", media);
	
	return 0;
}
