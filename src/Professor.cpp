/**
 * Project SIG - Escola Fundamental
 * @author Grupo 11
 */
#include "../include/Professor.h"
#include "../include/Pessoa.h"
#include <iostream>
#include <string>
using namespace std;

/**
 * Professor implementation
 */
Professor::~Professor(){}

Professor::Professor(){}

Professor::Professor(string nome, string dataNascimento, string sexo, string endereco, long telefone, float salario,
int registro, string disciplina ):
    Funcionario(nome,dataNascimento,sexo,endereco,telefone,salario,registro), _disciplina(disciplina) {};

string Professor::getDisciplina() {
    return this->_disciplina;
}

void Professor::setDisciplina(string value) {
    this->_disciplina = value;
}

/*vector<int> Professor::getTurmas() {
    return null;
}

void Professor::setTurmas(vector<int> value) {

}*/