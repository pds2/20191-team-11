#include "../include/ManagerTurma.h"
#include "../include/Manager.h"

ManagerTurma::ManagerTurma() : Manager<Turma>() {}

ManagerTurma::ManagerTurma(string nome,map<int,Turma*> turmas) : Manager<Turma>(nome,turmas){}

ManagerTurma::~ManagerTurma(){}

void ManagerTurma::cadastrar(){
    string nome, identificadorString;
    int identificador;
    
    cout << "Digite o identificador da turma" << endl;
    cin.ignore();
    getline(cin,identificadorString);
    identificador = atoi(identificadorString.c_str());
    if ( this->getItens()->find(identificador) != this->getItens()->end() ) {
        throw std::invalid_argument("Ja existe uma turma com o identificador " + identificadorString);
    }else{
        cout << "Digite o nome da turma" << endl;
        getline(cin,nome);
        this->insereItem(identificador,new Turma( nome, identificador));
    }
}
