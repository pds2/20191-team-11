#include "../include/ManagerMateria.h"
#include "../include/ManagerDisciplina.h"
#include "../include/ManagerAluno.h"
#include "../include/ManagerProfessor.h"
#include "../include/Manager.h"
#include <set>

ManagerMateria::ManagerMateria() : Manager<Materia>() {}

ManagerMateria::ManagerMateria(string nome,map<int,Materia*> materias) : Manager<Materia>(nome,materias){}

ManagerMateria::~ManagerMateria(){}

void ManagerMateria::listarMateriaPorAluno(int matricula , int idMateria,ManagerAluno &mAluno, ManagerProfessor &mProfessor){
    cout << "===================================================" << endl;
    cout << "                Materia "<< this->getItem(idMateria)->getNome() << endl;
    cout << "===================================================" << endl;
    cout << "                Aluno: "<< mAluno.getItem(matricula)->getNome()<<endl;
    cout << "Nota: "<< this->getItem(idMateria)->getNota() << endl;
    int idProfessor = this->getItem(idMateria)->getIdProfessor();
    cout << "Professor : " << mProfessor.getItem(idProfessor)->getNome() << endl;
}

void ManagerMateria::listarMaterias(){
    
}


void ManagerMateria::cadastrar(ManagerDisciplina &mDisciplina, ManagerAluno &mAluno, ManagerProfessor &mProfessor){
    string nome, idDisciplinaString , cargaHorariaString, idMateriaString, matriculaAlunoString , anoString , idProfessorString;
    int idDisciplina , cargaHoraria, idMateria, matriculaAluno , ano, idProfessor;
    float nota;

    cout << "Digite o id da Materia" << endl;
    cin.ignore();
    getline(cin,idMateriaString);
    idMateria = atoi(idMateriaString.c_str());
    if ( this->getItens()->find(idMateria) != this->getItens()->end() ) {
        throw std::invalid_argument("Ja existe uma materia com o id " + idMateriaString);
    }else{
        cout << "Entre com o professor que ministra a materia: " <<endl;
        mProfessor.geraRelatorio();
        getline(cin,idProfessorString);
        idProfessor = atoi(idProfessorString.c_str());
        try {
            //O erro acontece aqui 
            mProfessor.getItem(idProfessor);
            idDisciplina = mProfessor.getItem(idProfessor)->getDisciplina();
            nome = mDisciplina.getItem(idDisciplina)->getNome();
            cargaHoraria = mDisciplina.getItem(idDisciplina)->getCargaHoraria();
            cout << "Entre com o id do Aluno que esta cursando esta materia:" << endl;
            mAluno.geraRelatorio();
            getline(cin,matriculaAlunoString);
            matriculaAluno = atoi(matriculaAlunoString.c_str());
            try{
                 //E aqiu
                mAluno.getItem(matriculaAluno);
                nota = 0.0;
                cout << "Entre com o ano que o aluno esta cursando a materia:" << endl;
                getline(cin,anoString);
                ano = atoi(anoString.c_str());
                //Insere o id da materia no vetor de materias do aluno
                this->insereItem(idMateria,new Materia(nome,idDisciplina,cargaHoraria,idMateria,matriculaAluno,nota,ano,idProfessor));
                set<int> materiaOld = mAluno.getItem(matriculaAluno)->getMateria();
                materiaOld.insert(idMateria);
                mAluno.getItem(matriculaAluno)->setMateria(materiaOld);
                listarMateriaPorAluno(matriculaAluno, idMateria,mAluno,mProfessor);

            }catch (const std::invalid_argument& e){
                cout << e.what() << endl;
                return;
            }
        }catch (const std::invalid_argument& e){
            cout << e.what() << endl;
            return;
        }

    }

}

