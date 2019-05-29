/**
 * Project SIG - Escola Fundamental
 * @author Grupo 11
 */


#ifndef _HISTORICOANUAL_H
#define _HISTORICOANUAL_H

#include <map>
using namespace std;

class HistoricoAnual {
public: 
	map<int,int> notas;
	
int getAno();
	
/**
 * @param value
 */
void setAno(int value);
	
map<int,int> getNotas();
	
/**
 * @param value
 */
void setNotas(map<int,int> value);
private: 
	int ano;
};

#endif //_HISTORICOANUAL_H