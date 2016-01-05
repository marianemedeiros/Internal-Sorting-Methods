// biblioteca dos métodos de ordenação.
#include <stdio.h>
#include <stdlib.h>

int maior(int *vet, int tam, long long int *comparacoes){
int i; int maior = 0, indice = 0;
	for(i = 0; i < tam; i++){
		(*comparacoes)++;
		if(vet[i] > maior){
			maior = vet[i];
			indice = i;	
		}
	}
return indice;
}

void troca(int* i, int* j){
int  aux = *i;
	*i = *j;
	*j = aux;
}

void buble(int* vet, int tam, long long int *comparacoes, long long int *trocas){
int i, j;
    for(i = tam ; i > 0 ; i--){
        for(j = 0; j < i-1; j++){
			(*comparacoes)++;
            if(vet[j] > vet[j+1]){	    
            troca(&vet[j], &vet[j+1]);
				(*trocas)++; 
			}
		}
		
	}
}

void bubleMelhorado(int* vet, int tam, long long int* comp, long long int* trocas){
    int i,j,trc = 0 ;

    for(i = tam ; i > 0 ; i--){
        for(j = 0; j < i-1; j++){
            (*comp)++;
            if(vet[j] > vet[j+1]){	    
            troca(&vet[j], &vet[j+1]);
	    (*trocas)++;
            trc++;
            }
        }

    if(trc == 0 ) break;
    else trc = 0;
    }

}


int selectionR(int* vet, int tam, long long int *comparacoes, long long int *trocas){
	if(tam == 1){
		return 1; // vetor esta ordenado
	}else{
		int m = maior(vet,tam,comparacoes);
			troca(&vet[tam-1],&vet[m]);
			(*trocas)++;			
			return selectionR(vet,tam-1,comparacoes,trocas);
	}
}

void selectionI(int* vet,int tam, long long int*comparacoes, long long int *trocas){
int i,pos_maior;

	for(i = tam-1; i > 0; i--){
	  pos_maior = maior(vet,i,comparacoes);	
	  (*trocas)++;
	  troca(&vet[i],&vet[pos_maior]);	  
	}
}

void insertion(int* vet,int tam, long long int *comparacoes, long long int *trocas){
int i, j;
	for(i = 1; i < tam; i++){
	int aux = vet[i];
	(*trocas)++;
	(*comparacoes)++;
	 	for(j = i - 1; j >= 0 && aux < vet[j]; j--){
				vet[j+1] = vet[j];
				(*trocas)++;
				(*comparacoes)++;
		}
		vet[j+1] = aux;
		(*trocas)++;	
		}
	}

void shell(int* vet, int tam, long long int *comparacoes, long long int *trocas){
int i, h = 1, j, aux;

	while(h < tam){
		h = h * 3 + 1;
	}

	do{
	h = h / 3;
		for(i = h; i < tam; i++){
			aux = vet[i];
			(*trocas)++;
			j = i;
			(*comparacoes)++;
			while(vet[j - h] > aux){
				(*comparacoes)++;
				vet[j] = vet[j - h];
				(*trocas)++;
				j =  j - h;
				if(j < h) break;
			}
			vet[j] = aux;
			(*trocas)++;
		}
	}while(h != 1);

}

void quick(int* vet,int esq,int dir,long long int *comparacoes, long long int *trocas){
int pivo = vet[(esq + dir) / 2];

int i = esq;
int j = dir;

	(*comparacoes)++;
	while(i <= j){
		(*comparacoes)++;
		while(vet[i] < pivo && i < dir){
			(*comparacoes)++;
			i++;
		} 
		(*comparacoes)++;
		while(vet[j] > pivo && j > esq){
			(*comparacoes)++;
			j--;
		} 
		
		if(i <= j){
			troca(&vet[i],&vet[j]);
			(*trocas)++; 
			i++;
			j--;
		}
	}

	if(esq < j){
		quick(vet,esq,j,comparacoes,trocas);
	}

	if(dir > i){
		quick(vet,i,dir,comparacoes,trocas);
	}
}

void merge(int*v, int tamanho, long long int *comparacoes, long long int *trocas){
    int *novo = (int*) calloc(tamanho, sizeof(int));
    int meio = tamanho / 2;
    int i = 0, j = meio, k = 0;
        (*comparacoes)++;
    while((i < meio) && (j < tamanho)){
	   (*comparacoes)++; (*trocas)++;
        if(v[i] < v[j]){
            novo[k++] = v[i++];
        }
        else{
            novo[k++] = v[j++];
        }
    }


    if(i == meio)
        while(j < tamanho){
            (*trocas)++;
            novo[k++] = v[j++];
        }
    else
        while(i < meio){
            (*trocas)++;
            novo[k++] = v[i++];
        }
    for(i = 0; i < tamanho; i++){
        (*trocas)++;
        v[i] = novo[i];
    }
    free(novo);
}

void MergeSort(int*v, int tam, long long int *comparacoes, long long int *trocas ){
    if(tam < 2)return;
    int meio=tam/2;
    MergeSort(v, meio, comparacoes,trocas);
    MergeSort(v+meio, tam-meio, comparacoes, trocas);
    merge(v, tam, comparacoes, trocas);
}

void heap_fy(int* v,int tam,int m,long long int *comparacoes,long long int *trocas){
	int i1 = m * 2;
	int i2 = i1 + 1;
	int maior = m;
	if(i1 < tam && v[i1]  > v[maior]){
		(*comparacoes)++;
		maior = i1;
	}
	if(i2 < tam && v[i2] > v[maior]){
		(*comparacoes)++;		
		maior = i2;
	}
	if( m != maior){
		(*comparacoes)++;
		(*trocas)++;
		troca(&v[m],&v[maior]);
		heap_fy(v,tam,maior,comparacoes,trocas);
	}
}

void buildmax(int* vetor,int tam,long long int *comparacoes,long long int *trocas){
int i;
	for(i = tam / 2; i >= 0; i--){
		heap_fy(vetor,tam,i,comparacoes,trocas);
	}
}

void heap_sort(int* vetor,int tam,long long int *comparacoes,long long int *trocas){
buildmax(vetor,tam,comparacoes,trocas);
int i;
	for(i = tam - 1; i > 0; i--){
		(*trocas)++;
		troca(&vetor[0],&vetor[i]);
		heap_fy(vetor,i,0,comparacoes,trocas);		
	}
}


int maximo(int *vet, int tam, long long int *comparacoes){
	if(tam == 0){
		return vet[tam];
	}else{
		int maior = maximo(vet,tam - 1,comparacoes);
		(*comparacoes)++;
		if(maior > vet[tam]){
			return maior;
		}else{
			return vet[tam];
		}
	}
}

void countisort(int* vetor, int tam, long long int *comparacoes, long long int *trocas){
int maior = maximo(vetor,tam,comparacoes);

int vetorB[maior + 1];
int vetorC[tam];
int i;

for(i = 0; i < maior+1; i++){
	vetorB[i] = 0;
}

for(i = 0; i < tam; i++){
	vetorB[vetor[i]]++;
	vetorC[i] = 0;
}



for(i = 1; i < maior+1; i++){
	vetorB[i] = vetorB[i-1] + vetorB[i];
}


for(i = tam-1; i >= 0; i--){
	vetorB[vetor[i]]--;
	(*trocas)++;	
	vetorC[vetorB[vetor[i]]] = vetor[i];
}

for(i = 0; i < tam; i++){
	(*trocas)++;
	vetor[i] = vetorC[i];
}
}

int z(int n,int k){
	return ((n/k)%10);
}

void radix(int* vet,int tam ,long long int *comparacoes, long long int *trocas){
	int i, k = 1;
	int maior = maximo(vet,tam,comparacoes);
	int* v;
	while(k <= maior){
		int vetorB[maior + 1];
		int vetorC[tam];
		int i;

		for(i = 0; i < maior+1; i++){
			vetorB[i] = 0;
		}

		for(i = 0; i < tam; i++){
			vetorB[z(vet[i],k)]++;
			vetorC[i] = 0;
		}

		for(i = 1; i < maior+1; i++){
			vetorB[i] = vetorB[i-1] + vetorB[i];
		}

		for(i = tam-1; i >= 0; i--){
			vetorB[z(vet[i],k)]--;
			(*trocas)++;	
			vetorC[vetorB[z(vet[i],k)]] = vet[i];
		}

		for(i = 0; i < tam; i++){	
			(*trocas)++;
			vet[i] = vetorC[i];
		}

	k *= 10;

	}
}

