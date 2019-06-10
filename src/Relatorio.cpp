#include "../include/Aluno.h"
#include "../include/Pessoa.h"
#include "../include/Professor.h"
#include "../include/Funcionario.h"
#include "../include/FuncAdm.h"
#include "../include/ManagerFuncionario.h"
#include "../include/ManagerAluno.h"
#include "../include/ManagerProfessor.h"
#include "../include/ManagerDisciplina.h"
#include "../include/Relatorio.h"
#include <iostream>
#include <string>
#include <map>
#include <stdlib.h>
#include <iomanip>

using namespace std;
using std::left;



void gerarRelatorios(ManagerAluno &mAluno , ManagerProfessor &mProfessor, ManagerDisciplina &mDisciplina, ManagerFuncionario &mFuncionario){
    int option;
    bool sair = false;

    while(!sair){
        cout << "Relatórios" << endl;
        cout << "[1] Listar alunos" << endl;
        cout << "[2] Listar funcionarios" << endl;
        cout << "[3] Listar professores" << endl;
        cout << "[0] Voltar para menu anterior" << endl;
        cin >> option;

        switch(option){
            case 0:
                sair = true;
                break;
            case 1:
                mAluno.geraRelatorio();
                break;
            case 2:
                mFuncionario.geraRelatorio();
                break;
            case 3:
                mProfessor.geraRelatorio();
                break;
            default:
                cout << "Opção não existe!" << endl;
        }
    }
}