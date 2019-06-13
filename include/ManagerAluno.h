#ifndef MAN_ALUNO
#define MAN_ALUNO

#include "../include/Manager.h"
#include "../include/Aluno.h"
#include <map>

class ManagerAluno : public Manager<Aluno> {
    public:
        ManagerAluno();
        ManagerAluno(string,map<int,Aluno*>);
        ~ManagerAluno();
        void cadastrar();
        //void visualizarNotas(int matricula);
};

//void ManagerAluno::inserirLancamentoMateria(Materia* materia, int codigoMateria);

#endif