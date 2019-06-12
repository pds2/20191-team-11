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
#include "../include/ManagerMateria.h"
#include <iostream>
#include <string>
#include <map>
#include <stdlib.h>
#include <iomanip>

using namespace std;
using std::left;


void cadastros(ManagerFuncionario &mFuncionario , ManagerAluno &mAluno, ManagerProfessor &mProfessor , ManagerDisciplina &mDisciplina, ManagerTurma &mTurma , ManagerMateria &mMateria){
    bool sair = false;
    int value = 0;
    while(!sair){
        cout << "Quem você deseja cadastrar?" << endl;
        cout << "[1] Aluno" << endl;
        cout << "[2] Funcionário" << endl;
        cout << "[3] Professor" << endl;
        cout << "[4] Disciplina" << endl;
        cout << "[5] Turma" << endl;
        cout << "[6] Materia" <<endl;
        cout << "[0] Menu anterior" << endl;
        cin >> value;

        switch(value){
            case 0:
                sair = true;
                break;
            case 1:
                try{
                    mAluno.cadastrar();
                } catch (const std::invalid_argument& e){
                    cout << e.what() << endl;
                }
                break;
            case 2:
                try{
                    mFuncionario.cadastrar();
                } catch (const std::invalid_argument& e){
                    cout << e.what() << endl;
                }
                break;
            case 3:
                try{
                    mProfessor.cadastrar(mDisciplina);
                } catch (const std::invalid_argument& e){
                    cout << e.what() << endl;
                }
                break;
            case 4:
                try{
                    mDisciplina.cadastrar();
                } catch (const std::invalid_argument& e){
                    cout << e.what() << endl;
                }
                break;
            case 5:
                try{
                    mTurma.cadastrar(mAluno , mProfessor, mTurma);
                } catch (const std::invalid_argument& e){
                    cout << e.what() << endl;
                }
                break;
            case 6:
                try{
                    mMateria.cadastrar(mDisciplina);
                } catch (const std::invalid_argument& e){
                    cout << e.what() << endl;
                }
                break;
            default:
                cout << "Opção inválida!" << endl;
                break;
        }
    }
}

void gerarRelatorios(ManagerFuncionario &mFuncionario , ManagerAluno &mAluno, ManagerProfessor &mProfessor , ManagerDisciplina &mDisciplina, ManagerTurma &mTurma, ManagerMateria &mMateria){
    int option;
    bool sair = false;

    while(!sair){
        cout << "Relatórios" << endl;
        cout << "[1] Listar alunos" << endl;
        cout << "[2] Listar funcionarios" << endl;
        cout << "[3] Listar professores" << endl;
        cout << "[4] Listar disciplinas" << endl;
        cout << "[5] Listar turmas" << endl;
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
            case 4:
                mDisciplina.geraRelatorio();
                break;
            case 5:
                mTurma.geraRelatorio();
                break;
            default:
                cout << "Opção não existe!" << endl;
        }
    }
}

void administrativo(ManagerFuncionario &mFuncionario , ManagerAluno &mAluno, ManagerProfessor &mProfessor , ManagerDisciplina &mDisciplina, ManagerTurma &mTurma,  ManagerMateria &mMateria){
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
            cout << "[1] Cadastros" << endl;
            cout << "[2] Gerar relatórios" << endl;
            cout << "[0] Voltar para menu anterior" << endl;
            cin >> value;

            switch(value){
                case 0:
                    sair = true;
                    break;
                case 1: 
                    cadastros(mFuncionario, mAluno , mProfessor,  mDisciplina, mTurma, mMateria);
                    break;
                case 2:
                    gerarRelatorios(mFuncionario, mAluno , mProfessor,  mDisciplina, mTurma, mMateria);
                    break;
                default:
                    cout << "Opção não cadastrada!" << endl;
                    break;
            }
        }
    }catch(std::exception &e){
        cout << e.what() << endl;
    }

}