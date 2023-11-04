#include "pilha.h"

namespace bry
{
    Pilha::Pilha(int tamanho):tamanho(0),topo(-1),array(0)
    {
        if(tamanho<=0)
        {
            throw QString("Tamanho inválido.");
        }

        try
        {
            array=new int[tamanho];
            this->tamanho=tamanho;
        }

        catch (std::bad_alloc&)
        {
            throw QString("Pilha não pode ser criada.");
        }
    }

    Pilha::~Pilha()
    {
        if(array)
        {
            delete []array;
        }
    }

    void Pilha::empilhar(int elemento)
    {
        if(estaCheia())
        {
            throw QString("Pilha está cheia");
        }

        topo++;
        *(array+topo)=elemento;
    }

    void Pilha::desempilhar()
    {
        //int aux;

        if(estaVazio())
        {
            throw QString("Pilha está vazia");
        }

        //aux=*(array+topo);

        topo--;

        //return aux;
    }

    int Pilha::acessar()
    {
        if(estaVazio())
        {
            throw QString("Pilha está vazia");
        }

        return *(array+topo);
    }
}
