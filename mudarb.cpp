#include "mudarb.h"

namespace bry
{
    MudarB::MudarB(int base,int num):base(0),num(0)
    {
        this->base=base;
        this->num=num;
    }

    QString MudarB::converter()
    {
        QString saida="";
        QString str="0123456789ABCDEF";
        int aux;
        bry::Pilha p1(100);
        int cont=0;

        while(num>0)
        {
            aux=num%base;
            cont++;
            p1.empilhar(aux);
            num=num/base;
        }

        for(int i=0;i<cont;i++)
        {
            saida+=str[p1.acessar()];
            p1.desempilhar();
        }

        return saida;
    }
}

