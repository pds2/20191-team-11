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

            int opcaoAluno;

            cout << "Escolha uma das opções: " << endl;
            cout << "1 - Visualizar notas; " << endl;
            cout << "2 - Visualizar nota total; " << endl;
            cout << "3 - Visualizar disciplinas matriculadas; " << endl;
            cout << "4 - Visualizar histórico de notas; " << endl;
            cout << "5 - Visualizar informações de cadastro; " << endl;

            cin >> opcaoAluno;

            switch(opcaoAluno){
                case (1):
                break;   
                case (2):
                break;
                case (3):
                break;
                case (4):
                break;
                default:
                break;
            }
        }
    }catch(std::exception &e){
        cout << e.what() << endl;
    }

}