/**
 * Project SIG - Escola Fundamental
 * @author Grupo 11
 */


#include "../include/Disciplina.h"

using namespace std;

Disciplina::~Disciplina(){}

Disciplina::Disciplina(string nome, int identificador , int cargaHoraria){
    this->_cargaHoraria = cargaHoraria;
    this->_nome = nome;
    this->_identificador = identificador;
}

string Disciplina::getNome() {
    return this->_nome;
}

void Disciplina::setNome(string value) {
    this->_nome=value;
}


int Disciplina::getIdentificador() {
    return this->_identificador;
}

void Disciplina::setIdentificador(int value) {
    this->_identificador = value;
}


int Disciplina::getCargaHoraria() {
    return this->_cargaHoraria;
}


void Disciplina::setCargaHoraria(int value) {
    this->_cargaHoraria;
}