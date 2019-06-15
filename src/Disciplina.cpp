/**
 * @class Classe Disciplina
 * 
 * @brief A classe Disciplina gerencia os dados das disciplinas ofertadas
 *
 * Project SIG - Escola Fundamental
 * @author Grupo 11
 */


#include "../include/Disciplina.h"

using namespace std;

/**
 * Construtor de Disciplina
 */
// Disciplina::Disciplina(){}

/**
 * Destrutor de Disciplina
 */
Disciplina::~Disciplina(){}


/**
 * Construtor de Disciplina com parâmetros iniciais
 *
 * @param nome - Nome da disciplina
 * @param identificador - Identificador da disciplina
 * @param cargaHoraria - Carga horária da disciplina
 */
Disciplina::Disciplina(string nome, int identificador , int cargaHoraria){
    this->_cargaHoraria = cargaHoraria;
    this->_nome = nome;
    this->_identificador = identificador;
}

/**
 * Método que retorna nome
 *
 * @return nome da disciplina
 */
string Disciplina::getNome() {
    return this->_nome;
}

/**
 * Método que recupera ID da disciplina
 *
 * @return ID da disciplina
 */
int Disciplina::getId(){
    return this->_identificador;
}

/**
 * Método que atribui nome
 *
 * @param value - Nome da disciplina
 */
void Disciplina::setNome(string value) {
    this->_nome=value;
}

/**
 * Método que retorna identificador
 *
 * @return identificador da disciplina
 */
int Disciplina::getIdentificador() {
    return this->_identificador;
}

/**
 * Método que atribui identificador
 *
 * @param value - Identificador da disciplina
 */
void Disciplina::setIdentificador(int value) {
    this->_identificador = value;
}

/**
 * Método que retorna professor
 *
 * @return professor da disciplina
 */
string Disciplina::getProfessor() {
    return this->_professor;
}

/**
 * Método que atribui professor
 *
 * @param value - Professor da disciplina
 */
void Disciplina::setProfessor(string value) {
    this->_professor=value;
}

/**
 * Método que retorna carga horária
 *
 * @return carga horária da disciplina
 */
int Disciplina::getCargaHoraria() {
    return this->_cargaHoraria;
}

/**
 * Método que atribui carga horária
 *
 * @param value - Carga horária da disciplina
 */
void Disciplina::setCargaHoraria(int value) {
    this->_cargaHoraria = value;
}