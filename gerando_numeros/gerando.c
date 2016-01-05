/*
este algortimo gera randomicamente 1000, 10 000 e 100 000 números, e grava-os em arquivos designados a cada quantidade. 
arq1 = arquivo de 1000 números
arq10 = arquivo de 100 000 números
arq100 = arquivo de 100 000 números
*/ 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void gravar(int* vet, int tamanho, char* nomeArq){
FILE* arq;
int j;

	if(nomeArq == "arq1"){
	  arq = fopen("arq1","wb");
	}else if(nomeArq == "arq10"){
	  arq = fopen("arq10","wb");
	}else if(nomeArq == "arq100"){
	  arq = fopen("arq100","wb");
	}else if(nomeArq == "arqCres"){
	  arq = fopen("arqCres","wb");
	}else if(nomeArq == "arqDecres"){
	  arq = fopen("arqDecres","wb");
	}
			if(!arq){
		          perror("Erro na abertura do arquivo");
			  exit(1);			
			}
			for(j = 0; j < tamanho; j++){
				fprintf(arq,"%d", vet[j]," ");
				fprintf(arq,"%s", "\n"," ");
			}
			fclose(arq);
}

void gera_mil(int* vetor1){
int i;

	srandom(time(NULL));
	for(i = 0; i < 1000; i++){
		vetor1[i] = random() % 100;
	}
	gravar(vetor1,1000,"arq1");
}

void gera_dezmil(int* vetor10){
int i;
	srandom(time(NULL));
	for(i = 0; i < 10000; i++){
		vetor10[i] = random() % 100;
	}
	gravar(vetor10,10000,"arq10");
}

void gera_cemmil(int* vetor100){
int i;
	srandom(time(NULL));
	for(i = 0; i < 100000; i++){
		vetor100[i] = random() % 100;
	}
	gravar(vetor100,100000,"arq100");
}

void gera_milCres(int* vetor1){
int i;
	for(i = 0; i < 1000; i++){
		vetor1[i] = i;
	}
	gravar(vetor1,1000,"arqCres");
}

void gera_milDecres(int* vetor1){
int i, j=0;
	for(i = 1000; i > 0; i--,j++){
		vetor1[j] = i;
	}
	gravar(vetor1,1000,"arqDecres");
}

int main(){
int vetorMIL[1000];
int vetorDEZMIL[10000];
int vetorCEMMIL[100000];
int vetorCres[100000];
int vetorDecres[100000];

gera_mil(vetorMIL);
gera_dezmil(vetorDEZMIL);
gera_cemmil(vetorCEMMIL);
gera_milCres(vetorCres);
gera_milDecres(vetorDecres);

}
