CC=gcc
all: matrix PluGranDen

PluGranDen: PluGranDen.c
	$(CC) -o PluGranDen -std=c99 PluGranDen.c -I.
matrix: matrix.c
	$(CC) -o matrix -std=c99 matrix.c -I. 
















