/**
 * Project SIG - Escola Fundamental
 * @author Grupo 11
 */
#include "../include/FuncAdm.h"
#include "../include/Pessoa.h"
#include "../include/Funcionario.h"
#include <iostream>
#include <string>
using namespace std;
/**
 * FuncAdm implementation
 */

FuncAdm::~FuncAdm(){}

FuncAdm::FuncAdm(string nome, string dataNascimento, string sexo, string endereco, long telefone, float salario, int registro, string setor ) :
    Funcionario(nome,dataNascimento,sexo,endereco,telefone,salario,registro), _setor(setor) {};


string FuncAdm::getSetor() {
    return this->_setor;
}

void FuncAdm::setSetor(string value) {
    this->_setor = value;
}
