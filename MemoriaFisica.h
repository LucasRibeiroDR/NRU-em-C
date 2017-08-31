#ifndef MEMORIAFISICA_H_INCLUDED
#define MEMORIAFISICA_H_INCLUDED

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define MAX2 8

typedef struct
{
    int matrizF[MAX2][2];

}MemoriaF;

void inicializarMF(MemoriaF*);
int adicionarMF(MemoriaF *, int instrucao);
int verificarEspaco(MemoriaF *);

#endif // MEMORIAFISICA_H_INCLUDED
