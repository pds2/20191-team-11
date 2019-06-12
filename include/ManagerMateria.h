#ifndef MAN_MATERIA
#define MAN_MATERIA

#include "../include/Manager.h"
#include "../include/Materia.h"
#include "../include/ManagerDisciplina.h"
#include <map>

class ManagerMateria : public Manager<Materia> {
    public:
        ManagerMateria();
        ManagerMateria(string,map<int,Materia*>);
        ~ManagerMateria();
        void cadastrar(ManagerDisciplina &mDisciplina);
};

#endif