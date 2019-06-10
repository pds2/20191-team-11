#include "ManagerAluno.h"
#include "Manager.h"

ManagerAluno::ManagerAluno() : Manager<Aluno>() {}

ManagerAluno::ManagerAluno(string nome,map<int,Aluno*> funcionarios) : Manager<Aluno>(nome,funcionarios){}

ManagerAluno::~ManagerAluno(){}
