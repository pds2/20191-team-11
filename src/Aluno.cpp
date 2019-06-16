/**
 * @class Classe Aluno
 * 
 * @brief A classe Aluno gerencia os dados dos alunos
 *
 * Project SIG - Escola Fundamental
 * @author Grupo 11
 */


#include "../include/Aluno.h"
#include "../include/Pessoa.h"
#include <iostream>
#include <string>
using namespace std;

/**
 * Construtor de Aluno
 */
Aluno::~Aluno(){}

/**
 * Construtor de Aluno com parâmetros iniciais
 *
 * @param nome - Nome do aluno
 * @param datanascimento - Data de nascimento do aluno
 * @param seco - Sexo do aluno
 * @param endereco - Endereço do aluno
 * @param telefone - Telefone do aluno
 * @param matricula - Matrícula do aluno
 * @param nomeResponsavelLegal - Nome do responsável legal pelo aluno
 * @param turma - ID da turma à qual o aluno estará associado
 */
Aluno::Aluno(string nome,string dataNascimento, string sexo, string endereco, long telefone, int matricula, string nomeResponsavelLegal, int turma ) :
    Pessoa(nome,dataNascimento,sexo,endereco,telefone), _matricula(matricula) , _nomeResponsavelLegal(nomeResponsavelLegal) , _turma(turma) {};

/**
 * Destrutor de Aluno
 */
Aluno::Aluno(){};

/**
 * Método que retorna a matéria ao aluno
 *
 * @return set com ID's de matérias
 * Apartir desses ids é possível que o aluno visualize suas notas
 */

set<int>  Aluno::getMateria(){
        return this->_materiasInseridas;
}

/**
 * Método que atribui uma matéria ao aluno
 *
 * @param materiasInseridas - Set de ID's de matérias
 */
void Aluno::setMateria(set<int> materiasInseridas){
        this->_materiasInseridas = materiasInseridas;
}

/**
 * Método que configura nota inicial '0.0'
 *
 * @param disciplina - disciplina associada ao aluno
 * @return nota '0.0'
 */
float Aluno::CalculaNota(int disciplina) {
    return 0.0;
}

/**
 * Método que retorna a matrícula ao aluno
 *
 * @return matrícula do aluno
 */
int Aluno::getMatricula() {
    return this->_matricula;
}

/**
 * Método que atribui uma matrícula ao aluno
 *
 * @param value - ID de matrícula do aluno
 */
void Aluno::setMatricula(int value) {
    this->_matricula = value;
}

/**
 * Método que retorna o ID do aluno
 *
 * @return ID do aluno
 */
int Aluno::getId(){
    return this->_matricula;
}

/**
 * Método que retorna o nome do responsável legal pelo aluno
 *
 * @return nome do responsável legal
 */
string Aluno::getNomeResponsavelLegal() {
    return this->_nomeResponsavelLegal;
}

/**
 * Método que atribui o nome do responsável legal pelo aluno
 *
 * @param value - Nome do responsável legal
 */
void Aluno::setNomeResponsavelLegal(string value) {
    this->_nomeResponsavelLegal = value;
}

/**
 * Método que retorna a turma do aluno
 *
 * @return ID da turma do aluno
 */
int Aluno::getTurma() {
    return this->_turma;
}

/**
 * Método que atribui uma turma ao aluno
 *
 * @param value - ID da turma
 */
void Aluno::setTurma(int value) {
    this->_turma = value;
}
