#ifndef MAN_TURMA
#define MAN_TURMA

#include "../include/Manager.h"
#include "../include/Turma.h"
#include <map>

class ManagerTurma : public Manager<Turma> {
    public:
        ManagerTurma();
        ManagerTurma(string,map<int,Turma*>);
        ~ManagerTurma();
        void cadastrar();
};

#endif