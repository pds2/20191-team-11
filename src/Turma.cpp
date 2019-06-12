/**
 * Project SIG - Escola Fundamental
 * @author Grupo 11
 */


#include "../include/Turma.h"
#include <string>
#include <stdexcept>

using namespace std;

#define EMTPY_VECTOR *(new vector<int>())

Turma::Turma(){}

Turma::~Turma(){}

Turma::Turma(string nome,int identificador, set<int> professores, set<int> alunos){
    this->nome = nome;
    this->_identificador = identificador;
    this->_professores = professores;
    this->_alunos = alunos;
}

Turma::Turma(string nome, int identificador){
    this->nome = nome;
    this->_identificador = identificador;
}

set<int>  Turma::getProfessores() {
    return this->_professores;
}

void Turma::setProfessores(set<int> professores){
    this->_professores = professores;
}

set<int> Turma::getAlunos() {
    return this->_alunos;
}

void Turma::setAlunos(set<int> alunos) {
    this->_alunos = alunos;
}

int Turma::getIdentificador() {
    return this->_identificador;
}

int Turma::getId(){
    return this->_identificador;
}

void Turma::setIdentificador(int value) {
    this->_identificador = value;
}

void Turma::removeAluno(int aluno){
    this->_alunos.erase(aluno);
}

void Turma::insereAluno(int aluno){
    if(this->_alunos.find(aluno) != this->_alunos.end())
        this->_alunos.insert(aluno);
    else
        throw std::invalid_argument("Aluno já cadastrado!"); 
}

void Turma::insereProfessor(int identificador) {
    if(this->_professores.find(identificador) != this->_professores.end())
        this->_professores.insert(identificador);
    else
        throw std::invalid_argument("Discilina já cadastrada!"); 
}

void Turma::removeProfessor(int identificador) {
    this->_professores.erase(identificador);
}

string Turma::getNome(){
    return this->nome;
}

void Turma::setNome(string nome){
    this->nome = nome;
}
