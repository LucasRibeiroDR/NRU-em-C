#include "mmu.h"
#include "MemoriaLogica.h"

void inicializar_memoria(Memoria* p)
{
    int i;
    for( i=0 ; i < MAX ; i++)
    {
        char b[10] = { 0 , 0 , 0 ,0 ,0,0 ,0 ,0 ,0 ,0};

        int num = atoi(itoa(i,b,2));

        p->matriz[i][0] = num;

    }
    for ( i = 0 ; i < MAX ; i++)
    {
        p->matriz[i][1] = 0;
    }
    for ( i = 0 ; i < MAX ; i++)
    {
        p->matriz[i][2] = -1;
    }

}

int adicionarML(Memoria* p, int enderecofake , int instrucao, MemoriaF* f)
{
    int i;
    for(i=0 ; i < MAX ; i++)
    {
        if(enderecofake == p->matriz[i][0])
        {
            if(p->matriz[i][1] == 0 )
            {
                p->matriz[i][1] = instrucao;
               controleMMU(enderecofake , instrucao, p , i  , f);
                return 0;
            }
            else
            {
                return -1;
            }
        }
    }
    return -1;
}
