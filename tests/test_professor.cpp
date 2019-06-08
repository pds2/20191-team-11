#include "doctest.h"
#include "Professor.h"

TEST_CASE("Teste Professor - Declaracão") {
    CHECK_NOTHROW(Professor a ("Ronildo", "14/10/1997", "Mas", "Rua a ", 992739097, 8000, 666, "Matemática"));
    CHECK_NOTHROW(Professor a ());
}

TEST_CASE("Teste Professor - Get") {
    Professor a ("Ronildo", "14/10/1997", "Mas", "Rua a", 992739097, 8000, 666, "Matemática");
    CHECK_EQ(a.getNome(),"Ronildo");
    CHECK_EQ(a.getNascimento(),"14/10/1997");
    CHECK_EQ(a.getSexo(),"Mas");
    CHECK_EQ(a.getEndereco(),"Rua a");
    CHECK_EQ(a.getTelefone(),992739097);
    CHECK_EQ(a.getSalario(),8000);
    CHECK_EQ(a.getRegistro(),666);
    CHECK_EQ(a.getDisciplina(),"Matemática");
}

TEST_CASE("Teste Professor - Set"){
    Professor a;
    a.setNome("Isa");
    a.setNascimento("14/10/1997");
    a.setSexo("Fem");
    a.setEndereco("Rua a");
    a.setTelefone(992739097);
    a.setSalario(8000);
    a.setRegistro(666);
    a.setDisciplina("Matemática");
    CHECK_EQ(a.getNome(),"Isa");
    CHECK_EQ(a.getNascimento(),"14/10/1997");
    CHECK_EQ(a.getSexo(),"Fem");
    CHECK_EQ(a.getEndereco(),"Rua a");
    CHECK_EQ(a.getTelefone(),992739097);
    CHECK_EQ(a.getSalario(),8000);
    CHECK_EQ(a.getRegistro(),666);
    CHECK_EQ(a.getDisciplina(),"Matemática");
}

    