/**
 * @class Classe Pessoa
 * 
 * @brief A classe Pessoa gerencia os dados básicos pessoais
 *
 * @details Todas as outras classes que gerenciam diferentes
 * sujeitos do sistema como, Aluno, Funcionário e etc., utilizam
 * desta classe para tratar as informações básicas comuns a todos. 
 *
 * Project SIG - Escola Fundamental
 * @author Grupo 11
 */

#include "../include/Pessoa.h"
#include <iostream>
#include <string>
using namespace std;

/**
 * Destrutor de Pessoa
 */
Pessoa::~Pessoa(){}

/**
 * Construtor de Pessoa
 */
Pessoa::Pessoa(){}

/**
 * Construtor de Pessoa com parâmetros iniciais
 *
 * @param nome - Nome da pessoa
 * @param datanascimento - Data de nascimento da pessoa
 * @param seco - Sexo da pessoa
 * @param endereco - Endereço da pessoa
 * @param telefone - Telefone da pessoa
 */
Pessoa::Pessoa(
        string nome, 
        string dataNascimento, 
        string sexo, 
        string endereco, 
        long telefone
        ){
    this->_nome = nome;
    this->_dataNascimento = dataNascimento;
    this->_sexo = sexo;
    this->_endereco = endereco;
    this->_telefone = telefone;
}

/**
 * Método que retorna o nome
 *
 * @return nome da pessoa
 */
string Pessoa::getNome(){
    return this->_nome;
}

/**
 * Método que atribui o nome
 *
 * @param value - Nome da pessoa
 */
void Pessoa::setNome(string value){
    this->_nome = value;
}

/**
 * Método que retorna o nascimento
 *
 * @return data de nascimento da pessoa
 */
string Pessoa::getNascimento(){
    return this->_dataNascimento;
}

/**
 * Método que atribui o nascimento
 *
 * @param value - Data de nascimento da pessoa
 */
void Pessoa::setNascimento(string value){
    this->_dataNascimento = value;
}

/**
 * Método que retorna o sexo
 *
 * @return sexo da pessoa
 */	
string Pessoa::getSexo(){
    return this->_sexo;
}

/**
 * Método que atribui o sexo
 *
 * @param value - Sexo da pessoa
 */
void Pessoa::setSexo(string value){
    this->_sexo = value;
}

/**
 * Método que retorna o endereço
 *
 * @return endereço da pessoa
 */	
string Pessoa::getEndereco(){
    return this->_endereco;
}

/**
 * Método que atribui o endereço
 *
 * @param value - Endereço da pessoa
 */
void Pessoa::setEndereco(string value){
    this->_endereco = value;
}

/**
 * Método que retorna o telefone
 *
 * @return telefone da pessoa
 */	
long Pessoa::getTelefone(){
    return this->_telefone;
}

/**
 * Método que atribui o telefone
 *
 * @param value - Telefone da pessoa
 */
void Pessoa::setTelefone(long value) {
    this->_telefone = value;
}