#include "Aluno.h"
#include "Pessoa.h"
#include "Professor.h"
#include "Funcionario.h"
#include "FuncAdm.h"
#include <iostream>
#include <string>
using namespace std;


int main(){
    std::cout << "Use o main para testar seu programa!" << std::endl;

    Aluno a ("Isa", "14/10/1997", "Fem", "Rua a ", 992739097, 2016058328, "Edna", 2014);
    std::cout << a.getNome() <<" "<< a.getNascimento() <<" "<< a.getSexo() <<" "<< a.getEndereco() <<" "<< a.getTelefone() <<" " << a.getMatricula() <<" " << a.getNomeResponsavelLegal() <<" "<< a.getTurma() << std::endl;
    a.setNome("Isabela Meneguci");
    std::cout << a.getNome() << std::endl;


    Professor p ("Fabio", "25/12/1968", "Masc", "Rua b", 998739085, 5000.20, 40058327, "matematica" );
    std::cout << p.getNome() <<" "<< p.getNascimento() <<" "<< p.getSexo() <<" "<< p.getEndereco() <<" "<< p.getTelefone()<<" "<<p.getSalario()<<" "<<p.getRegistro()<<" "<<p.getDisciplina() << std::endl;
    p.setSalario(852.50);
    std::cout << p.getSalario() << std::endl;

    FuncAdm f ("Carlos", "12/11/1967", "Masc", "Rua c", 998739785, 4000.10, 40058122, "diretoria" );
    std::cout << f.getNome() <<" "<< f.getNascimento() <<" "<< f.getSexo() <<" "<< f.getEndereco() <<" "<< f.getTelefone()<<" "<<f.getSalario()<<" "<<f.getRegistro()<<" "<<f.getSetor() << std::endl;
    f.setSetor("Sericos gerais");
    f.setSalario(1500);
    std::cout <<f.getSetor() <<" "<< f.getSalario() << std::endl;

    return 0;
    
}