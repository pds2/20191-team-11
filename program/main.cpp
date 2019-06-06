#include "../include/Aluno.h"
#include "../include/Pessoa.h"
#include "../include/Professor.h"
#include "../include/Funcionario.h"
#include "../include/FuncAdm.h"
#include <iostream>
#include <string>
using namespace std;


void administrativo(){
    int value;

    FuncAdm a ("Padrao", "17/04/1967", "masc", "Rua b", 25655474, 1200, 201645, "diretoria" );
    cout << "Ola o que voce deseja fazer?" << endl;
    cout << "Digite 1 para matricular um aluno" << endl;
    cout << "Digite 2 para criar uma turma" << endl;
    cout << "Digite 3 para vincular um professor a uma disciplina" << endl;
    cout << "Digite 4 para montar grade de horarios" << endl;
    cin >> value;

    if (value == 1){
            a.cadastrarAluno();
        }
}

int main(){
    cout << "Entre com o seu perfil : (Aluno , Professor ou Administrativo)" << endl;

    string perfil;
    cin >> perfil;

    if (perfil == "Aluno"){
        cout << "Digite sua matricula";

    }else if (perfil == "Professor"){

    }else if(perfil == "Administrativo"){
        administrativo();
    }else {
        cout << "Perfil invalida";
    }

    return 0;
    
}