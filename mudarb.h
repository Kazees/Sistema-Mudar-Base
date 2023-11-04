#ifndef MUDARB_H
#define MUDARB_H
#include <QString>
#include <pilha.h>

namespace bry
{
    class MudarB
    {
    private:
        int base;
        int num;

    public:
        MudarB(int base,int num);

        QString converter();
    };
}



#endif // MUDARB_H
