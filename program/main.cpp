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
    cout << "Ola o que voce deseja fazer?" << endl;
    cout << "Digite 1 para matricular um aluno" << endl;
    cout << "Digite 2 para criar uma turma" << endl;
    cout << "Digite 3 para vincular um professor a uma disciplina" << endl;
    cout << "Digite 4 para montar grade de horarios" << endl;
    cin >> value;
    if (value == 1){
            string nome , dataNascimento , sexo , endereco , nomeResponsavelLegal;
            int matricula , turma;
            long telefone;
            cout << "Digite o nome do aluno" << endl;
            cin >> nome;
            cout << "Digite a data de nascimento" << endl;
            cin >> dataNascimento;
            cout << "Digite o sexo do aluno" << endl;
            cin >> sexo;
            cout << "Digite o endereco" << endl;
            cin >> endereco;
            cout << "Digite o nome do responsavel legal pelo aluno" << endl;
            cin >> nomeResponsavelLegal;
            cout << "Digite o telefone do aluno" << endl;
            cin >> telefone;
            cout << "Digite a matricula do aluno" << endl;
            cin >> matricula;
            cout << "Digite o id da turma que o aluno sera vinculado" << endl;
            cin >> turma;
            Aluno c( nome,  dataNascimento,  sexo,  endereco,  telefone,  matricula,  nomeResponsavelLegal,  turma );
            cout << "O aluno " << c.getNome() << " foi cadastrado com sucesso!";

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