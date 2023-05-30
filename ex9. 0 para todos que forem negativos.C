#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "portuguese");
	int array[10], i;
	printf("Digite 10 valores inteiros:\n");
	for(i=0;i<10;i++){
		printf("Insira o %d° numero: ",i+1); scanf("%d", &array[i]);
	}
	for(i=0;i<10;i++){
		if(array[i]<0){
			array[i]=0;
		}
	}
	for(i=0;i<10;i++){
		printf("\n%d",array[i]);
	}
}
