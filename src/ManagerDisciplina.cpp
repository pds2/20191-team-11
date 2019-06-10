#include "ManagerDisciplina.h"
#include "Manager.h"

ManagerDisciplina::ManagerDisciplina() : Manager<Disciplina>() {}

ManagerDisciplina::ManagerDisciplina(string nome,map<int,Disciplina*> disciplinas) : Manager<Disciplina>(nome,disciplinas){}

ManagerDisciplina::~ManagerDisciplina(){}
