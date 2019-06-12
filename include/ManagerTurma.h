#ifndef MAN_TURMA
#define MAN_TURMA
#include "../include/ManagerTurma.h"
#include "../include/ManagerDisciplina.h"
#include "../include/ManagerProfessor.h"
#include "../include/ManagerAluno.h"
#include "../include/Manager.h"
#include "../include/Turma.h"
#include <map>

class ManagerTurma : public Manager<Turma> {
    public:
        ManagerTurma();
        ManagerTurma(string,map<int,Turma*>);
        ~ManagerTurma();
        void cadastrar(ManagerAluno &mAluno , ManagerProfessor &mProfessor, ManagerTurma &mTurma);
        void listarTurmaVinculadas(int registro ,ManagerAluno &mAluno , ManagerProfessor &mProfessor);
};

#endif