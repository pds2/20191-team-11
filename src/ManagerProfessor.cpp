#include "../include/ManagerProfessor.h"
#include "../include/Manager.h"

ManagerProfessor::ManagerProfessor() : Manager<Professor>() {}

ManagerProfessor::ManagerProfessor(string nome,map<int,Professor*> funcionarios) : Manager<Professor>(nome,funcionarios){}

ManagerProfessor::~ManagerProfessor(){}

void ManagerProfessor::cadastrar(ManagerDisciplina &mDisciplina){
    string nome , dataNascimento , sexo , endereco, telefoneString, salarioString, registroString , disciplina;
    int registro , idDisciplina;
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
        cout << "Digite o sexo do professor" << endl;
        getline(cin,sexo);
        cout << "Digite o endereco" << endl;
        getline(cin,endereco);
        cout << "Digite o telefone do professor" << endl;
        getline(cin,telefoneString);
        telefone = atol(telefoneString.c_str());
        cout << "Digite o salario do professor" << endl;
        getline(cin,salarioString);
        salario = atof(salarioString.c_str());
        cout << "Digite o id da disciplina que deseja vincular o professor: " << endl;
        mDisciplina.geraRelatorio();
        getline(cin,disciplina);
        idDisciplina = atoi(disciplina.c_str());
        if (mDisciplina.getItem(idDisciplina)){
            this->insereItem(registro,new Professor(nome,  dataNascimento,  sexo,  endereco,  telefone,  salario,  registro,  idDisciplina ));
            cout << "Professor "<<nome<<" cadastrado com sucesso!" << endl;
        }else {
            throw std::invalid_argument("Nao existe disciplina cadastrada com o id " + disciplina + ". Liste as disciplinas disponiveis e tente novamente!");
        }
    }
}