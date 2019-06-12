/**
 * Project SIG - Escola Fundamental
 * @author Grupo 11
 */


#include "../include/Aluno.h"
#include "../include/Pessoa.h"
#include <iostream>
#include <string>
using namespace std;

Aluno::~Aluno(){}

Aluno::Aluno(string nome,string dataNascimento, string sexo, string endereco, long telefone, int matricula, string nomeResponsavelLegal, int turma ) :
    Pessoa(nome,dataNascimento,sexo,endereco,telefone), _matricula(matricula) , _nomeResponsavelLegal(nomeResponsavelLegal) , _turma(turma) {};

Aluno::Aluno(){};


set<int>  Aluno::getMateria(){
        return this->_materiasInseridas;
}

void Aluno::setMateria(set<int> materiasInseridas){
        this->_materiasInseridas = materiasInseridas;
}


float Aluno::CalculaNota(int disciplina) {
    return 0.0;
}

int Aluno::getMatricula() {
    return this->_matricula;
}

void Aluno::setMatricula(int value) {
    this->_matricula = value;
}

int Aluno::getId(){
    return this->_matricula;
}

string Aluno::getNomeResponsavelLegal() {
    return this->_nomeResponsavelLegal;
}

void Aluno::setNomeResponsavelLegal(string value) {
    this->_nomeResponsavelLegal = value;
}

int Aluno::getTurma() {
    return this->_turma;
}


void Aluno::setTurma(int value) {
    this->_turma = value;
}

/*Historico Aluno::getHistorico() {
    return null;
}

void Aluno::setHistorico(Historico value) {

}*/