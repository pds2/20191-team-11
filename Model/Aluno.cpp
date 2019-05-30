/**
 * Project SIG - Escola Fundamental
 * @author Grupo 11
 */


#include "Aluno.h"
#include "Pessoa.h"
#include <iostream>
#include <string>
using namespace std;


Aluno::Aluno(string nome, string dataNascimento, string sexo, string endereco, int telefone, int matricula, 
string nomeResponsavelLegal, int turma ){
    this->_nome = nome;
    this->_dataNascimento = dataNascimento;
    this->_sexo = sexo;
    this->_endereco = endereco;
    this->_telefone = telefone;
    this->_matricula = matricula;
    this->_nomeResponsavelLegal = nomeResponsavelLegal;
    this->_turma = turma;
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

// Pessoa

string Aluno::getNome(){
    return this->_nome;
}

void Aluno::setNome(string value){
    this->_nome = value;
}

string Aluno::getNascimento(){
    return this->_dataNascimento;
}

void Aluno::setNascimento(string value){
    this->_dataNascimento = value;
}
	
string Aluno::getSexo(){
    return this->_sexo;
}
void Aluno::setSexo(string value){
    this->_sexo = value;
}
	
string Aluno::getEndereco(){
    return this->_endereco;
}
void Aluno::setEndereco(string value){
    this->_endereco = value;
}
	
int Aluno::getTelefone(){
    return this->_telefone;
}
void Aluno::setTelefone(int value) {
    this->_telefone = value;
}