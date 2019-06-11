#ifndef MAN_PROFESSOR
#define MAN_PROFESSOR

#include "../include/Manager.h"
#include "../include/ManagerDisciplina.h"
#include "../include/Professor.h"
#include <map>



class ManagerProfessor : public Manager<Professor> {
    public:
        ManagerProfessor();
        ManagerProfessor(string,map<int,Professor*>);
        ~ManagerProfessor();
        void cadastrar(ManagerDisciplina &mDisciplina);
};

#endif