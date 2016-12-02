// ALUNOS: Alison de Miranda Peres              - > Mat.: 13/0038970
//         Henrique Torres de Almeida Rodrigues - > Mat.: 11/0013085
//         Vitor Bona de Faria                  - > Mat.: 12/0138042

// Exemplos desenvolvidos para ilustrar a sintaxe da linguagem.

#include <iostream>
#include <string>
#include <stdexcept>

#include "Dominio.h"
#include "TesteUnidade.h"
#include "Interfaces.h"
#include "Stubs.h"
#include "Controladoras.h"
#include "Builders.h"
#include "Comandos.h"

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

    // Solicita execução de serviço à controladora de autenticação..

    ResultadoAutenticacao resultado;

    while(true){

        cout << endl << "Tela de apresentacao de sistema." << endl;

        try{
            // Solicita serviço de autenticação.

            resultado = cntrIUAutenticacao->autenticar();
        }
        catch(const runtime_error &exp){
                 cout << "Erro de sistema." << endl;
        }

        // Critica o resultado da autenticação.

        if(resultado.getValor() == ResultadoAutenticacao::SUCESSO) {
            break;
        }
    }

    // Acessa matrícula retornada da autenticação.

    Matricula matricula = resultado.getMatricula();

    // Cria referência para a controladora de interface com o usuário projeto.

    IUProjeto  *cntrIUProjeto   = new CntrIUProjeto();

    ILNProjeto *stubLNProjeto = new StubLNProjeto();

    // Liga (link) instância de controladora a instância de stub.

    cntrIUProjeto->setCntrLNProjeto(stubLNProjeto);

    try{
        cntrIUProjeto->executar(matricula);
    }
    catch(const runtime_error &exp){
        cout << "Erro de sistema." << endl;
    }

    // Utilização do padrão Builder na interligação de subsistema no modo teste.

    BuilderSubsistemaGerenteSistemaTeste builderGerenteSistema;

    IUGerenteSistema *cntrIUGerenteSistema;

    cntrIUGerenteSistema = builderGerenteSistema.construir();

    try{
        cntrIUGerenteSistema->executar(matricula);
    }
    catch(const runtime_error &exp){
        cout << "Erro de sistema." << endl;
    }

    // Utilização do padrão Builder na interligação de subsistema no modo teste.

    BuilderSubsistemaGerenteProjetoTeste builderGerenteProjeto;

    IUGerenteProjeto *cntrIUGerenteProjeto;

    cntrIUGerenteProjeto = builderGerenteProjeto.construir();

    try{
        cntrIUGerenteProjeto->executar(matricula);
    }
    catch(const runtime_error &exp){
        cout << "Erro de sistema." << endl;
    }

    // Utilização do padrão Builder na interligação de subsistema no modo teste.

    BuilderSubsistemaProjetoTeste builderProjetoTeste;

    cntrIUProjeto = builderProjetoTeste.construir();

    try{
        cntrIUProjeto->executar(matricula);
    }
    catch(const runtime_error &exp){
        cout << "Erro de sistema." << endl;
    }

    // Utilização do padrão Builder na interligação de subsistema no modo teste.

    BuilderSubsistemaDesenvolvedorTeste builderDesenvolvedorTeste;

    IUDesenvolvedor *cntrIUDesenvolvedor;

    cntrIUDesenvolvedor = builderDesenvolvedorTeste.construir();

    try{
        cntrIUDesenvolvedor->executar(matricula);
    }
    catch(const runtime_error &exp){
        cout << "Erro de sistema." << endl;
    }



    // Uso do stub de persistência mostrando a capacidade do código exemplo distinguir comandos.

    cout << "Ilustra capacidade do stub de persistência identificar os tipos de comandos." << endl;

    IPersistencia *cntrPersistencia = new StubPersistencia();

    // Cria comandos e invoca o stub.

    ComandoBancoDados *comandoBancoDados;

    comandoBancoDados = new ComandoIncluirGerenteProjeto();

    cntrPersistencia->executar(comandoBancoDados);

    delete comandoBancoDados;

    comandoBancoDados = new ComandoRemoverGerenteProjeto();

    cntrPersistencia->executar(comandoBancoDados);

    delete comandoBancoDados;

    comandoBancoDados = new ComandoEditarGerenteProjeto();

    cntrPersistencia->executar(comandoBancoDados);

    delete comandoBancoDados;

    comandoBancoDados = new ComandoRecuperarGerenteProjeto();

    cntrPersistencia->executar(comandoBancoDados);

    // Cria comandos e invoca o stub.

    comandoBancoDados = new ComandoIncluirGerenteSistema();

    cntrPersistencia->executar(comandoBancoDados);

    delete comandoBancoDados;

    comandoBancoDados = new ComandoRemoverGerenteSistema();

    cntrPersistencia->executar(comandoBancoDados);

    delete comandoBancoDados;

    comandoBancoDados = new ComandoEditarGerenteSistema();

    cntrPersistencia->executar(comandoBancoDados);

    delete comandoBancoDados;

    comandoBancoDados = new ComandoRecuperarGerenteSistema();

    cntrPersistencia->executar(comandoBancoDados);

    // Cria comandos e invoca o stub.

    comandoBancoDados = new ComandoIncluirProjeto();

    cntrPersistencia->executar(comandoBancoDados);

    delete comandoBancoDados;

    comandoBancoDados = new ComandoRemoverProjeto();

    cntrPersistencia->executar(comandoBancoDados);

    delete comandoBancoDados;

    comandoBancoDados = new ComandoEditarProjeto();

    cntrPersistencia->executar(comandoBancoDados);

    delete comandoBancoDados;

    comandoBancoDados = new ComandoRecuperarProjeto();

    cntrPersistencia->executar(comandoBancoDados);

    // Cria comandos e invoca o stub.

    comandoBancoDados = new ComandoIncluirDesenvolvedor();

    cntrPersistencia->executar(comandoBancoDados);

    delete comandoBancoDados;

    comandoBancoDados = new ComandoRemoverDesenvolvedor();

    cntrPersistencia->executar(comandoBancoDados);

    delete comandoBancoDados;

    comandoBancoDados = new ComandoEditarDesenvolvedor();

    cntrPersistencia->executar(comandoBancoDados);

    delete comandoBancoDados;

    comandoBancoDados = new ComandoRecuperarDesenvolvedor();

    cntrPersistencia->executar(comandoBancoDados);

    delete comandoBancoDados;


    return 0;

}
