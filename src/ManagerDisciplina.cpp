#include "../include/ManagerDisciplina.h"
#include "../include/Manager.h"

ManagerDisciplina::ManagerDisciplina() : Manager<Disciplina>() {}

ManagerDisciplina::ManagerDisciplina(string nome,map<int,Disciplina*> disciplinas) : Manager<Disciplina>(nome,disciplinas){}

ManagerDisciplina::~ManagerDisciplina(){}

void ManagerDisciplina::cadastrar(){
    string nome , identificadorString , cargaHorariaString , professor;
    int identificador, cargaHoraria;
    
    cout << "Digite o identificador da disciplina" << endl;
    cin.ignore();
    getline(cin,identificadorString);
    identificador = atoi(identificadorString.c_str());
    if ( this->getItens()->find(identificador) != this->getItens()->end() ) {
        throw std::invalid_argument("Ja existe uma disciplina com o identificador " + identificadorString);
    }else{
        cout << "Digite o nome da disciplina" << endl;
        getline(cin,nome);
        cout << "Digite a carga horária" << endl;
        getline(cin,cargaHorariaString);
        cargaHoraria = atoi(cargaHorariaString.c_str());
        cout << "Digite o professor da disciplina" << endl;
        getline(cin,professor);
        this->insereItem(identificador,new Disciplina(nome,  identificador, cargaHoraria,  professor));
    }
}