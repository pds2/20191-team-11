#ifndef MAN_DISCIPLINA
#define MAN_DISCIPLINA

#include "../include/Manager.h"
#include "../include/Disciplina.h"
#include <map>



class ManagerDisciplina : public Manager<Disciplina> {
    public:
        ManagerDisciplina();
        ManagerDisciplina(string,map<int,Disciplina*>);
        ~ManagerDisciplina();
        void cadastrar();
};

#endif