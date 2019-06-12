/**
 * Project SIG - Escola Fundamental
 * @author Grupo 11
 */
#ifndef _MATERIA_H
#define _MATERIA_H

#include "Disciplina.h"
#include <iostream>
#include <map>
#include <string>
#include <map>

using namespace std;


class Materia: public Disciplina {
	private: 
		int _idMateria;
        int _matriculaAluno;
        float _nota;
        int _ano;

	public: 

	Materia();
    ~Materia();
    Materia(string _nome, int _identificador , int _cargaHoraria, int _idMateria, int _matriculaAluno, float _nota, int _ano);

    void setIdMateria(int value);
    int getIdMateria();

    void setMatriculaAluno(int value);
    int getMatriculaAluno();

    void setNota(float value);
    float getNota();

    void setAno(int value);
    int getAno();
};

#endif //_MATERIA_H