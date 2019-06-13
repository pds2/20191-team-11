#include "../include/Aluno.h"
#include "../include/Pessoa.h"
#include "../include/Professor.h"
#include "../include/Funcionario.h"
#include "../include/FuncAdm.h"
#include "../include/ManagerFuncionario.h"
#include "../include/ManagerAluno.h"
#include "../include/ManagerProfessor.h"
#include "../include/ManagerDisciplina.h"
#include "../include/ManagerTurma.h"
#include "../include/MenuAdministrativo.h"
#include <iostream>
#include <string>
#include <map>
#include <stdlib.h>
#include <iomanip>

void verNotaPorAluno(ManagerAluno &mAluno, ManagerMateria &mMateria){
    string matriculaString, idMateriaString;
    int matricula, idMateria;
    cout << "Digite a matricula do aluno" << endl;
    mAluno.geraRelatorio();
    cin.ignore();
    getline(cin,matriculaString);
    matricula = atoi(matriculaString.c_str());
    try {
        mAluno.getItem(matricula);
        cout << "Digite o id da materia" << endl;
        mMateria.geraRelatorio();
        getline(cin,idMateriaString);
        idMateria = atoi(idMateriaString.c_str());
        try{
            mMateria.getItem(idMateria);
            mMateria.listarMateriaPorAluno(matricula , idMateria,mAluno);
        }catch (const std::invalid_argument& e){
            cout << e.what() << endl;
            return;
    }
    }catch (const std::invalid_argument& e){
        cout << e.what() << endl;
        return;
    }

}

void gerarRelatorios(ManagerAluno &mAluno, ManagerProfessor &mProfessor , ManagerDisciplina &mDisciplina, ManagerMateria &mMateria){
    int option;
    bool sair = false;

    while(!sair){
        cout << "Relatórios" << endl;
        cout << "[1] Listar notas de um aluno" << endl;
        cout << "[0] Voltar para menu anterior" << endl;
        cin >> option;

        switch(option){
            case 0:
                sair = true;
                break;
            case 1:
               verNotaPorAluno(mAluno,mMateria);
                break;
            default:
                cout << "Opção não existe!" << endl;
        }
    }
}

void professor(ManagerAluno &mAluno, ManagerProfessor &mProfessor , ManagerDisciplina &mDisciplina, ManagerTurma &mTurma, ManagerMateria &mMateria){
    int value;
    Professor *professor;

    cout << "Digite seu número de registro: ";
    cin >> value;
    try {
        professor = mProfessor.getItem(value);
        cout << "Nome: " << professor->getNome() << endl;
        cout << "Disciplina: " <<  mDisciplina.getItem(professor->getDisciplina())->getNome() << endl;
    
        bool sair = false;
        while(!sair){
            cout << "Ola, o que voce deseja fazer?" << endl;
            cout << "[1] - Lançar a nota do aluno" << endl;
            cout << "[2] - Relatorios "<< endl;
            cout << "[0] Voltar para menu anterior" << endl;
            cin >> value;

            switch(value){
                case 0:
                    sair = true;
                    break;
                case 1: 
                    mMateria.lancarNotaAluno(mAluno,mProfessor, value);
                    break;
                case 2:
                    gerarRelatorios(mAluno , mProfessor,  mDisciplina,mMateria);
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