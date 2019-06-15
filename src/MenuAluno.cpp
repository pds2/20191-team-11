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
#include "../include/ManagerMateria.h"
#include <iostream>
#include <string>
#include <map>
#include <stdlib.h>
#include <iomanip>



void aluno(ManagerAluno &mAluno, ManagerMateria &mMateria, ManagerTurma &mTurma){
    int value;
    Aluno *aluno;
    int cod_Disc;

    cout << "Digite sua matrícula: ";
    cin >> value;
    cout << value;
    try {
        aluno = mAluno.getItem(value);
        cout << "Nome: " << aluno->getNome() << endl;
    
        bool sair = false;
        while(!sair){

            int opcaoAluno;

            cout << "Escolha uma das opções: " << endl;
            cout << "1 - Visualizar notas; " << endl;
            cout << "2 - Visualizar nota total; " << endl;
            //cout << "3 - Visualizar disciplinas matriculadas; " << endl;
            //cout << "4 - Visualizar informações de cadastro; " << endl;
            cout << "0 - Sair; " << endl;

            cin >> opcaoAluno;

            switch(opcaoAluno){
                case (1):
                mMateria.listarSetMateriasPorAluno(value , mAluno);
                break;   
                case (2):
                cout << "Qual a id materia que voce deseja visualizar a nota ?" << endl;
                mMateria.listarTodasMateriasAluno(value,mAluno);
                cin >> cod_Disc;
                mMateria.calcularNotaPorAluno(value , mAluno, cod_Disc);   
                break;        
                /*case (3):
                break;
                case (4):
                break;*/
                case (0):
                sair = true;
                break;
                default:
                break;
            }
        }
    }catch(std::exception &e){
        cout << e.what() << endl;
    }

}