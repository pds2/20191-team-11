/**
 * Project SIG - Escola Fundamental
 * @author Grupo 11
 */


#include "../include/Turma.h"
#include <string>

#define EMTPY_VECTOR *(new vector<int>())

/**
 * Turma implementation
 */


/**
 * @return vector<int>
 */

vector<int>  Turma::getDisciplinas() {
    return this->_disciplinas;
}

/**
 * @param value
 */
void Turma::setDisciplinas(int identificador) {

    //fazer uma consulta ao "banco de dados" e verificar se o código da disciplina já está cadastrado. Senão, exibir exceção.
    this->_disciplinas.push_back(identificador);

}


/**
 * @return vector<int>
 */
vector<int> Turma::getAlunos() {
    return EMTPY_VECTOR;
}

/**
 * @param value
 */
void Turma::setAlunos(vector<int> value) {

}

/**
 * @return vector<int>
 */
vector<int> Turma::getProfessores() {
    return EMTPY_VECTOR;
}

/**
 * @param value
 */
void Turma::setProfessores(vector<int> value) {

}

/**
 * @return Horarios
 */
// Horarios Turma::getHorarios() {
//     return new Horarios();
// }

// /**
//  * @param value
//  */
// void Turma::setHorarios(Horarios value) {

// }

/**
 * @return int
 */
int Turma::getIdentificador() {
    return 0;
}

/**
 * @param value
 */
void Turma::setIdentificador(int value) {

}