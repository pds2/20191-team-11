#include "../include/Aluno.h"
#include "../include/Pessoa.h"
#include "../include/Professor.h"
#include "../include/Funcionario.h"
#include "../include/FuncAdm.h"
#include <iostream>
#include <string>
#include <map>
#include <stdlib.h>
#include <iomanip>

using namespace std;
using std::left;

map<int,Aluno*> listaAlunos;
map<int,Professor*> listaProfessores;
map<int,FuncAdm*> listaFuncAdm;

void populaTeste(){
    Aluno *a = new Aluno("Isa", "14/10/1997", "Fem", "Rua a ", 992739097, 2016058328, "Edna", 2014);
    Aluno *b = new Aluno("Gabriel Fonseca", "13/10/1988", "Mas", "Rua Timbiras", 31988123351, 2017023439, "Delcio", 2014);
    listaAlunos.insert(pair<int, Aluno*>(a->getMatricula(), a));
    listaAlunos.insert(pair<int, Aluno*>(b->getMatricula(), b));
}

void listarAlunos(){
    cout << "===================================================" << endl;
    cout << "                Listagem de alunos" << endl;
    cout << "===================================================" << endl;
    cout << left << setw(10) << "Matrícula" << "  Aluno" << endl;
    cout << "___________________________________________________" << endl;
    for (auto const& aluno : listaAlunos)
    {
        cout << left << setw(10) << aluno.first << " " << aluno.second->getNome() << endl ;
    }
    cout << "===================================================" << endl;
}

void gerarRelatorios(){
    int option;
    bool sair = false;

    while(!sair){
        cout << "Relatórios" << endl;
        cout << "[1] Listar alunos" << endl;
        cout << "[0] Voltar para menu anterior" << endl;
        cin >> option;

        switch(option){
            case 0:
                sair = true;
            case 1:
                listarAlunos();
                break;
            default:
                cout << "Opção não existe!" << endl;
        }
    }
}

void administrativo(){
    int value;
    FuncAdm *funcAdm;

    cout << "Digite seu número de registro: ";
    cin >> value;

    if ( listaFuncAdm.find(value) == listaFuncAdm.end() ) {
        cout << "Funcionário não cadastrado! Utilizando padrão." << endl;
        funcAdm = new FuncAdm("Padrao", "17/04/1967", "masc", "Rua b", 25655474, 1200, 201645, "diretoria" );
    } else {
        cout << "Funcionário encontrado!" << endl;
        funcAdm = listaFuncAdm[value];
    }

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
                    Aluno *aluno = funcAdm->cadastrarAluno();
                    int matricula = aluno->getMatricula();
                    if ( listaAlunos.find(matricula) != listaAlunos.end() ) {
                        cout << "Aluno já cadastrado com matrícula " << matricula << endl;
                        delete aluno;
                    } else {
                        listaAlunos.insert( pair<int, Aluno*>(matricula, aluno) );
                        cout << "O aluno " << aluno->getNome() << " com matricula " << aluno->getMatricula() << " foi cadastrado com sucesso!" << endl;
                    }
                }
                break;
            case 6:
                gerarRelatorios();
                break;
            default:
                cout << "Opção não cadastrada!" << endl;
                break;
        }
    }
    
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
                administrativo();
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