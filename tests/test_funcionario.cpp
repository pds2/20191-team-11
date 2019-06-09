#include "doctest.h"
#include "Funcionario.h"

string nomeFuncionario = "Romualdo";
string dataNascimentoFunc = "14/07/1988";
string sexoFunc = "M";
string enderecoFunc = "Rua dos bobos";
long telefoneFunc = 31988123361;
float salarioFunc = 980.5;
int registroFunc = 25;

TEST_CASE("Teste Funcionario - Declaracão") {
    CHECK_NOTHROW(Funcionario a (nomeFuncionario, dataNascimentoFunc, sexoFunc, enderecoFunc,telefoneFunc,salarioFunc,registroFunc));
    CHECK_NOTHROW(Funcionario a ());
}

TEST_CASE("Teste Funcionario - Get") {
    Funcionario a (nomeFuncionario, dataNascimentoFunc, sexoFunc, enderecoFunc,telefoneFunc,salarioFunc,registroFunc);
    CHECK_EQ(a.getNome(),nomeFuncionario);
    CHECK_EQ(a.getNascimento(),dataNascimentoFunc);
    CHECK_EQ(a.getSexo(),sexoFunc);
    CHECK_EQ(a.getEndereco(),enderecoFunc);
    CHECK_EQ(a.getTelefone(),telefoneFunc);
    CHECK_EQ(a.getSalario(),salarioFunc);
    CHECK_EQ(a.getRegistro(),registroFunc);
    
}

TEST_CASE("Teste Funcionario - Set"){
    Funcionario a;
    a.setNome(nomeFuncionario);
    a.setNascimento(dataNascimentoFunc);
    a.setSexo(sexoFunc);
    a.setEndereco(enderecoFunc);
    a.setTelefone(telefoneFunc);
    a.setSalario(salarioFunc);
    a.setRegistro(registroFunc);
    CHECK_EQ(a.getNome(),nomeFuncionario);
    CHECK_EQ(a.getNascimento(),dataNascimentoFunc);
    CHECK_EQ(a.getSexo(),sexoFunc);
    CHECK_EQ(a.getEndereco(),enderecoFunc);
    CHECK_EQ(a.getTelefone(),telefoneFunc);
    CHECK_EQ(a.getSalario(),salarioFunc);
    CHECK_EQ(a.getRegistro(),registroFunc);
}

    