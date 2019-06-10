#include "../include/ManagerAluno.h"
#include "../include/Manager.h"

ManagerAluno::ManagerAluno() : Manager<Aluno>() {}

ManagerAluno::ManagerAluno(string nome,map<int,Aluno*> funcionarios) : Manager<Aluno>(nome,funcionarios){}

ManagerAluno::~ManagerAluno(){}

void ManagerAluno::cadastrarAluno(){
    string nome , dataNascimento , sexo , endereco , nomeResponsavelLegal, matriculaString, turmaString, telefoneString;
    int matricula , turma;
    long telefone;
    
    cout << "Digite a matricula do aluno" << endl;
    cin.ignore();
    getline(cin,matriculaString);
    matricula = atoi(matriculaString.c_str());
    if ( this->getItens()->find(matricula) != this->getItens()->end() ) {
        throw std::invalid_argument("Ja existe um aluno com a matricula " + matriculaString);
    }else{
        cout << "Digite o nome do aluno" << endl;
        getline(cin,nome);
        cout << "Digite a data de nascimento" << endl;
        getline(cin,dataNascimento);
        cout << "Digite o sexo do aluno" << endl;
        getline(cin,sexo);
        cout << "Digite o endereco" << endl;
        getline(cin,endereco);
        cout << "Digite o nome do responsavel legal pelo aluno" << endl;
        getline(cin,nomeResponsavelLegal);
        cout << "Digite o telefone do aluno" << endl;
        getline(cin,telefoneString);
        telefone = atol(telefoneString.c_str());
        cout << "Digite o id da turma que o aluno sera vinculado" << endl;
        getline(cin,turmaString);
        turma = atoi(turmaString.c_str());
        this->insereItem(matricula,new Aluno( nome,  dataNascimento,  sexo,  endereco,  telefone,  matricula,  nomeResponsavelLegal,  turma ));
    }
}
