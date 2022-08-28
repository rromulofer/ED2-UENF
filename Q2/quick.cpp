#include <stdio.h>
#include <stdlib.h>
#define MAX 10

// Protótipo da função de ordenação
// void quick_sort(int *a, int left, int right);
 
// Função de Ordenação por Seleção
void quick_sort(int *a, int left, int right) {
    int i, j, x, y;
     
    i = left;
    j = right;
    x = a[(left + right) / 2];
     
    while(i <= j) {
        while(a[i] < x && i < right) {
            i++;
        }
        while(a[j] > x && j > left) {
            j--;
        }
        if(i <= j) {
            y = a[i];
            a[i] = a[j];
            a[j] = y;
            i++;
            j--;
        }
    }
     
    if(j > left) {
        quick_sort(a, left, j);
    }
    if(i < right) {
        quick_sort(a, i, right);
    }
}

int main()
{
	int i, elementos[] = {9, 20, 134, 2, 15, 1, 52, 84, 1250, 7};
 
	printf("- - - - - - - - - - QuickSort - - - - - - - - - -");
//	printf("\nDigite os elementos que deseja ordenar: \n");
// 	for(i = 0; i < MAX; i++){
//  		scanf("%d", &elementos[i]);
// 	}
 
	// Imprime os elementos antes da ordenação
 	printf("\nOrdem dos elementos antes da ordenacao: \n");
 	printf("|");
 	for(i = 0; i < MAX; i++){
  		printf(" %d ", elementos[i]);
 	}
 	printf("|\n");
 
	// Chamada da função que ordena os valores
	quick_sort(elementos, 0, MAX - 1);
 
	// Imprime os valores ordenados
	printf("\nOrdem dos elementos apos ordenacao: \n");
	printf("|");
	for(i = 0; i < MAX; i++)
 	{
  		printf(" %d ", elementos[i]);
	}
 	printf("|\n\n");
 	printf("- - - - - - - - - - - FIM - - - - - - - - - - -\n");
 	
 	system("pause");
 	return 0;
}
