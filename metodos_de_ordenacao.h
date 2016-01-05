#include <stdio.h>
#include <stdlib.h>


//funções usadas pelos métodos de ordenação(maximo, usada no countisort, maior, usado no selection, e troca usado na maioria dos métodos). 
int maximo(int *vet, int tam, long long int *comparacoes);
int maior(int *vet, int tam, long long int *comparacoes);
void troca(int* i, int* j);
int z(int n,int k);

// metodos de ordenação
void buble(int* vet, int tam, long long int *comparacoes, long long int *trocas);
void bubleMelhorado(int* vet, int tam, long long int *comparacoes, long long int *trocas);

int selectionR(int* vet, int tam, long long int *comparacoes, long long int *trocas);
void selectionI(int* vet,int tam, long long int*comparacoes, long long int*trocas);

void insertion(int* vet,int tam, long long int *comparacoes, long long int *trocas);

void shell(int* vet, int tam, long long int *comparacoes, long long int *trocas);

void quick(int* vet,int esq,int dir,long long int *comparacoes, long long int *trocas);

void merge(int*v, int tamanho, long long int *comparacoes, long long int *trocas);
void MergeSort(int*v, int tam, long long int *comparacoes, long long int *trocas);

void heap_fy(int* v,int tam,int m,long long int *comparacoes,long long int *trocas);
void buildmax(int* vetor,int tam,long long int *comparacoes,long long int *trocas);
void heap_sort(int* vetor,int tam,long long int *comparacoes,long long int *trocas);

void countisort(int* vetor, int tam, long long int *comparacoes, long long int *trocas);

void radix(int* vet,int tam ,long long int *comparacoes, long long int *trocas);
