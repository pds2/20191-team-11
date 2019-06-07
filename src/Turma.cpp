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

Disciplina Turma::getDisciplinas(int codigo) {
	int i = 0;
    for (i=0;i<8;i++){
        if (this->_disc[i].getIdentificador() == codigo){
            return _disc[i];
        }
    }
}

/**
 * @param value
 */
void Turma::setDisciplinas(string nome, int identificador , int cargaHoraria) {
    int i = 0;
    bool aux = false;
    for (i=0;i<8;i++){
        if (this->_disc[i].getIdentificador() == 0){
            Disciplina(nome, identificador , cargaHoraria);
            aux = true;
            i = 8;
        }
    }
    if (aux == false){
        // tratar exceção. Limite máximo de turmas excedido.
    }
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