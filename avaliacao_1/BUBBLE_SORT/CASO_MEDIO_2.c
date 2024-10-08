#include <stdio.h>
#define TRUE 1
#define FALSE 0
#define TAM 100000

void carrega_vetor_aleatorio(int colecao[], int tamanho); 
void imprime_vetor(int colecao[], int tamanho); 
void bubble_sort(int colecao[], int tamanho); 


void main()
{

    	int arquivo[TAM];
	
	carrega_vetor_aleatorio(arquivo, TAM);
	imprime_vetor(arquivo, TAM);
	bubble_sort(arquivo, TAM);
	imprime_vetor(arquivo, TAM);
}


void carrega_vetor_aleatorio(int colecao[], int tamanho){
	int i; 
	
	srand( (unsigned) time(NULL) );
	for(i=0; i < tamanho; i++){
		colecao[i] = rand() % tamanho;
	}
	
}

void imprime_vetor(int colecao[], int tamanho){
	int i=0;
	for(i=0; i < tamanho; i++){
		printf("%d, ", colecao[i]);
	}
	printf("\n");
}

void bubble_sort(int colecao[], int tamanho){
	int i, j, elemento_auxiliar;
	int trocou = TRUE;
	
	for(i=0; i<tamanho && trocou; i++){
		trocou = FALSE;
		for(j=0; j < tamanho-(1+i); j++){
			if(colecao[j] > colecao[j+1]){
				elemento_auxiliar = colecao[j];
				colecao[j] = colecao[j+1];
				colecao[j+1] = elemento_auxiliar;
				trocou = TRUE;
			}
		}		
	}
}