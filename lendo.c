#include<stdio.h>
#include<stdlib.h>



void informacoes(long long int trocas, long long int comparacoes){
	printf("\nNúmero de trocas: %lld \n", trocas);
	printf("Número de comparações: %lld\n", comparacoes);
}

void imprimir(int* vetor, int tamanho){
int i;
	for(i = 0; i < tamanho; i++){
		printf("%d ", vetor[i]);
	}
}

void importar(int* vetor, int tamanho, char* nomeArq){
FILE* arq;
int j = 0, numero;
	if(tamanho == 1000){
	  arq = fopen("gerando_numeros/arq1","r+");
	}else if(tamanho == 10000){
	  arq = fopen("gerando_numeros/arq10","r+");
	}else if(tamanho == 100000){
	  arq = fopen("gerando_numeros/arq100","r+");
	}else if(nomeArq == "arqCres"){
	  arq = fopen("gerando_numeros/arqCres","r+");
	}else if(nomeArq == "arqDecres"){
	  arq = fopen("gerando_numeros/arqDecres","r+");
	}

	if(!arq){
	     perror("Erro na leitura do arquivo");
 		exit(1);			
	}else{
		while(!feof(arq)){
			fscanf(arq,"%d", &numero);
			vetor[j] = numero;
			j++;
		}
	    fclose(arq);
     }
}

