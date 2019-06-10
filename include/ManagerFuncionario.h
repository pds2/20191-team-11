#ifndef MENU_FUNCIONARIO
#define MENU_FUNCIONARIO

#include "Manager.h"
#include "FuncAdm.h"
#include <map>



class ManagerFuncionario : public Manager<FuncAdm> {
    public:
        ManagerFuncionario();
        ManagerFuncionario(string,map<int,FuncAdm*>);
        ~ManagerFuncionario();
        void cadastrarFuncionario();
};

#endif