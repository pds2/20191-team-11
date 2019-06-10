#include "../include/Aluno.h"
#include "../include/Pessoa.h"
#include "../include/Professor.h"
#include "../include/Funcionario.h"
#include "../include/FuncAdm.h"
#include "../include/ManagerFuncionario.h"
#include "../include/ManagerAluno.h"
#include "../include/ManagerProfessor.h"
#include "../include/ManagerDisciplina.h"
#include <iostream>
#include <string>
#include <map>
#include <stdlib.h>
#include <iomanip>

using namespace std;
using std::left;



void gerarRelatorios(ManagerAluno &mAluno , ManagerProfessor &mProfessor, ManagerDisciplina &mDisciplina, ManagerFuncionario &mFuncionario);