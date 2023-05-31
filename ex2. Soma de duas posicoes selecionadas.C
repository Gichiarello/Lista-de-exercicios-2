/*Giovanni Chiarello 31/05
Finalidade: Soma as duas posiçoes selecionadas no vetor
*/
#include <stdio.h>
#include <locale.h>
#define TAM 8
int main(){
	setlocale(LC_ALL, "portuguese");
	int array[TAM], i;
	int x, y, a=0, b=0, s=0;
	printf("Digite 8 valores:\n");
	for(i=0;i<TAM;i++){
		printf("Insira o %d° numero: ",i+1); scanf("%d", &array[i]);
	}
	printf("\nDigite a posição em que queira selecionar o primeiro numero: "); scanf("%d", &x);
	printf("Digite a posição em que queira selecionar o segundo numero: "); scanf("%d", &y);
	x-=1;
	b-=1;
	for(i=0;i<10;i++){
		if(i==x){
			a=array[i];
		}
		if(i==y){
			b=array[i];
		}
	}
	s = a+b;
	printf("\nA soma dos valores encontrados nas posiçoes %d e %d: %d", x, y, s);
	
}
