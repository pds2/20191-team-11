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



void aluno(ManagerAluno &mAluno, ManagerProfessor &mProfessor , ManagerDisciplina &mDisciplina, ManagerTurma &mTurma){
    int value;
    Aluno *aluno;

    cout << "Digite sua matrícula: ";
    cin >> value;
    try {
        aluno = mAluno.getItem(value);
        cout << "Nome: " << aluno->getNome() << endl;
    
        bool sair = false;
        while(!sair){
            cout << "Ola, o que voce deseja fazer?" << endl;
            cout << "[1] " << endl;
            cout << "[2]" << endl;
            cout << "[0] Voltar para menu anterior" << endl;
            cin >> value;

            switch(value){
                case 0:
                    sair = true;
                    break;
                case 1: 
                    //cadastros(mFuncionario, mAluno , mProfessor,  mDisciplina, mTurma);
                    break;
                case 2:
                    //gerarRelatorios(mFuncionario, mAluno , mProfessor,  mDisciplina, mTurma);
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