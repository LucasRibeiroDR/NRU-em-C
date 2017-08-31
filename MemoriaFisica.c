#include "MemoriaFisica.h"
#include "mmu.h"
void inicializarMF(MemoriaF* f)
{
    int i;
    for( i=0 ; i < MAX2 ; i++)
    {
        char b[10] = { 0 , 0 , 0 ,0 ,0,0 ,0 ,0 ,0 ,0};

        int num = atoi(itoa(i,b,2));

        f->matrizF[i][0] = num;

    }
    for ( i = 0 ; i < MAX2 ; i++)
    {
        f->matrizF[i][1] = -2;
    }

}

int verificarEspaco(MemoriaF* f)
{
    int i;
    for(i=0; i < MAX2 ; i++)
    {
        ///printf("Instruçãp na Memoria fisica atual: %d" , f->matrizF[i][1]);
        if(f->matrizF[i][1] == -2)
        {
            return i;
        }
    }
    return -1;
}

int adicionarMF(MemoriaF* f , int instrucao)
{
    int aux = verificarEspaco(f);
    int linhaRetirada;
    if(aux == -1 )
    {
        printf("Memoria cheia");
        linhaRetirada = escaneamento(f);
        f->matrizF[linhaRetirada][1] = instrucao;
        return 0;
    }
    else
    {
        f->matrizF[aux][1] = instrucao;
        return f->matrizF[aux][0];
    }
}



