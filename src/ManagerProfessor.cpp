#include "ManagerProfessor.h"
#include "Manager.h"

ManagerProfessor::ManagerProfessor() : Manager<Professor>() {}

ManagerProfessor::ManagerProfessor(string nome,map<int,Professor*> funcionarios) : Manager<Professor>(nome,funcionarios){}

ManagerProfessor::~ManagerProfessor(){}
