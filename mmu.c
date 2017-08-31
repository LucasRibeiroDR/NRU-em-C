#include "mmu.h"
#include "MemoriaLogica.h"
#include "MemoriaFisica.h"


void controleMMU( int enderecofake , int instrucao , Memoria* m , int i , MemoriaF* f)
{

    int  enderecooriginal = adicionarMF(f, instrucao);
     m->matriz[i][2] = enderecooriginal;

}


int escaneamento(MemoriaF* f)
{
    int i;
    int bits[MAX2];

    for(i = 0 ; i< MAX2 ; i++)
    {
        bits[i] = (f->matrizF[i][1]) / 1000000;
    }
    for(i = 0 ; i<MAX2 ; i++)
    {
        if(bits[i]== 0)
        {
            return i;
        }
    }
    for(i = 0 ; i<MAX2 ; i++)
    {
        if(bits[i]== 10)
        {
            return i;
        }
    }
     for(i = 0 ; i<MAX2 ; i++)
    {

        if(bits[i]== 1)
        {
            return i;
        }
    }
    for(i = 0 ; i<MAX2 ; i++)
    {
        if(bits[i]== 11)
        {
            return i;
        }
    }
    return -1;

}



