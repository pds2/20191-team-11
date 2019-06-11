#include "../include/Pessoa.h"
#include "../include/Funcionario.h"
#include "../include/FuncAdm.h"
#include "../include/ManagerFuncionario.h"
#include "../include/ManagerAluno.h"
#include "../include/ManagerTurma.h"
#include <iostream>
#include <string>
#include <map>
#include <stdlib.h>
#include <iomanip>

void administrativo(ManagerFuncionario &mFuncionario , ManagerAluno &mAluno, ManagerProfessor &mProfessor , ManagerDisciplina &mDisciplina, ManagerTurma &mTurma);
void cadastros(ManagerFuncionario &mFuncionario , ManagerAluno &mAluno, ManagerProfessor &mProfessor , ManagerDisciplina &mDisciplina, ManagerTurma &mTurma);
void gerarRelatorios(ManagerFuncionario &mFuncionario , ManagerAluno &mAluno, ManagerProfessor &mProfessor , ManagerDisciplina &mDisciplina, ManagerTurma &mTurma);