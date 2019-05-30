/**
 * Project SIG - Escola Fundamental
 * @author Grupo 11
 */
#include "FuncAdm.h"
#include "Pessoa.h"
#include "Funcionario.h"
#include <iostream>
#include <string>
using namespace std;
/**
 * FuncAdm implementation
 */

FuncAdm::FuncAdm(string nome, string dataNascimento, string sexo, string endereco, int telefone, float salario,
int registro, string setor ){
    
    this->_nome = nome;
    this->_dataNascimento = dataNascimento;
    this->_sexo = sexo;
    this->_endereco = endereco;
    this->_telefone = telefone;
    this->_salario = salario;
    this->_registro = registro;
    this->_setor = setor;
}

string FuncAdm::getSetor() {
    return this->_setor;
}

void FuncAdm::setSetor(string value) {
    this->_setor = value;
}

//Funcionario 

float FuncAdm::getSalario(){
    return this->_salario;
}
void FuncAdm::setSalario(float value){
    this->_salario = value;
}
int FuncAdm::getRegistro(){
    return this->_registro;
}
void FuncAdm::setRegistro(int value){
    this->_registro = value;
}

// Pessoa

string FuncAdm::getNome(){
    return this->_nome;
}

void FuncAdm::setNome(string value){
    this->_nome = value;
}

string FuncAdm::getNascimento(){
    return this->_dataNascimento;
}

void FuncAdm::setNascimento(string value){
    this->_dataNascimento = value;
}
	
string FuncAdm::getSexo(){
    return this->_sexo;
}
void FuncAdm::setSexo(string value){
    this->_sexo = value;
}
	
string FuncAdm::getEndereco(){
    return this->_endereco;
}
void FuncAdm::setEndereco(string value){
    this->_endereco = value;
}
	
int FuncAdm::getTelefone(){
    return this->_telefone;
}
void FuncAdm::setTelefone(int value) {
    this->_telefone = value;
}