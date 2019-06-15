/**
 * @class Classe FuncAdm
 * 
 * @brief A classe FuncAdm gerencia os dados dos func. administrativos
 *
 * Project SIG - Escola Fundamental
 * @author Grupo 11
 */

#include "../include/FuncAdm.h"
#include "../include/Pessoa.h"
#include "../include/FuncAdm.h"
#include "../include/Funcionario.h"
#include "../include/ManagerFuncAdm.h"
#include <iostream>
#include <string>
using namespace std;

/**
 * Construtor de FuncAdm
 */
FuncAdm::FuncAdm(){}

/**
 * Destrutor de FuncAdm
 */
FuncAdm::~FuncAdm(){}

/**
 * Construtor de FuncAdm com parâmetros iniciais
 *
 * @param nome - Nome do func. administrativo
 * @param datanascimento - Data de nascimento do func. administrativo
 * @param seco - Sexo do func. administrativo
 * @param endereco - Endereço do func. administrativo
 * @param telefone - Telefone do func. administrativo
 * @param salario - Salário do func. administrativo
 * @param registro - Registro do func. administrativo
 * @param setor - Setor do func. administrativo
 */
FuncAdm::FuncAdm(string nome, string dataNascimento, string sexo, string endereco, long telefone, float salario, int registro, string setor ) :
    Funcionario(nome,dataNascimento,sexo,endereco,telefone,salario,registro), _setor(setor) {};

 /**
 * Método que retorna setor
 *
 * @return setor do func. administrativo
 */
string FuncAdm::getSetor() {
    return this->_setor;
}

/**
 * Método que atribui setor
 *
 * @param value - Setor do func. administrativo
 */
void FuncAdm::setSetor(string value) {
    this->_setor = value;
}
