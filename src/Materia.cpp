/**
 * Project SIG - Escola Fundamental
 * @author Grupo 11
 */

#include "../include/Disciplina.h"
#include "../include/Materia.h"
#include <iostream>
#include <string>
using namespace std;

Materia::~Materia(){}

Materia::Materia(string nome, int identificador , int cargaHoraria, int idMateria, int matriculaAluno, float nota, int ano , int idProfessor) :
    Disciplina(nome,identificador,cargaHoraria), _idMateria(idMateria), _matriculaAluno(matriculaAluno), _nota(nota),_ano(ano) , _idProfessor(idProfessor) {};

Materia::Materia(){};

void Materia::setIdMateria(int value){
    this->_idMateria = value;
}
int Materia::getIdMateria(){
    return this->_idMateria;
}

void Materia::setMatriculaAluno(int value){
    this->_matriculaAluno = value;
}
int Materia::getMatriculaAluno(){
    return this->_matriculaAluno;
}

void Materia::setNota(float value){
    this->_nota = value;
}
float Materia::getNota(){
    return this->_nota;
}

void Materia::setAno(int value){
    this->_ano=value;
}
int Materia::getAno(){
    return this->_ano;
}


void Materia::setIdProfessor(int value){
    this->_idProfessor=value;
}
int Materia::getIdProfessor(){
    return this->_idProfessor;
}