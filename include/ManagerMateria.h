#ifndef MAN_MATERIA
#define MAN_MATERIA

#include "../include/Manager.h"
#include "../include/Materia.h"
#include <map>

class ManagerMateria : public Manager<Materia> {
    public:
        ManagerMateria();
        ManagerMateria(string,map<int,Materia*>);
        ~ManagerMateria();
       // void cadastrar();
};

#endif