/**
 * Project SIG - Escola Fundamental
 * @author Grupo 11
 */
#include "../include/FuncAdm.h"
#include "../include/Pessoa.h"
#include "../include/Aluno.h"
#include "../include/Funcionario.h"
#include <iostream>
#include <string>
using namespace std;
/**
 * FuncAdm implementation
 */

FuncAdm::~FuncAdm(){}

FuncAdm::FuncAdm(string nome, string dataNascimento, string sexo, string endereco, long telefone, float salario, int registro, string setor ) :
    Funcionario(nome,dataNascimento,sexo,endereco,telefone,salario,registro), _setor(setor) {};


string FuncAdm::getSetor() {
    return this->_setor;
}

void FuncAdm::setSetor(string value) {
    this->_setor = value;
}

Aluno* FuncAdm::cadastrarAluno(){
    string nome , dataNascimento , sexo , endereco , nomeResponsavelLegal;
    int matricula , turma;
    long telefone;
    cout << "Digite o nome do aluno" << endl;
    cin >> nome;
    cout << "Digite a data de nascimento" << endl;
    cin >> dataNascimento;
    cout << "Digite o sexo do aluno" << endl;
    cin >> sexo;
    cout << "Digite o endereco" << endl;
    cin >> endereco;
    cout << "Digite o nome do responsavel legal pelo aluno" << endl;
    cin >> nomeResponsavelLegal;
    cout << "Digite o telefone do aluno" << endl;
    cin >> telefone;
    cout << "Digite a matricula do aluno" << endl;
    cin >> matricula;
    cout << "Digite o id da turma que o aluno sera vinculado" << endl;
    cin >> turma;
    Aluno *aluno = new Aluno( nome,  dataNascimento,  sexo,  endereco,  telefone,  matricula,  nomeResponsavelLegal,  turma );
    cout << "O aluno " << aluno->getNome() << " foi cadastrado com sucesso!";
    return aluno;
}