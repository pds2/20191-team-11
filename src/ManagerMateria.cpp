#include "../include/ManagerMateria.h"
#include "../include/ManagerDisciplina.h"
#include "../include/Manager.h"

ManagerMateria::ManagerMateria() : Manager<Materia>() {}

ManagerMateria::ManagerMateria(string nome,map<int,Materia*> materias) : Manager<Materia>(nome,materias){}

ManagerMateria::~ManagerMateria(){}

void ManagerMateria::cadastrar(ManagerDisciplina &mDisciplina){
    string nome, identificadorString , cargaHorariaString, idMateriaString, matriculaAlunoString , anoString , notaString;
    int identificador , cargaHoraria, idMateria, matriculaAluno , ano;
    float nota;

    cout << "Digite o id da Materia" << endl;
    cin.ignore();
    getline(cin,idMateriaString);
    idMateria = atoi(idMateriaString.c_str());
    if ( this->getItens()->find(idMateria) != this->getItens()->end() ) {
        throw std::invalid_argument("Ja existe uma materia com o id " + idMateriaString);
    }else{
        cout << "Entre com o id da disciplina da materia" << endl;
        cin.ignore();
        getline(cin,identificadorString);
        identificador = atoi(identificadorString.c_str());

    }

}

