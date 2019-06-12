/**
 * Project SIG - Escola Fundamental
 * @author Grupo 11
 */


#ifndef _HISTORICO_H
#define _HISTORICO_H

#include <vector>
#include <string>
using namespace std;

class Historico {


private:
	int _codigoDisc;
	int _codigoTurma;
	string _descricaoAtiv;
	float _nota;
	float _valorAtiv;
	int _ano;
	

public: 

Historico(int codigoDisc, int codigoTurma, string descricaoAtiv, float nota, float valorAtiv, int ano);
~Historico();

int getCodigoDisc();

void setCodigoDisc(int value);

int getCodigoTurma();

void setCodigoTurma(int value);

string getDescricaoAtiv();

void setDescricaoAtiv(string value);

float getnota();

void setnota(float value);

float getValorAtiv();

void setValorAtiv(float value);

float getAno();

void setAno(float value);
};

#endif //_HISTORICO_H