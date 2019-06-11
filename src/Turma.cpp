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

Turma::Turma(string nome,int identificador, set<int> disciplinas, set<int> alunos){
    this->nome = nome;
    this->_identificador = identificador;
    this->_disciplinas = disciplinas;
    this->_alunos = alunos;
}

Turma::Turma(string nome, int identificador){
    this->nome = nome;
    this->_identificador = identificador;
}

set<int>  Turma::getDisciplinas() {
    return this->_disciplinas;
}

void Turma::setDisciplinas(set<int> disciplinas){
    this->_disciplinas = disciplinas;
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

void Turma::insereDisciplina(int identificador) {
    if(this->_disciplinas.find(identificador) != this->_disciplinas.end())
        this->_disciplinas.insert(identificador);
    else
        throw std::invalid_argument("Discilina já cadastrada!"); 
}

void Turma::removeDisciplina(int identificador) {
    this->_disciplinas.erase(identificador);
}

string Turma::getNome(){
    return this->nome;
}

void Turma::setNome(string nome){
    this->nome = nome;
}
