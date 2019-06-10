#ifndef MAN_DISCIPLINA
#define MAN_DISCIPLINA

#include "Manager.h"
#include "Disciplina.h"
#include <map>



class ManagerDisciplina : public Manager<Disciplina> {
    public:
        ManagerDisciplina();
        ManagerDisciplina(string,map<int,Disciplina*>);
        ~ManagerDisciplina();
};

#endif