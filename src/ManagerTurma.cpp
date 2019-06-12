#include "../include/ManagerTurma.h"
#include "../include/ManagerDisciplina.h"
#include "../include/ManagerProfessor.h"
#include "../include/ManagerAluno.h"
#include "../include/Manager.h"
#include <vector>

ManagerTurma::ManagerTurma() : Manager<Turma>() {}

ManagerTurma::ManagerTurma(string nome,map<int,Turma*> turmas) : Manager<Turma>(nome,turmas){}

ManagerTurma::~ManagerTurma(){}

void ManagerTurma::listarTurmaVinculadas(int identificador , ManagerAluno &mAluno , ManagerProfessor &mProfessor){
    set<int> setAlunos = this->getItem(identificador)->getAlunos();
    set<int> setProfessores = this->getItem(identificador)->getProfessores();

    cout << "===================================================" << endl;
    cout << "                Turma "<< this->getItem(identificador)->getNome() << endl;
    cout << "===================================================" << endl;
    cout << "                Alunos "<< endl;
    for (int i : setAlunos) {
        cout << "Matricula: " << mAluno.getItem(i)->getMatricula() << "     "<<"Nome: " << mAluno.getItem(i)->getNome() << endl;
	}
    cout << "===================================================" << endl;
    cout << "                Professores "<< endl;
    for (int j : setProfessores) {
        cout << "Registro: " << mProfessor.getItem(j)->getRegistro() << "  "<<"Nome: " << mProfessor.getItem(j)->getNome() << endl;
	}
    cout << "===================================================" << endl;
}



void ManagerTurma::cadastrar(ManagerAluno &mAluno , ManagerProfessor &mProfessor, ManagerTurma &mTurma){
    string nome,identificadorString, qtdProfessorString, qtdAlunoString, registroString, matriculaString;
    int identificador , qtdProfessor, qtdAluno, registro, matricula;
    set<int> professores;
    set<int>alunos;
    cout << "Digite o identificador da turma" << endl;
    cin.ignore();
    getline(cin,identificadorString);
    identificador = atoi(identificadorString.c_str());
    if ( this->getItens()->find(identificador) != this->getItens()->end() ) {
        throw std::invalid_argument("Ja existe uma turma com o identificador " + identificadorString);
    }else{
        cout << "Digite o nome da turma" << endl;
        getline(cin,nome);
        cout << "Digite a quantidade de professores que dao aula nessa turma:" << endl;
        getline(cin,qtdProfessorString);
        qtdProfessor = atoi(qtdProfessorString.c_str());
        if (qtdProfessor <= 0 ){
            throw std::invalid_argument("A turma deve ter pelo menos 1 professor vinculado");
        }else {
            for(int i= 0; i<qtdProfessor ; i++){
                cout << "Digite o registro do professor "<<i+1<<" :" << endl;
                getline(cin,registroString);
                registro = atoi(registroString.c_str());
                try {
                    mProfessor.getItem(registro);
                    professores.insert(registro);
                }catch (const std::invalid_argument& e){
                    cout << e.what() << endl;
                    return;
                }
            }
        }
        cout << "Digite a quantidade de alunos da turma:" << endl;
        getline(cin,qtdAlunoString);
        qtdAluno = atoi(qtdAlunoString.c_str());
        if (qtdAluno <= 0 ){
            throw std::invalid_argument("A turma deve ter pelo menos 1 aluno");
        }else {
            for(int i= 0; i<qtdAluno ; i++){
                cout << "Digite a matricula do aluno "<<i+1<<" :" << endl;
                getline(cin,matriculaString);
                matricula = atoi(matriculaString.c_str());
                try {
                    mAluno.getItem(matricula);
                    alunos.insert(matricula);
                }catch (const std::invalid_argument& e){
                    cout << e.what() << endl;
                    return;
                }
            }
        }
        this->insereItem(identificador,new Turma( nome, identificador,professores,alunos));
        cout<<"Sucesso ao cadastrar a Turma!" <<endl;
        listarTurmaVinculadas(identificador,mAluno,mProfessor);
    }


}