#include "../include/ManagerFuncionario.h"
#include "../include/Manager.h"

ManagerFuncionario::ManagerFuncionario() : Manager<FuncAdm>() {}

ManagerFuncionario::ManagerFuncionario(string nome,map<int,FuncAdm*> funcionarios) : Manager<FuncAdm>(nome,funcionarios){}

ManagerFuncionario::~ManagerFuncionario(){}
/*Cadastro de um funcionário administrivo (secretaria,diretoria) */
void ManagerFuncionario::cadastrar(){
    string nome , dataNascimento , sexo , endereco, telefoneString, salarioString, registroString, setor;
    int registro;
    long telefone;
    float salario;
    
    cout << "Digite o registro do funcionário" << endl;
    cin.ignore();
    getline(cin,registroString);
    registro = atoi(registroString.c_str());
    if ( this->getItens()->find(registro) != this->getItens()->end() ) {
        throw std::invalid_argument("Ja existe um funcionário com o registro " + registroString);
    }else{
        cout << "Digite o nome do funcionário" << endl;
        getline(cin,nome);
        cout << "Digite a data de nascimento" << endl;
        getline(cin,dataNascimento);
        cout << "Digite o sexo do funcionário" << endl;
        getline(cin,sexo);
        cout << "Digite o endereco" << endl;
        getline(cin,endereco);
        cout << "Digite o telefone do funcionário" << endl;
        getline(cin,telefoneString);
        telefone = atol(telefoneString.c_str());
        cout << "Digite o salario do funcionário" << endl;
        getline(cin,salarioString);
        salario = atof(salarioString.c_str());
        cout << "Digite o setor do funcionário" << endl;
        getline(cin,setor);
        this->insereItem(registro,new FuncAdm(nome,  dataNascimento,  sexo,  endereco,  telefone,  salario,  registro,  setor ));
    }
}
