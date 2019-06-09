#include "doctest.h"
#include "Disciplina.h"

string nome = nome;
int identificador = 123;
int carga_horaria = 666;
string professor = "Robert Johnson";

TEST_CASE("Teste Disciplina - Declaracão") {
    CHECK_NOTHROW(Disciplina a (nome, identificador, carga_horaria, professor));
    CHECK_NOTHROW(Disciplina a ());
}

TEST_CASE("Teste Disciplina - Get") {
    Disciplina a (nome, identificador, carga_horaria, professor);
    CHECK_EQ(a.getNome(),nome);
    CHECK_EQ(a.getIdentificador(),identificador);
    CHECK_EQ(a.getCargaHoraria(),carga_horaria);
    CHECK_EQ(a.getProfessor(),professor);
}

TEST_CASE("Teste Disciplina - Set"){
    Disciplina a;
    a.setNome(nome);
    a.setIdentificador(identificador);
    a.setCargaHoraria(carga_horaria);
    a.setProfessor(professor);
    CHECK_EQ(a.getNome(),nome);
    CHECK_EQ(a.getIdentificador(),identificador);
    CHECK_EQ(a.getCargaHoraria(),carga_horaria);
    CHECK_EQ(a.getProfessor(),professor);
}

    