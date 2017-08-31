#include <stdio.h>
#include <stdlib.h>
#include "MemoriaLogica.h"
#include "MemoriaFisica.h"


int main()
{
    MemoriaF f;
    Memoria l;
    inicializarMF(&f);
    inicializar_memoria(&l);

    adicionarML(&l , 0 , 11001010 , &f);
    adicionarML(&l , 1 , 11001111 , &f);
    adicionarML(&l , 10 ,10001011 , &f);
    adicionarML(&l , 11, 11010101 , &f);
    adicionarML(&l , 100 , 10101000 , &f);
    adicionarML(&l , 101 , 11111111 , &f);
    adicionarML(&l , 110, 11111111 , &f);
    adicionarML(&l , 1001 , 11010101 , &f);
    adicionarML(&l , 1000 , 11000000 , &f);
    adicionarML(&l , 1010 , 11000000 , &f);

    return 0;
}
