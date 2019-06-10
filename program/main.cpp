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



ManagerFuncionario mFuncionario;
ManagerAluno mAluno;
ManagerProfessor mProfessor;
ManagerDisciplina mDisciplina;

void populaTeste(){
    map<int,Aluno*> listaAlunos;
    map<int,Professor*> listaProfessores;
    map<int,FuncAdm*> listaFuncAdm;

    Aluno *a1 = new Aluno ("Isabela","14/10/1997","Feminino","Rua ABC , 520 - AP 02, Contagem- MG",25655847,1,"Edna P Souza",2013);
    Aluno *a2 = new Aluno("Gabriel Fonseca", "13/10/1988", "Masculino", "Rua Timbiras", 988123351, 2, "Delcio", 2014);
    listaAlunos.insert( pair<int, Aluno*>(a1->getId(), a1) ); 
    listaAlunos.insert( pair<int, Aluno*>(a2->getId(), a2) );
    mAluno.setItens(listaAlunos);
    mAluno.setNomeRelatorio("Alunos");

    FuncAdm *funcAdm1 = new FuncAdm ("Ananda", "17/04/1967", "Feminino", "Rua Garcia Rodrigues, 901", 25655474, 1200, 1, "Secretaria" );
    FuncAdm *funcAdm2 = new FuncAdm ("Juca", "20/05/1964", "Masculino", "Rua Nova Granada, 203", 32655474, 1200, 2, "Secretaria" );
    listaFuncAdm.insert( pair<int, FuncAdm*>(funcAdm1->getId(), funcAdm1) );
    listaFuncAdm.insert( pair<int, FuncAdm*>(funcAdm2->getId(), funcAdm2) );
    mFuncionario.setItens(listaFuncAdm);
    mFuncionario.setNomeRelatorio("Funcionários");

    Professor *prof1 = new Professor ("Gisele", "17/04/1967", "Feminino", "Rua Garcia Rodrigues, 901", 25655474, 1200, 1, "Secretaria" );
    Professor *prof2 = new Professor ("Joao", "20/05/1964", "Masculino", "Rua Nova Granada, 203", 32655474, 1200, 2, "Secretaria" );
    listaProfessores.insert( pair<int, Professor*>(prof1->getId(), prof1) );
    listaProfessores.insert( pair<int, Professor*>(prof2->getId(), prof2) );
    mProfessor.setItens(listaProfessores);
    mProfessor.setNomeRelatorio("Professores");
}


void aluno(){
    int opcaoAluno;

    cout << "Escolha uma das opções: " << endl;
    cout << "1 - Visualizar notas; " << endl;
    cout << "2 - Visualizar disciplinas matriculadas; " << endl;
    cout << "3 - Visualizar histórico de notas; " << endl;
    cout << "4 - Ver mensagens dos professores; " << endl;

    cin >> opcaoAluno;

    switch(opcaoAluno){
        case (1):
        break;
        case (2):
        break;
        case (3):
        break;
        case (4):
        // para essa opção precisa ter banco de dados, visto que as msgs não ficarão guardadas no objeto aluno
        break;
        default:
        break;
    }
    cout << "Digite sua matricula";

}

void professor(){}



int main(){

    bool sair = false;
    
    while(!sair){

        cout << "Entre com o seu perfil:" << endl;
        cout << "[1] Aluno" << endl;
        cout << "[2] Professor" << endl;
        cout << "[3] Administrativo" << endl;
        cout << "[4] Popula dados de teste" << endl;
        cout << "[0] Sair" << endl;

        int perfil;
        cin >> perfil;

        switch(perfil){
            case 0:
                sair = true;
                break;
            case 1:
                aluno();
                break;
            case 2:
                professor();
                break;
            case 3:
                administrativo(mFuncionario , mAluno, mProfessor,mDisciplina);
                break;
            case 4:
                populaTeste();
                break;
            default:
                cout << "Escolha uma das opções acima!" << endl;
                break;
        }
    }
    return 0;
    
}