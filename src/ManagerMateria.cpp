#include "../include/ManagerMateria.h"
#include "../include/Manager.h"

ManagerMateria::ManagerMateria() : Manager<Materia>() {}

ManagerMateria::ManagerMateria(string nome,map<int,Materia*> materias) : Manager<Materia>(nome,materias){}

ManagerMateria::~ManagerMateria(){}

