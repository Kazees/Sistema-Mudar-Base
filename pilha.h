#ifndef PILHA_H
#define PILHA_H
#include <QString>

namespace bry
{
    class Pilha
    {
    private:
        int tamanho;
        int topo;
        int *array; // indice ou ocupação

    public:
        Pilha(int tamanho);
        ~Pilha();

        int getTamanho()const {return tamanho;}

        void empilhar(int elemento);
        void desempilhar();
        int acessar();
        bool estaCheia()const {return topo==(tamanho-1);}
        bool estaVazio()const {return topo==-1;}

    };
}



#endif // PILHA_H
