/**
 * Project SIG - Escola Fundamental
 * @author Grupo 11
 */
#include "../include/FuncAdm.h"
#include "../include/Pessoa.h"
#include "../include/Aluno.h"
#include "../include/Funcionario.h"
#include "../include/ManagerAluno.h"
#include <iostream>
#include <string>
using namespace std;
/**
 * FuncAdm implementation
 */

FuncAdm::FuncAdm(){}

FuncAdm::~FuncAdm(){}

FuncAdm::FuncAdm(string nome, string dataNascimento, string sexo, string endereco, long telefone, float salario, int registro, string setor ) :
    Funcionario(nome,dataNascimento,sexo,endereco,telefone,salario,registro), _setor(setor) {};


string FuncAdm::getSetor() {
    return this->_setor;
}

void FuncAdm::setSetor(string value) {
    this->_setor = value;
}

Aluno* FuncAdm::cadastrarAluno(ManagerAluno &mAluno){
    string nome , dataNascimento , sexo , endereco , nomeResponsavelLegal, matriculaString, turmaString, telefoneString;
    int matricula , turma;
    long telefone;
    
    cout << "Digite a matricula do aluno" << endl;
    cin.ignore();
    getline(cin,matriculaString);
    matricula = atoi(matriculaString.c_str());
    if ( mAluno.getItens()->find(matricula) != mAluno.getItens()->end() ) {
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

    Aluno *aluno = new Aluno( nome,  dataNascimento,  sexo,  endereco,  telefone,  matricula,  nomeResponsavelLegal,  turma );
    return aluno;                             
    }
}