#ifndef MEMORIALOGICA_H_INCLUDED
#define MEMORIALOGICA_H_INCLUDED
#include "MemoriaFisica.h"
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


#define MAX 16

typedef struct
{
    int matriz[MAX][3];

}Memoria;

void inicializar_memoria(Memoria* );
int adicionarML(Memoria*, int , int , MemoriaF* );

#endif // MEMORIALOGICA_H_INCLUDED
