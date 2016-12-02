// Exemplos desenvolvidos para ilustrar a sintaxe da linguagem.

#include <iostream>
#include <string>
#include "TesteUnidade.h"
#include "Apresentacao.h"
#include "Interfaces.h"
#include "Stubs.h"
#include "Controladoras.h"

using namespace std;

int main()
{
    // Ligação entre controladora de autenticação e stub de negócio.

    CntrIUAutenticacao  *cntrIUAutenticacao = new CntrIUAutenticacao();
    ILNAutenticacao *stubLNAutenticacao = new StubLNAutenticacao();

    // Liga (link) instância de controladora a instância de stub.

    cntrIUAutenticacao->setCntrLNAutenticacao(stubLNAutenticacao);

    // Para facilitar o teste informa os valores inválidos.

    cout << endl << "VALORES DOS TRIGGERS:" << endl << endl;
    cout << "Matricula invalida          = " << TUMatricula::VALOR_INVALIDO << endl;
    cout << "Senha invalida              = " << TUSenha::VALOR_INVALIDO << endl;
    cout << "Trigger de falha            = " << StubLNAutenticacao::TRIGGER_FALHA << endl;
    cout << "Trigger de erro de sistema  = " << StubLNAutenticacao::TRIGGER_ERRO_SISTEMA << endl;

}
