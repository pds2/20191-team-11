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
#include "../include/MenuProfessor.h"
#include "../include/MenuAdministrativo.h"
#include "../include/Materia.h"
#include "../include/ManagerMateria.h"
#include "../include/MenuAluno.h"
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
ManagerTurma mTurma;
ManagerMateria mMateria;

void populaTeste(){
    map<int,Aluno*> listaAlunos;
    map<int,Professor*> listaProfessores;
    map<int,FuncAdm*> listaFuncAdm;
    map<int,Disciplina*> listaDisciplinas;
    map<int,Turma*> listaTurmas;
    map<int,Materia*> listaMaterias;

    Disciplina *dis1 = new Disciplina("Matemática",  1, 30);
    Disciplina *dis2 = new Disciplina("Portugues",  2, 30);
    Disciplina *dis3 = new Disciplina("Geografia",  3, 30);
    Disciplina *dis4 = new Disciplina("História",  4, 30);
    Disciplina *dis5 = new Disciplina("Ciências",  5, 30);
    Disciplina *dis6 = new Disciplina("Inglês",  6, 30);
    listaDisciplinas.insert( pair<int, Disciplina*>(dis1->getId(), dis1) );
    listaDisciplinas.insert( pair<int, Disciplina*>(dis2->getId(), dis2) );
    listaDisciplinas.insert( pair<int, Disciplina*>(dis1->getId(), dis3) );
    listaDisciplinas.insert( pair<int, Disciplina*>(dis2->getId(), dis4) );
    listaDisciplinas.insert( pair<int, Disciplina*>(dis1->getId(), dis5) );
    listaDisciplinas.insert( pair<int, Disciplina*>(dis2->getId(), dis6) );
    mDisciplina.setItens(listaDisciplinas);
    mDisciplina.setNomeRelatorio("Disciplinas");

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

    Professor *prof1 = new Professor ("Gisele", "17/04/1967", "Feminino", "Rua Garcia Rodrigues, 901", 25655474, 1200, 1, 1 );
    Professor *prof2 = new Professor ("Joao", "20/05/1964", "Masculino", "Rua Nova Granada, 203", 32655474, 1200, 2, 2 );
    listaProfessores.insert( pair<int, Professor*>(prof1->getId(), prof1) );
    listaProfessores.insert( pair<int, Professor*>(prof2->getId(), prof2) );
    mProfessor.setItens(listaProfessores);
    mProfessor.setNomeRelatorio("Professores");

    set<int> alunos ;
    alunos.insert(1);
    alunos.insert(2);
    set<int> professores;
    professores.insert(1);
    professores.insert(2);
    Turma *tur1 = new Turma("Primeira série",  1,alunos,professores);
    Turma *tur2 = new Turma("Segunda série",  2,alunos,professores);
    listaTurmas.insert( pair<int, Turma*>(tur1->getId(), tur1) );
    listaTurmas.insert( pair<int, Turma*>(tur2->getId(), tur2) );
    mTurma.setItens(listaTurmas);
    mTurma.setNomeRelatorio("Turmas");

    Materia *materia1 = new Materia(dis1->getNome(),dis1->getId(),dis1->getCargaHoraria(),1,a1->getMatricula(),60.5,2019);
    Materia *materia2 = new Materia(dis2->getNome(),dis2->getId(),dis2->getCargaHoraria(),2,a1->getMatricula(),80.5,2019);
    Materia *materia3 = new Materia(dis2->getNome(),dis2->getId(),dis2->getCargaHoraria(),3,a2->getMatricula(),90.5,2019);
    listaMaterias.insert( pair<int, Materia*>(materia1->getId(), materia1) ); 
    listaMaterias.insert( pair<int, Materia*>(materia2->getId(), materia2) );
    listaMaterias.insert( pair<int, Materia*>(materia3->getId(), materia3) );
    mMateria.setItens(listaMaterias);
    mMateria.setNomeRelatorio("Materias");
}



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
                aluno(mAluno, mProfessor , mDisciplina,mTurma);
                break;
            case 2:
                professor(mAluno, mProfessor , mDisciplina,mTurma);
                break;
            case 3:
                administrativo(mFuncionario , mAluno, mProfessor,mDisciplina,mTurma,mMateria);
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