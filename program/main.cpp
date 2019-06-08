#include "../include/Aluno.h"
#include "../include/Pessoa.h"
#include "../include/Professor.h"
#include "../include/Funcionario.h"
#include "../include/FuncAdm.h"
#include <iostream>
#include <string>
#include<map>
using namespace std;


void administrativo(map<int, Aluno* > &listaAlunos){
    int value;

    FuncAdm funcAdm ("Padrao", "17/04/1967", "masc", "Rua b", 25655474, 1200, 201645, "diretoria" );
    cout << "Ola, o que voce deseja fazer?" << endl;
    cout << "Digite 1 para matricular um aluno" << endl;
    cout << "Digite 2 para criar uma turma" << endl;
    cout << "Digite 3 para vincular um professor a uma disciplina" << endl;
    cout << "Digite 4 para montar grade de horarios" << endl;
    cin >> value;

    if (value == 1){
        Aluno *aluno = funcAdm.cadastrarAluno();
        int matricula = aluno->getMatricula();
        listaAlunos.insert( pair<int, Aluno*>(matricula, aluno) ); 
        cout << listaAlunos[matricula]->getNome();    
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


int main(){


    cout << "Entre com o seu perfil : (Aluno , Professor ou Administrativo)" << endl;

    string perfil;
    cin >> perfil;

    map<int,Aluno*> listaAlunos;


    if (perfil == "Aluno"){     

        aluno();   

    }else if (perfil == "Professor"){

    }else if(perfil == "Administrativo"){
        administrativo(listaAlunos);
    }else {
        cout << "Perfil invalida";
    }

    return 0;
    
}