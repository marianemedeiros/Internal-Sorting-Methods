#include "metodos_de_ordenacao.h"
#include "lendo.h"
#include <time.h>
#include <stdlib.h>
#define CLOCKTYPE CLOCK_MONOTONIC

int main(){
/* declaração da variáveis usadas no programa */
double tempo;
int vetor[1000];
int vetor10[10000];
int vetor100[100000];
long long int trocas = 0; 
long long int comparacoes = 0;
/* time */
struct timespec tsi, tsf;


printf("----------------------------------------------------- BUBLE SORT ----------------------------------------------------------------------\n");


/* Importando os valores. */
importar(vetor,1000,"arq1");
importar(vetor10,10000,"arq10");
importar(vetor100,100000,"arq100");

/* informações para um vetor de mil elementors*/
clock_gettime(CLOCKTYPE, &tsi);
buble(vetor,1000,&comparacoes,&trocas);
clock_gettime(CLOCKTYPE, &tsf);
printf("***** Arquivo de 1000 elementos *****\n");
double elaps_s = difftime(tsf.tv_sec, tsi.tv_sec);
long elaps_ns = tsf.tv_nsec - tsi.tv_nsec;
printf("Tempo : %lf s", (elaps_s + ((double)elaps_ns) / 1.0e9));
informacoes(trocas, comparacoes);


/* informações para um vetor de dez mil elementos*/
trocas = 0; comparacoes = 0; tempo = 0.0;
clock_gettime(CLOCKTYPE, &tsi);
buble(vetor10,10000,&comparacoes,&trocas);
clock_gettime(CLOCKTYPE, &tsf);
printf("\n***** Arquivo de 10 000 elementos *****\n");
elaps_s = difftime(tsf.tv_sec, tsi.tv_sec);
elaps_ns = tsf.tv_nsec - tsi.tv_nsec;
printf("Tempo : %lf s", (elaps_s + ((double)elaps_ns) / 1.0e9));
informacoes(trocas, comparacoes);

/* informações para um vetor de cem mil elementos*/
trocas = 0; comparacoes = 0; tempo = 0.0;
clock_gettime(CLOCKTYPE, &tsi);
buble(vetor100,100000,&comparacoes,&trocas);
clock_gettime(CLOCKTYPE, &tsf);
printf("\n***** Arquivo de 100 000 elementos *****\n");
elaps_s = difftime(tsf.tv_sec, tsi.tv_sec);
elaps_ns = tsf.tv_nsec - tsi.tv_nsec;
printf("Tempo : %lf s", (elaps_s + ((double)elaps_ns) / 1.0e9));
informacoes(trocas, comparacoes);



printf("---------------------------------------------------------------------------------------------------------------------------------------\n");

printf("----------------------------------------------------- BUBLE SORT MELHORADO ----------------------------------------------------------------------\n");


/* Importando os valores. */
importar(vetor,1000,"arq1");
importar(vetor10,10000,"arq10");
importar(vetor100,100000,"arq100");

/* informações para um vetor de mil elementors*/
trocas = 0; comparacoes = 0;
clock_gettime(CLOCKTYPE, &tsi);
bubleMelhorado(vetor,1000,&comparacoes,&trocas);
clock_gettime(CLOCKTYPE, &tsf);
printf("***** Arquivo de 1000 elementos *****\n");
elaps_s = difftime(tsf.tv_sec, tsi.tv_sec);
elaps_ns = tsf.tv_nsec - tsi.tv_nsec;
printf("Tempo : %lf s", (elaps_s + ((double)elaps_ns) / 1.0e9));
informacoes(trocas, comparacoes);



/* informações para um vetor de dez mil elementos*/
trocas = 0; comparacoes = 0; tempo = 0.0;
clock_gettime(CLOCKTYPE, &tsi);
bubleMelhorado(vetor10,10000,&comparacoes,&trocas);
clock_gettime(CLOCKTYPE, &tsf);
printf("\n***** Arquivo de 10 000 elementos *****\n");
elaps_s = difftime(tsf.tv_sec, tsi.tv_sec);
elaps_ns = tsf.tv_nsec - tsi.tv_nsec;
printf("Tempo : %lf s", (elaps_s + ((double)elaps_ns) / 1.0e9));
informacoes(trocas, comparacoes);

/* informações para um vetor de cem mil elementos*/
trocas = 0; comparacoes = 0; tempo = 0.0;
clock_gettime(CLOCKTYPE, &tsi);
bubleMelhorado(vetor100,100000,&comparacoes,&trocas);
clock_gettime(CLOCKTYPE, &tsf);
printf("\n***** Arquivo de 100 000 elementos *****\n");
elaps_s = difftime(tsf.tv_sec, tsi.tv_sec);
elaps_ns = tsf.tv_nsec - tsi.tv_nsec;
printf("Tempo : %lf s", (elaps_s + ((double)elaps_ns) / 1.0e9));
informacoes(trocas, comparacoes);

printf("---------------------------------------------------------------------------------------------------------------------------------------\n");


printf("---------------------------------------------------- SELECTION SORT -------------------------------------------------------------------\n");

/* Importando os valores. */
importar(vetor,1000,"arq1");
importar(vetor10,10000,"arq10");
importar(vetor100,100000,"arq100");

/* informações para um vetor de mil elementos*/
trocas = 0; comparacoes = 0; tempo = 0.0;
clock_gettime(CLOCKTYPE, &tsi);
selectionI(vetor,1000,&comparacoes,&trocas);
clock_gettime(CLOCKTYPE, &tsf);
printf("\n***** Arquivo de 1000 elementos *****\n");
elaps_s = difftime(tsf.tv_sec, tsi.tv_sec);
elaps_ns = tsf.tv_nsec - tsi.tv_nsec;
printf("Tempo : %lf s", (elaps_s + ((double)elaps_ns) / 1.0e9));
informacoes(trocas,comparacoes);

/* informações para um vetor de dez mil elementos*/
trocas = 0; comparacoes = 0; tempo = 0.0;
clock_gettime(CLOCKTYPE, &tsi);
selectionI(vetor10,10000,&comparacoes,&trocas);
clock_gettime(CLOCKTYPE, &tsf);
printf("\n***** Arquivo de 10 000 elementos *****\n");
elaps_s = difftime(tsf.tv_sec, tsi.tv_sec);
elaps_ns = tsf.tv_nsec - tsi.tv_nsec;
printf("Tempo : %lf s", (elaps_s + ((double)elaps_ns) / 1.0e9));
informacoes(trocas, comparacoes);


/* informações para um vetor de cem mil elementos*/
trocas = 0; comparacoes = 0; tempo = 0.0;
clock_gettime(CLOCKTYPE, &tsi);
selectionI(vetor100,100000,&comparacoes,&trocas);
clock_gettime(CLOCKTYPE, &tsf);
printf("\n***** Arquivo de 100 000 elementos *****\n");
elaps_s = difftime(tsf.tv_sec, tsi.tv_sec);
elaps_ns = tsf.tv_nsec - tsi.tv_nsec;
printf("Tempo : %lf s", (elaps_s + ((double)elaps_ns) / 1.0e9));
informacoes(trocas, comparacoes);


printf("---------------------------------------------------------------------------------------------------------------------------------------\n");

printf("---------------------------------------------------- SELECTION SORT RECURSIVO-------------------------------------------------------------------\n");

/* Importando os valores. */
importar(vetor,1000,"arq1");
importar(vetor10,10000,"arq10");
importar(vetor100,100000,"arq100");

/* informações para um vetor de mil elementos*/
trocas = 0; comparacoes = 0; tempo = 0.0;
clock_gettime(CLOCKTYPE, &tsi);
selectionR(vetor,1000,&comparacoes,&trocas);
clock_gettime(CLOCKTYPE, &tsf);
printf("\n***** Arquivo de 1000 elementos *****\n");
elaps_s = difftime(tsf.tv_sec, tsi.tv_sec);
elaps_ns = tsf.tv_nsec - tsi.tv_nsec;
printf("Tempo : %lf s", (elaps_s + ((double)elaps_ns) / 1.0e9));
informacoes(trocas,comparacoes);

/* informações para um vetor de dez mil elementos*/
trocas = 0; comparacoes = 0; tempo = 0.0;
clock_gettime(CLOCKTYPE, &tsi);
selectionR(vetor10,10000,&comparacoes,&trocas);
clock_gettime(CLOCKTYPE, &tsf);
printf("\n***** Arquivo de 10 000 elementos *****\n");
elaps_s = difftime(tsf.tv_sec, tsi.tv_sec);
elaps_ns = tsf.tv_nsec - tsi.tv_nsec;
printf("Tempo : %lf s", (elaps_s + ((double)elaps_ns) / 1.0e9));
informacoes(trocas, comparacoes);


/* informações para um vetor de cem mil elementos*/
trocas = 0; comparacoes = 0; tempo = 0.0;
clock_gettime(CLOCKTYPE, &tsi);
selectionR(vetor100,100000,&comparacoes,&trocas);
clock_gettime(CLOCKTYPE, &tsf);
printf("\n***** Arquivo de 100 000 elementos *****\n");
elaps_s = difftime(tsf.tv_sec, tsi.tv_sec);
elaps_ns = tsf.tv_nsec - tsi.tv_nsec;
printf("Tempo : %lf s", (elaps_s + ((double)elaps_ns) / 1.0e9));
informacoes(trocas, comparacoes);


printf("---------------------------------------------------------------------------------------------------------------------------------------\n");


printf("---------------------------------------------------- INSERTION SORT -------------------------------------------------------------------\n");

/* Importando os valores. */
importar(vetor,1000,"arq1");
importar(vetor10,10000,"arq10");
importar(vetor100,100000,"arq100");

/* informações para um vetor de mil elementos*/
trocas = 0; comparacoes = 0; tempo = 0.0;
clock_gettime(CLOCKTYPE, &tsi);
insertion(vetor,1000,&comparacoes,&trocas);
clock_gettime(CLOCKTYPE, &tsf);
printf("\n***** Arquivo de 1000 elementos *****\n");
elaps_s = difftime(tsf.tv_sec, tsi.tv_sec);
elaps_ns = tsf.tv_nsec - tsi.tv_nsec;
printf("Tempo : %lf s", (elaps_s + ((double)elaps_ns) / 1.0e9));
informacoes(trocas,comparacoes);


/* informações para um vetor de dez mil elementos*/
trocas = 0; comparacoes = 0; tempo = 0.0;
clock_gettime(CLOCKTYPE, &tsi);
insertion(vetor10,10000,&comparacoes,&trocas);
clock_gettime(CLOCKTYPE, &tsf);
printf("\n***** Arquivo de 10 000 elementos *****\n");
elaps_s = difftime(tsf.tv_sec, tsi.tv_sec);
elaps_ns = tsf.tv_nsec - tsi.tv_nsec;
printf("Tempo : %lf s", (elaps_s + ((double)elaps_ns) / 1.0e9));
informacoes(trocas, comparacoes);


/* informações para um vetor de cem mil elementos*/
trocas = 0; comparacoes = 0; tempo = 0.0;
clock_gettime(CLOCKTYPE, &tsi);
insertion(vetor100,100000,&comparacoes,&trocas);
clock_gettime(CLOCKTYPE, &tsf);
printf("\n***** Arquivo de 100 000 elementos *****\n");
elaps_s = difftime(tsf.tv_sec, tsi.tv_sec);
elaps_ns = tsf.tv_nsec - tsi.tv_nsec;
printf("Tempo : %lf s", (elaps_s + ((double)elaps_ns) / 1.0e9));
informacoes(trocas, comparacoes);

printf("---------------------------------------------------------------------------------------------------------------------------------------\n");


printf("---------------------------------------------------- SHELL SORT -------------------------------------------------------------------\n");

/* Importando os valores. */
importar(vetor,1000,"arq1");
importar(vetor10,10000,"arq10");
importar(vetor100,100000,"arq100");

/* informações para um vetor de mil elementos*/
trocas = 0; comparacoes = 0; tempo = 0.0;
clock_gettime(CLOCKTYPE, &tsi);
shell(vetor,1000,&comparacoes,&trocas);
clock_gettime(CLOCKTYPE, &tsf);
printf("\n***** Arquivo de 1000 elementos *****\n");
elaps_s = difftime(tsf.tv_sec, tsi.tv_sec);
elaps_ns = tsf.tv_nsec - tsi.tv_nsec;
printf("Tempo : %lf s", (elaps_s + ((double)elaps_ns) / 1.0e9));
informacoes(trocas,comparacoes);


/* informações para um vetor de dez mil elementos*/
trocas = 0; comparacoes = 0; tempo = 0.0;
clock_gettime(CLOCKTYPE, &tsi);
shell(vetor10,10000,&comparacoes,&trocas);
clock_gettime(CLOCKTYPE, &tsf);
printf("\n***** Arquivo de 10 000 elementos *****\n");
elaps_s = difftime(tsf.tv_sec, tsi.tv_sec);
elaps_ns = tsf.tv_nsec - tsi.tv_nsec;
printf("Tempo : %lf s", (elaps_s + ((double)elaps_ns) / 1.0e9));
informacoes(trocas, comparacoes);


/* informações para um vetor de cem mil elementos*/
trocas = 0; comparacoes = 0; tempo = 0.0;
clock_gettime(CLOCKTYPE, &tsi);
shell(vetor100,100000,&comparacoes,&trocas);
clock_gettime(CLOCKTYPE, &tsf);
printf("\n***** Arquivo de 100 000 elementos *****\n");
elaps_s = difftime(tsf.tv_sec, tsi.tv_sec);
elaps_ns = tsf.tv_nsec - tsi.tv_nsec;
printf("Tempo : %lf s", (elaps_s + ((double)elaps_ns) / 1.0e9));
informacoes(trocas, comparacoes);


printf("---------------------------------------------------------------------------------------------------------------------------------------\n");


printf("---------------------------------------------------- QUICK SORT -------------------------------------------------------------------\n");

/* Importando os valores. */
importar(vetor,1000,"arq1");
importar(vetor10,10000,"arq10");
importar(vetor100,100000,"arq100");

/* informações para um vetor de mil elementos*/
trocas = 0; comparacoes = 0; tempo = 0.0;
clock_gettime(CLOCKTYPE, &tsi);
quick(vetor,0,1000 - 1,&comparacoes,&trocas);
clock_gettime(CLOCKTYPE, &tsf);
printf("\n***** Arquivo de 1000 elementos *****\n");
elaps_s = difftime(tsf.tv_sec, tsi.tv_sec);
elaps_ns = tsf.tv_nsec - tsi.tv_nsec;
printf("Tempo : %lf s", (elaps_s + ((double)elaps_ns) / 1.0e9));
informacoes(trocas,comparacoes);


/* informações para um vetor de dez mil elementos*/
trocas = 0; comparacoes = 0; tempo = 0.0;
clock_gettime(CLOCKTYPE, &tsi);
quick(vetor10,0,10000 - 1,&comparacoes,&trocas);
clock_gettime(CLOCKTYPE, &tsf);
printf("\n***** Arquivo de 10 000 elementos *****\n");
elaps_s = difftime(tsf.tv_sec, tsi.tv_sec);
elaps_ns = tsf.tv_nsec - tsi.tv_nsec;
printf("Tempo : %lf s", (elaps_s + ((double)elaps_ns) / 1.0e9));
informacoes(trocas, comparacoes);


/* informações para um vetor de cem mil elementos*/
trocas = 0; comparacoes = 0; tempo = 0.0;
clock_gettime(CLOCKTYPE, &tsi);
quick(vetor100,0,100000 - 1,&comparacoes,&trocas);
clock_gettime(CLOCKTYPE, &tsf);
printf("\n***** Arquivo de 100 000 elementos *****\n");
elaps_s = difftime(tsf.tv_sec, tsi.tv_sec);
elaps_ns = tsf.tv_nsec - tsi.tv_nsec;
printf("Tempo : %lf s", (elaps_s + ((double)elaps_ns) / 1.0e9));
informacoes(trocas, comparacoes);


printf("---------------------------------------------------------------------------------------------------------------------------------------\n");


printf("---------------------------------------------------- MERGE SORT -------------------------------------------------------------------\n");

/* Importando os valores. */
importar(vetor,1000,"arq1");
importar(vetor10,10000,"arq10");
importar(vetor100,100000,"arq100");

/* informações para um vetor de mil elementos*/
trocas = 0; comparacoes = 0; tempo = 0.0;
clock_gettime(CLOCKTYPE, &tsi);
MergeSort(vetor,1000,&comparacoes,&trocas);
clock_gettime(CLOCKTYPE, &tsf);
printf("\n***** Arquivo de 1000 elementos *****\n");
elaps_s = difftime(tsf.tv_sec, tsi.tv_sec);
elaps_ns = tsf.tv_nsec - tsi.tv_nsec;
printf("Tempo : %lf s", (elaps_s + ((double)elaps_ns) / 1.0e9));
informacoes(trocas,comparacoes);


/* informações para um vetor de dez mil elementos*/
trocas = 0; comparacoes = 0; tempo = 0.0;
clock_gettime(CLOCKTYPE, &tsi);
MergeSort(vetor10,10000,&comparacoes,&trocas);
clock_gettime(CLOCKTYPE, &tsf);
printf("\n***** Arquivo de 10 000 elementos *****\n");
elaps_s = difftime(tsf.tv_sec, tsi.tv_sec);
elaps_ns = tsf.tv_nsec - tsi.tv_nsec;
printf("Tempo : %lf s", (elaps_s + ((double)elaps_ns) / 1.0e9));
informacoes(trocas, comparacoes);


/* informações para um vetor de cem mil elementos*/
trocas = 0; comparacoes = 0; tempo = 0.0;
clock_gettime(CLOCKTYPE, &tsi);
MergeSort(vetor100,100000,&comparacoes,&trocas);
clock_gettime(CLOCKTYPE, &tsf);
printf("\n***** Arquivo de 100 000 elementos *****\n");
elaps_s = difftime(tsf.tv_sec, tsi.tv_sec);
elaps_ns = tsf.tv_nsec - tsi.tv_nsec;
printf("Tempo : %lf s", (elaps_s + ((double)elaps_ns) / 1.0e9));
informacoes(trocas, comparacoes);


printf("---------------------------------------------------------------------------------------------------------------------------------------\n");


printf("---------------------------------------------------- HEAP SORT -------------------------------------------------------------------\n");

/* Importando os valores. */
importar(vetor,1000,"arq1");
importar(vetor10,10000,"arq10");
importar(vetor100,100000,"arq100");

/* informações para um vetor de mil elementos*/
trocas = 0; comparacoes = 0; tempo = 0.0;
clock_gettime(CLOCKTYPE, &tsi);
heap_sort(vetor,1000,&comparacoes,&trocas);
clock_gettime(CLOCKTYPE, &tsf);
printf("\n***** Arquivo de 1000 elementos *****\n");
elaps_s = difftime(tsf.tv_sec, tsi.tv_sec);
elaps_ns = tsf.tv_nsec - tsi.tv_nsec;
printf("Tempo : %lf s", (elaps_s + ((double)elaps_ns) / 1.0e9));
informacoes(trocas,comparacoes);


/* informações para um vetor de dez mil elementos*/
trocas = 0; comparacoes = 0; tempo = 0.0;
clock_gettime(CLOCKTYPE, &tsi);
heap_sort(vetor10,10000,&comparacoes,&trocas);
clock_gettime(CLOCKTYPE, &tsf);
printf("\n***** Arquivo de 10 000 elementos *****\n");
elaps_s = difftime(tsf.tv_sec, tsi.tv_sec);
elaps_ns = tsf.tv_nsec - tsi.tv_nsec;
printf("Tempo : %lf s", (elaps_s + ((double)elaps_ns) / 1.0e9));
informacoes(trocas, comparacoes);


/* informações para um vetor de cem mil elementos*/
trocas = 0; comparacoes = 0; tempo = 0.0;
clock_gettime(CLOCKTYPE, &tsi);
heap_sort(vetor100,100000,&comparacoes,&trocas);
clock_gettime(CLOCKTYPE, &tsf);
printf("\n***** Arquivo de 100 000 elementos *****\n");
elaps_s = difftime(tsf.tv_sec, tsi.tv_sec);
elaps_ns = tsf.tv_nsec - tsi.tv_nsec;
printf("Tempo : %lf s", (elaps_s + ((double)elaps_ns) / 1.0e9));
informacoes(trocas, comparacoes);


printf("---------------------------------------------------------------------------------------------------------------------------------------\n");


printf("---------------------------------------------------- COUNTING SORT -------------------------------------------------------------------\n");

/* Importando os valores. */
importar(vetor,1000,"arq1");
importar(vetor10,10000,"arq10");
importar(vetor100,100000,"arq100");

/* informações para um vetor de mil elementos*/
trocas = 0; comparacoes = 0; tempo = 0.0;
clock_gettime(CLOCKTYPE, &tsi);
countisort(vetor,1000,&comparacoes,&trocas);
clock_gettime(CLOCKTYPE, &tsf);
printf("\n***** Arquivo de 1000 elementos *****\n");
elaps_s = difftime(tsf.tv_sec, tsi.tv_sec);
elaps_ns = tsf.tv_nsec - tsi.tv_nsec;
printf("Tempo : %lf s", (elaps_s + ((double)elaps_ns) / 1.0e9));
informacoes(trocas,comparacoes);


/* informações para um vetor de dez mil elementos*/
trocas = 0; comparacoes = 0; tempo = 0.0;
clock_gettime(CLOCKTYPE, &tsi);
countisort(vetor10,10000,&comparacoes,&trocas);
clock_gettime(CLOCKTYPE, &tsf);
printf("\n***** Arquivo de 10 000 elementos *****\n");
elaps_s = difftime(tsf.tv_sec, tsi.tv_sec);
elaps_ns = tsf.tv_nsec - tsi.tv_nsec;
printf("Tempo : %lf s", (elaps_s + ((double)elaps_ns) / 1.0e9));
informacoes(trocas, comparacoes);


/* informações para um vetor de cem mil elementos*/
trocas = 0; comparacoes = 0; tempo = 0.0;
clock_gettime(CLOCKTYPE, &tsi);
countisort(vetor100,100000,&comparacoes,&trocas);
clock_gettime(CLOCKTYPE, &tsf);
printf("\n***** Arquivo de 100 000 elementos *****\n");
elaps_s = difftime(tsf.tv_sec, tsi.tv_sec);
elaps_ns = tsf.tv_nsec - tsi.tv_nsec;
printf("Tempo : %lf s", (elaps_s + ((double)elaps_ns) / 1.0e9));
informacoes(trocas, comparacoes);


printf("---------------------------------------------------------------------------------------------------------------------------------------\n");


printf("---------------------------------------------------- RADIX SORT -------------------------------------------------------------------\n");

/* Importando os valores. */
importar(vetor,1000,"arq1");
importar(vetor10,10000,"arq10");
importar(vetor100,100000,"arq100");

/* informações para um vetor de mil elementos*/
trocas = 0; comparacoes = 0; tempo = 0.0;
clock_gettime(CLOCKTYPE, &tsi);
radix(vetor,1000,&comparacoes,&trocas);
clock_gettime(CLOCKTYPE, &tsf);
printf("\n***** Arquivo de 1000 elementos *****\n");
elaps_s = difftime(tsf.tv_sec, tsi.tv_sec);
elaps_ns = tsf.tv_nsec - tsi.tv_nsec;
printf("Tempo : %lf s", (elaps_s + ((double)elaps_ns) / 1.0e9));
informacoes(trocas,comparacoes);


/* informações para um vetor de dez mil elementos*/
trocas = 0; comparacoes = 0; tempo = 0.0;
clock_gettime(CLOCKTYPE, &tsi);
radix(vetor10,10000,&comparacoes,&trocas);
clock_gettime(CLOCKTYPE, &tsf);
printf("\n***** Arquivo de 10 000 elementos *****\n");
elaps_s = difftime(tsf.tv_sec, tsi.tv_sec);
elaps_ns = tsf.tv_nsec - tsi.tv_nsec;
printf("Tempo : %lf s", (elaps_s + ((double)elaps_ns) / 1.0e9));
informacoes(trocas, comparacoes);


/* informações para um vetor de cem mil elementos*/
trocas = 0; comparacoes = 0; tempo = 0.0;
clock_gettime(CLOCKTYPE, &tsi);
radix(vetor100,100000,&comparacoes,&trocas);
clock_gettime(CLOCKTYPE, &tsf);
printf("\n***** Arquivo de 100 000 elementos *****\n");
elaps_s = difftime(tsf.tv_sec, tsi.tv_sec);
elaps_ns = tsf.tv_nsec - tsi.tv_nsec;
printf("Tempo : %lf s", (elaps_s + ((double)elaps_ns) / 1.0e9));
informacoes(trocas, comparacoes);


printf("---------------------------------------------------------------------------------------------------------------------------------------\n");

}
