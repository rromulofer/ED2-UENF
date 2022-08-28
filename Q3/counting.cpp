#include <stdio.h>
#include <string.h>
#define TAM 10
 
/*
elementos: o elemento inteiro de entrada a ser ordenado
n: tamanho da entrada
k: intervalo desejado 
*/
void countsort(int elementos[], int n, int k)
{
    // cria um array inteiro de tamanho `n` para armazenar o array ordenado
    int output[n];
 
    // cria um array inteiro de tamanho `k + 1`, inicializado por todo zero
    int freq[k + 1];
    memset(freq, 0, sizeof(freq));
 
    // 1. Usando o valor de cada item na matriz de entrada como um índice,
    // armazena a contagem de cada inteiro em `freq []`
    for (int i = 0; i < n; i++) {
        freq[elementos[i]]++;
    }
 
    /// 2. Calcula o índice inicial para cada número inteiro
    int total = 0;
    for (int i = 0; i < k + 1; i++)
    {
        int oldCount = freq[i];
        freq[i] = total;
        total += oldCount;
    }
 
    // 3. Copie para a matriz de saída, preservando a ordem das entradas com chaves iguais
    for (int i = 0; i < n; i++)
    {
        output[freq[elementos[i]]] = elementos[i];
        freq[elementos[i]]++;
    }
 
    // copia o array de saída de volta para o array de entrada
    for (int i = 0; i < n; i++) {
        elementos[i] = output[i];
    }
}
 
int main()
{
    int elementos[] = {9, 20, 134, 2, 15, 1, 52, 84, 1250, 7};
    int i = 0;
    int n = sizeof(elementos) / sizeof(elementos[0]);

	printf("- - - - - - - - - - CountingSort - - - - - - - - - -");
//	printf("\nDigite os elementos que deseja ordenar: \n");
// 
//	for (i = 0; i < TAM; i++) {
// 		scanf("%d", &elementos[i]);
//	}
 
	printf("\nOrdem dos elementos antes da ordenacao: \n");
	printf("|");
	for (i = 0; i < TAM; i++) {
 		printf(" %d ", elementos[i]);
	}
	printf("|\n");

    // intervalo de elementos da matriz
    // ex: de 0 a 99999
    int k = 99999;
 
    countsort(elementos, n, k);
 
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
