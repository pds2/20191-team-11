/**
 * @class Classe Professor
 * 
 * @brief A classe Professor gerencia os dados dos professores
 *
 * Project SIG - Escola Fundamental
 * @author Grupo 11
 */

#include "../include/Professor.h"
#include "../include/Pessoa.h"
#include <iostream>
#include <string>
using namespace std;

/**
 * Destrutor de Professor
 */
Professor::~Professor(){}

/**
 * Construtor de Professor
 */
Professor::Professor(){}

/**
 * Construtor de Professor com parâmetros iniciais
 *
 * @param nome - Nome do professor
 * @param datanascimento - Data de nascimento do professor
 * @param seco - Sexo do professor
 * @param endereco - Endereço do professor
 * @param telefone - Telefone do professor
 * @param salario - Salário do professor
 * @param registro - Registro do professor
 * @param idDisciplina - Disciplina ministrada pelo professor
 */
Professor::Professor(string nome, string dataNascimento, string sexo, string endereco, long telefone, float salario,
int registro, int idDisciplina ):
    Funcionario(nome,dataNascimento,sexo,endereco,telefone,salario,registro), _idDisciplina(idDisciplina) {};

/**
 * Método que retorna a disciplina
 *
 * @return disciplina do professor
 */
int Professor::getDisciplina() {
    return this->_idDisciplina;
}

/**
 * Método que atribui a disciplina
 *
 * @param value - Disciplina do professor
 */
void Professor::setDisciplina(int value) {
    this->_idDisciplina = value;
}
