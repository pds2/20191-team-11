/**
 * Project SIG - Escola Fundamental
 * @author Grupo 11
 */
#include "Professor.h"
#include "Pessoa.h"
#include <iostream>
#include <string>
using namespace std;

/**
 * Professor implementation
 */

Professor::Professor(string nome, string dataNascimento, string sexo, string endereco, int telefone, float salario,
int registro, string disciplina ){
    
    this->_nome = nome;
    this->_dataNascimento = dataNascimento;
    this->_sexo = sexo;
    this->_endereco = endereco;
    this->_telefone = telefone;
    this->_salario = salario;
    this->_registro = registro;
    this->_disciplina = disciplina;
}

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

//Funcionario 

float Professor::getSalario(){
    return this->_salario;
}
void Professor::setSalario(float value){
    this->_salario = value;
}
int Professor::getRegistro(){
    return this->_registro;
}
void Professor::setRegistro(int value){
    this->_registro = value;
}

// Pessoa

string Professor::getNome(){
    return this->_nome;
}

void Professor::setNome(string value){
    this->_nome = value;
}

string Professor::getNascimento(){
    return this->_dataNascimento;
}

void Professor::setNascimento(string value){
    this->_dataNascimento = value;
}
	
string Professor::getSexo(){
    return this->_sexo;
}
void Professor::setSexo(string value){
    this->_sexo = value;
}
	
string Professor::getEndereco(){
    return this->_endereco;
}
void Professor::setEndereco(string value){
    this->_endereco = value;
}
	
int Professor::getTelefone(){
    return this->_telefone;
}
void Professor::setTelefone(int value) {
    this->_telefone = value;
}