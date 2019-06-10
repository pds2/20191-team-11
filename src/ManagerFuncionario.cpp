#include "../include/ManagerFuncionario.h"
#include "../include/Manager.h"

ManagerFuncionario::ManagerFuncionario() : Manager<FuncAdm>() {}

ManagerFuncionario::ManagerFuncionario(string nome,map<int,FuncAdm*> funcionarios) : Manager<FuncAdm>(nome,funcionarios){}

ManagerFuncionario::~ManagerFuncionario(){}
