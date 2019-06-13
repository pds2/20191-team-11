#ifndef MAN_MATERIA
#define MAN_MATERIA

#include "../include/Manager.h"
#include "../include/Materia.h"
#include "../include/ManagerDisciplina.h"
#include "../include/ManagerAluno.h"
#include "../include/ManagerProfessor.h"
#include <map>

class ManagerMateria : public Manager<Materia> {
    public:
        ManagerMateria();
        ManagerMateria(string,map<int,Materia*>);
        ~ManagerMateria();
        void cadastrar(ManagerDisciplina &mDisciplina, ManagerAluno &mAluno,ManagerProfessor &mProfessor);
        void listarMateriaPorAluno(int matricula , int idMateria,ManagerAluno &mAluno);
        void listarTodasMateriasAluno(int matricula,ManagerAluno &mAluno);
        void lancarNotaAluno(ManagerAluno &mAluno, ManagerProfessor &mProfessor ,  int idProfessor);        
		void listarSetMateriasPorAluno(int matricula , ManagerAluno &mAluno);		      
		void calcularNotaPorAluno(int matricula , ManagerAluno &mAluno, int cod_Disc);

};

#endif