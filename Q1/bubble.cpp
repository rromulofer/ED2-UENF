#include <stdio.h>
#include <stdlib.h>
#define TAM 10

void bubblesort(int elementos[]){
	// Algoritmo de ordenação Bubblesort:
	int i=0, aux=0, cont=0;
	for (cont = 1; cont < TAM; cont++) {
   		for (i = 0; i < TAM - 1; i++) {
     		if (elementos[i] > elementos[i + 1]) {
       			aux = elementos[i];
       			elementos[i] = elementos[i + 1];
       			elementos[i + 1] = aux;
     }
   }
 }
}

int main(){
	
	int elementos[] = {9, 20, 134, 2, 15, 1, 52, 84, 1250, 7};
	int i, aux, cont;
	printf("- - - - - - - - - - BubbleSort - - - - - - - - - -");
//	printf("\nDigite os elementos que deseja ordenar: \n");
// 
//	for (i = 0; i < TAM; i++) {
//		scanf("%d", &elementos[i]);
// 	}
 
	printf("\nOrdem dos elementos antes da ordenacao: \n");
	printf("|");
	for (i = 0; i < TAM; i++) {
		printf(" %d ", elementos[i]);
	}
	printf("|\n");

	bubblesort(elementos);
 
	printf("\nOrdem dos elementos apos ordenacao: \n");
	printf("|");

	for (i = 0; i < TAM; i++) {
		printf(" %d ", elementos[i]);
	}

	printf("|\n\n");
	printf("- - - - - - - - - - - - FIM - - - - - - - - - - - -");
	printf("\n");
	
	return 0;
}
