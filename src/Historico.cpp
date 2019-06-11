/**
 * Project SIG - Escola Fundamental
 * @author Grupo 11
 */


#include "../include/Historico.h"

Historico::Historico(int codigoDisc, int codigoTurma, string descricaoAtiv, float nota, float valorAtiv, int ano) {
	this->_codigoDisc = codigoDisc;
	this->_codigoTurma = codigoTurma;
	this->_descricaoAtiv = descricaoAtiv;
	this->_nota = nota;
	this->_valorAtiv = valorAtiv;
	this->_ano = ano;
}

int Historico::getCodigoDisc(){
	return this->_codigoDisc;
}

void Historico::setCodigoDisc(int value){
	this->_codigoDisc = value;
}

int Historico::getCodigoTurma(){
	return this->_codigoTurma;
}

void Historico::setCodigoTurma(int value){
	this->_codigoTurma = value;
}

string Historico::getDescricaoAtiv(){
	return this->_descricaoAtiv;
}

void Historico::setDescricaoAtiv(string value){
	this->_descricaoAtiv = value;
}	

float Historico::getnota(){
	return this->_nota;
}

void Historico::setnota(float value){
	this->_nota = value;
}

float Historico::getValorAtiv(){
	return this->_valorAtiv;
}

void Historico::setValorAtiv(float value){
	this->_valorAtiv = value;
}

float Historico::getAno(){
	return this->_ano;

}

void Historico::setAno(float value){
	this->_ano = value;
}


/**
 * @return int
 */	

/**
 * @return vector<HistoricoAnual>
 */
/*vector<HistoricoAnual> Historico::getDesempenho() {
    return *(new vector<HistoricoAnual>);
}
*/
/**
 * @param value
 */
/*void Historico::setDesempenho(vector<HistoricoAnual> value) {

}*/