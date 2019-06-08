#include "doctest.h"
#include "Aluno.h"

TEST_CASE("Teste Aluno - Declaracão") {
    CHECK_NOTHROW(Aluno a ("Isa", "14/10/1997", "Fem", "Rua a ", 992739097, 2016058328, "Edna", 2014));
    CHECK_NOTHROW(Aluno a ());
}

TEST_CASE("Teste Aluno - Get") {
    Aluno a ("Isa", "14/10/1997", "Fem", "Rua a", 992739097, 2016058328, "Edna", 2014);
    CHECK_EQ(a.getNome(),"Isa");
    CHECK_EQ(a.getNascimento(),"14/10/1997");
    CHECK_EQ(a.getSexo(),"Fem");
    CHECK_EQ(a.getEndereco(),"Rua a");
    CHECK_EQ(a.getTelefone(),992739097);
    CHECK_EQ(a.getMatricula(),2016058328);
    CHECK_EQ(a.getNomeResponsavelLegal(),"Edna");
    CHECK_EQ(a.getTurma(),2014);
}

TEST_CASE("Teste Aluno - Set"){
    Aluno a;
    a.setNome("Isa");
    a.setNascimento("14/10/1997");
    a.setSexo("Fem");
    a.setEndereco("Rua a");
    a.setTelefone(992739097);
    a.setMatricula(2016058328);
    a.setNomeResponsavelLegal("Edna");
    a.setTurma(2014);
    CHECK_EQ(a.getNome(),"Isa");
    CHECK_EQ(a.getNascimento(),"14/10/1997");
    CHECK_EQ(a.getSexo(),"Fem");
    CHECK_EQ(a.getEndereco(),"Rua a");
    CHECK_EQ(a.getTelefone(),992739097);
    CHECK_EQ(a.getMatricula(),2016058328);
    CHECK_EQ(a.getNomeResponsavelLegal(),"Edna");
    CHECK_EQ(a.getTurma(),2014);
}

    