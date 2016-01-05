#!/bin/sh
#Este algoritmo irá gerar os arquivos de 1000, 10 000 e 100 000 elemetos randomicamente.
gcc gerando_numeros/gerando.c -o gera
gcc -c lendo.c -lrt
gcc -c metodos_de_ordenacao.c -lrt
gcc -c aps_parte01.c -lrt
gcc -o aps metodos_de_ordenacao.o lendo.o aps_parte01.o -lrt
./aps
