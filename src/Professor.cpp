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
int registro, int idDisciplina ):
    Funcionario(nome,dataNascimento,sexo,endereco,telefone,salario,registro), _idDisciplina(idDisciplina) {};

int Professor::getDisciplina() {
    return this->_idDisciplina;
}

void Professor::setDisciplina(int value) {
    this->_idDisciplina = value;
}
