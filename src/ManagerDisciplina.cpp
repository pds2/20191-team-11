#include "../include/ManagerDisciplina.h"
#include "../include/Manager.h"

ManagerDisciplina::ManagerDisciplina() : Manager<Disciplina>() {}

ManagerDisciplina::ManagerDisciplina(string nome,map<int,Disciplina*> disciplinas) : Manager<Disciplina>(nome,disciplinas){}

ManagerDisciplina::~ManagerDisciplina(){}

/*Função para cadastar uma disciplina
Ao cadastrar uma disciplina, não é informado qual professor
irá ministra-la. Afinal, é possível que mais de um professor de a
mesma disciplina. Apenas no cadastro de professor é feito o vinculo 
de qual disciplina ele ministrará 
*/
void ManagerDisciplina::cadastrar(){
    string nome , identificadorString , cargaHorariaString ;
    int identificador, cargaHoraria;
    
    cout << "Digite o identificador da disciplina" << endl;
    cin.ignore();
    getline(cin,identificadorString);
    identificador = atoi(identificadorString.c_str());
    if ( this->getItens()->find(identificador) != this->getItens()->end() ) {
        throw std::invalid_argument("Ja existe uma disciplina com o identificador " + identificadorString);
    }else{
        cout << "Digite o nome da disciplina" << endl;
        getline(cin,nome);
        cout << "Digite a carga horária" << endl;
        getline(cin,cargaHorariaString);
        cargaHoraria = atoi(cargaHorariaString.c_str());
        this->insereItem(identificador,new Disciplina(nome,  identificador, cargaHoraria));
        cout << "Disciplina "<<nome<<" cadastrada com sucesso!" << endl;
    }
}
