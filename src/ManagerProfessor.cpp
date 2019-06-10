#include "../include/ManagerProfessor.h"
#include "../include/Manager.h"

ManagerProfessor::ManagerProfessor() : Manager<Professor>() {}

ManagerProfessor::ManagerProfessor(string nome,map<int,Professor*> funcionarios) : Manager<Professor>(nome,funcionarios){}

ManagerProfessor::~ManagerProfessor(){}

void ManagerProfessor::cadastrar(){
    string nome , dataNascimento , sexo , endereco, telefoneString, salarioString, registroString, disciplina;
    int registro;
    long telefone;
    float salario;
    
    cout << "Digite o registro do professor" << endl;
    cin.ignore();
    getline(cin,registroString);
    registro = atoi(registroString.c_str());
    if ( this->getItens()->find(registro) != this->getItens()->end() ) {
        throw std::invalid_argument("Ja existe um professor com o registro " + registroString);
    }else{
        cout << "Digite o nome do professor" << endl;
        getline(cin,nome);
        cout << "Digite a data de nascimento" << endl;
        getline(cin,dataNascimento);
        cout << "Digite o sexo do funcionário" << endl;
        getline(cin,sexo);
        cout << "Digite o endereco" << endl;
        getline(cin,endereco);
        cout << "Digite o telefone do professor" << endl;
        getline(cin,telefoneString);
        telefone = atol(telefoneString.c_str());
        cout << "Digite o salario do professor" << endl;
        getline(cin,salarioString);
        salario = atof(salarioString.c_str());
        cout << "Digite a disciplina do professor" << endl;
        getline(cin,disciplina);
        this->insereItem(registro,new Professor(nome,  dataNascimento,  sexo,  endereco,  telefone,  salario,  registro,  disciplina ));
    }
}