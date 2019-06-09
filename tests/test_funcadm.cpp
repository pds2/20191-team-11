#include "doctest.h"
#include "FuncAdm.h"

string nomeFuncAdm = "Romualdo";
string dataNascimento = "14/07/1988";
string sexo = "M";
string endereco = "Rua dos bobos";
long telefone = 31988123361;
float salario = 980.5;
int registro = 25;
string setor = "Administração";

TEST_CASE("Teste FuncAdm - Declaracão") {
    CHECK_NOTHROW(FuncAdm a (nomeFuncAdm, dataNascimento, sexo, endereco,telefone,salario,registro,setor));
    CHECK_NOTHROW(FuncAdm a ());
}

TEST_CASE("Teste FuncAdm - Get") {
    FuncAdm a (nomeFuncAdm, dataNascimento, sexo, endereco,telefone,salario,registro,setor);
    CHECK_EQ(a.getNome(),nomeFuncAdm);
    CHECK_EQ(a.getNascimento(),dataNascimento);
    CHECK_EQ(a.getSexo(),sexo);
    CHECK_EQ(a.getEndereco(),endereco);
    CHECK_EQ(a.getTelefone(),telefone);
    CHECK_EQ(a.getSalario(),salario);
    CHECK_EQ(a.getRegistro(),registro);
    CHECK_EQ(a.getSetor(),setor);
    
}

TEST_CASE("Teste FuncAdm - Set"){
    FuncAdm a;
    a.setNome(nomeFuncAdm);
    a.setNascimento(dataNascimento);
    a.setSexo(sexo);
    a.setEndereco(endereco);
    a.setTelefone(telefone);
    a.setSalario(salario);
    a.setRegistro(registro);
    a.setSetor(setor);
    CHECK_EQ(a.getNome(),nomeFuncAdm);
    CHECK_EQ(a.getNascimento(),dataNascimento);
    CHECK_EQ(a.getSexo(),sexo);
    CHECK_EQ(a.getEndereco(),endereco);
    CHECK_EQ(a.getTelefone(),telefone);
    CHECK_EQ(a.getSalario(),salario);
    CHECK_EQ(a.getRegistro(),registro);
    CHECK_EQ(a.getSetor(),setor);
}

    