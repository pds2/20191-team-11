#ifndef MAN_ALUNO
#define MAN_ALUNO

#include "Manager.h"
#include "Aluno.h"
#include <map>

class ManagerAluno : public Manager<Aluno> {
    public:
        ManagerAluno();
        ManagerAluno(string,map<int,Aluno*>);
        ~ManagerAluno();
};

#endif