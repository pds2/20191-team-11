/**
 * @class Classe Funcionario
 * 
 * @brief A classe Funcionario gerencia os dados dos funcionários
 *
 * @details Essa classe serve de base para outros tipos mais específicos
 * de funcionários como FuncAdm.
 *
 * Project SIG - Escola Fundamental
 * @author Grupo 11
 */

#include "../include/Pessoa.h"
#include "../include/Funcionario.h"
#include <iostream>
#include <string>
using namespace std;

/**
 * Destrutor de Funcionario
 */
Funcionario::~Funcionario(){}

/**
 * Construtor de Funcionario
 */
Funcionario::Funcionario(){}

/**
 * Construtor de Funcionario com parâmetros iniciais
 *
 * @param nome - Nome do funcionario
 * @param datanascimento - Data de nascimento do funcionario
 * @param seco - Sexo do funcionario
 * @param endereco - Endereço do funcionario
 * @param telefone - Telefone do funcionario
 * @param salario - Salário do funcionario
 * @param registro - Registro do funcionario
 */
Funcionario::Funcionario(string nome,string dataNascimento, string sexo, string endereco, long telefone, float salario, int registro ) :
    Pessoa(nome,dataNascimento,sexo,endereco,telefone),  _salario(salario) , _registro(registro) {};

/**
 * Método que retorna o salário
 *
 * @return salário do funcionário
 */
float Funcionario::getSalario(){
    return this->_salario;
}

/**
 * Método que atribui o salário
 *
 * @param value - Salário do funcionário
 */
void Funcionario::setSalario(float value){
    this->_salario = value;
}

/**
 * Método que retorna o registro
 *
 * @return ID do registro do funcionário
 */
int Funcionario::getRegistro(){
    return this->_registro;
}

/**
 * Método que atribui o registro
 *
 * @param value - ID do registro do funcionário
 */
void Funcionario::setRegistro(int value){
    this->_registro = value;
}

/**
 * Método que recupera ID do funcionário
 *
 * @return ID do funcionário
 */
int Funcionario::getId(){
    return this->_registro;
}