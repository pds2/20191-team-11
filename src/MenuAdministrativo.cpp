#include "../include/Aluno.h"
#include "../include/Pessoa.h"
#include "../include/Professor.h"
#include "../include/Funcionario.h"
#include "../include/FuncAdm.h"
#include "../include/ManagerFuncionario.h"
#include "../include/ManagerAluno.h"
#include "../include/ManagerProfessor.h"
#include "../include/ManagerDisciplina.h"
#include "../include/MenuAdministrativo.h"
#include "../include/Relatorio.h"
#include <iostream>
#include <string>
#include <map>
#include <stdlib.h>
#include <iomanip>

using namespace std;
using std::left;

void administrativo(ManagerFuncionario &mFuncionario , ManagerAluno &mAluno, ManagerProfessor &mProfessor , ManagerDisciplina &mDisciplina){
    int value;
    FuncAdm *funcAdm;

    cout << "Digite seu número de registro: ";
    cin >> value;
    try {
        funcAdm = mFuncionario.getItem(value);
        cout << "Nome: " << funcAdm->getNome() << endl;
        cout << "Setor: " << funcAdm->getSetor() << endl << endl;
    
        bool sair = false;
        while(!sair){
            cout << "Ola, o que voce deseja fazer?" << endl;
            cout << "[1] Matricular um aluno" << endl;
            cout << "[2] Criar uma turma" << endl;
            cout << "[3] Vincular um professor a uma disciplina" << endl;
            cout << "[4] Montar grade de horarios" << endl;
            cout << "[5] Cadastrar funcionário" << endl;
            cout << "[6] Gerar relatórios" << endl;
            cout << "[0] Voltar para menu principal" << endl;
            cin >> value;

            switch(value){
                case 0:
                    sair = true;
                    break;
                case 1: 
                    {
                        Aluno *aluno = funcAdm->cadastrarAluno(mAluno);
                        try {
                            mAluno.insereItem(aluno->getMatricula(), aluno);
                            cout << "O aluno " << aluno->getNome() << " com matricula " << aluno->getMatricula() << " foi cadastrado com sucesso!" << endl;
                        }catch(std::invalid_argument &e){
                            delete aluno;
                            cout << e.what() << endl;
                        }   
                    }
                    break;
                case 6:
                    gerarRelatorios(mAluno , mProfessor,  mDisciplina,  mFuncionario);
                    break;
                default:
                    cout << "Opção não cadastrada!" << endl;
                    break;
            }
        }
    }catch(std::invalid_argument &e){
        cout << e.what() << endl;
    }

}