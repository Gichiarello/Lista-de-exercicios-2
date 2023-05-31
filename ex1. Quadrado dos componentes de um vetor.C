/*Giovanni Chiarello 31/05
Finalidade: calcula o quadrado de todos os componentes dentro de um vetor
*/
#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "portuguese");
	int array[10], i;
	float quadrado[10];
	printf("Digite 10 valores Reais:\n");
	for(i=0;i<10;i++){
		printf("Insira o %d° numero: ",i+1); scanf("%d", &array[i]);
	}
	for(i=0;i<10;i++){
		array[i]= array[i]*array[i];
		quadrado[i]= array[i];
	}
	
	printf("O quadrado de todos os numeros inseridos:\n");
	for(i=0;i<10;i++){
		printf("%.02f\n", quadrado[i]);
	}
}
