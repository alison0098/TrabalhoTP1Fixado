#ifndef CONTROLADORAS_H_INCLUDED
#define CONTROLADORAS_H_INCLUDED

#include "Interfaces.h"
#include "Dominio.h"

#include <stdexcept>
#include <iostream>
#include <cstdlib>

using namespace std;

/*! \file Controladoras.h
    \brief Arquivo que cont�m as classes do m�dulo de interface com o usu�rio.

    O arquivo Controladoras.h cont�m os prot�tipos de todas as classes que definem a interface com o usu�rio.
*/

// EXEMPLO
// --------------------------------------------------------

// Declara��o de classe controladora de intera��o para o servi�o de autentica��o.

/*! \class CntrIUAutenticacao
    \brief Classe respons�vel por autentica��o na interface.

    Cont�m os prot�tipos dos m�todos utilizados para autentica��o do usu�rio na interface.
*/

class CntrIUAutenticacao:public IUAutenticacao {    // observe que a classe implementa interface.

private:

    // Refer�ncia para servidor.

    ILNAutenticacao *cntrLNAutenticacao;

public:

    // M�todo previsto na interface.

    ResultadoAutenticacao autenticar() throw(runtime_error);

    // M�todo por meio do qual � estabelecido relacionamento com o servidor.

    void setCntrLNAutenticacao(ILNAutenticacao *cntrLNAutenticacao){
        this->cntrLNAutenticacao = cntrLNAutenticacao;
    }
};

// EXEMPLO
// --------------------------------------------------------

// Exemplifica controladora com m�ltiplos servi�os.

/*! \class CntrIUProjeto
    \brief Classe respons�vel pelo controle do projeto na interface.

    Cont�m os prot�tipos dos m�todos utilizados para controlar projetos na interface.
*/

class CntrIUProjeto:public IUProjeto {

private:

    const static int INCLUIR   = 1;
    const static int REMOVER   = 2;
    const static int PESQUISAR = 3;
    const static int EDITAR    = 4;
    const static int RETORNAR  = 5;

    // Refer�ncia para servidor.

    ILNProjeto *cntrLNProjeto;

    // M�todos respons�veis por prover os servi�os.

    void incluir() throw(runtime_error);
    void remover() throw(runtime_error);
    void pesquisar() throw(runtime_error);
    void editar() throw(runtime_error);

public:

    // M�todo previsto na interface.

    void executar(const Matricula&) throw(runtime_error);

    // M�todo por meio do qual � estabelecido relacionamento com o servidor.

    void setCntrLNProjeto(ILNProjeto *cntrLNProjeto){
        this->cntrLNProjeto = cntrLNProjeto;
    }
};

// EXEMPLO
// --------------------------------------------------------

// Exemplifica controladora com m�ltiplos servi�os providos por outras controladoras.

// Exemplifica classe interna.

/*! \class CntrIUGerenteProjeto
    \brief Classe respons�vel pelo controle do gerente de projeto na interface.

    Cont�m os prot�tipos dos m�todos utilizados para controlar gerentes de projetos na interface.
*/

class CntrIUGerenteProjeto:public IUGerenteProjeto {

private:

    const static int INCLUIR   = 1;
    const static int REMOVER   = 2;
    const static int PESQUISAR = 3;
    const static int EDITAR    = 4;
    const static int RETORNAR  = 5;

    // Declara��es adiantadas das classes internas.

    class CntrEdicao;
    class CntrInclusao;
    class CntrPesquisa;
    class CntrRemocao;

    // Refer�ncia para servidor.

    ILNGerenteProjeto *cntrLNGerenteProjeto;

    // M�todos respons�veis por prover os servi�os.

    void incluir() throw(runtime_error);
    void remover() throw(runtime_error);
    void pesquisar() throw(runtime_error);
    void editar() throw(runtime_error);

public:

    // M�todo previsto na interface por meio do qual � solicitada execu��o da controladora.

    void executar(const Matricula&) throw(runtime_error);

    // M�todo por meio do qual � estabelecido relacionamento com o servidor.

    void setCntrLNGerenteProjeto(ILNGerenteProjeto *cntrLNGerenteProjeto){
        this->cntrLNGerenteProjeto = cntrLNGerenteProjeto;
    }
};

// Declara��es de classes internas para presta��o de servi�o.

/*! \class CntrIUGerenteProjeto::CntrInclusao
    \brief Classe interna respons�vel pela inclus�o do gerente de projeto na interface l�gica de neg�cio.

    Cont�m os prot�tipos dos m�todos utilizados para controlar a inclusao de gerentes de projetos na interface l�gica de neg�cio.
*/

class CntrIUGerenteProjeto::CntrInclusao{
    public:
        void executar(ILNGerenteProjeto *) throw(runtime_error);
};


/*! \class CntrIUGerenteProjeto::CntrRemocao
    \brief Classe interna respons�vel pela remo��o do gerente de projeto na interface l�gica de neg�cio.

    Cont�m os prot�tipos dos m�todos utilizados para controlar a remo��o de gerentes de projetos na interface l�gica de neg�cio.
*/

class CntrIUGerenteProjeto::CntrRemocao{
    public:
        void executar(ILNGerenteProjeto *) throw(runtime_error);
};

/*! \class CntrIUGerenteProjeto::CntrPesquisa
    \brief Classe interna respons�vel pela pesquisa do gerente de projeto na interface l�gica de neg�cio.

    Cont�m os prot�tipos dos m�todos utilizados para controlar a pesquisa de gerentes de projetos na interface l�gica de neg�cio.
*/

class CntrIUGerenteProjeto::CntrPesquisa{
    public:
        void executar(ILNGerenteProjeto *) throw(runtime_error);
};

/*! \class CntrIUGerenteProjeto::CntrEdicao
    \brief Classe interna respons�vel pela edi��o do gerente de projeto na interface l�gica de neg�cio.

    Cont�m os prot�tipos dos m�todos utilizados para controlar a edi��o de gerentes de projetos na interface l�gica de neg�cio.
*/

class CntrIUGerenteProjeto::CntrEdicao{
    public:
        void executar(ILNGerenteProjeto *)throw(runtime_error);
};
// A partir daqui
// A partir daqui

/*! \class CntrIUGerenteSistema
    \brief Classe respons�vel pelo controle do gerente de sistema na interface.

    Cont�m os prot�tipos dos m�todos utilizados para controlar gerentes de sistema na interface.
*/

class CntrIUGerenteSistema:public IUGerenteSistema {

private:

    const static int INCLUIR   = 1;
    const static int REMOVER   = 2;
    const static int PESQUISAR = 3;
    const static int EDITAR    = 4;
    const static int RETORNAR  = 5;

    // Declara��es adiantadas das classes internas.

    class CntrEdicao;
    class CntrInclusao;
    class CntrPesquisa;
    class CntrRemocao;

    // Refer�ncia para servidor.

    ILNGerenteSistema *cntrLNGerenteSistema;

    // M�todos respons�veis por prover os servi�os.

    void incluir() throw(runtime_error);
    void remover() throw(runtime_error);
    void pesquisar() throw(runtime_error);
    void editar() throw(runtime_error);

public:

    // M�todo previsto na interface por meio do qual � solicitada execu��o da controladora.

    void executar(const Matricula&) throw(runtime_error);

    // M�todo por meio do qual � estabelecido relacionamento com o servidor.

    void setCntrLNGerenteSistema(ILNGerenteSistema *cntrLNGerenteSistema){
        this->cntrLNGerenteSistema = cntrLNGerenteSistema;
    }
};

// Declara��es de classes internas para presta��o de servi�o.

/*! \class CntrIUGerenteSistema::CntrInclusao
    \brief Classe interna respons�vel pela inclus�o do gerente de sistema na interface l�gica de neg�cio.

    Cont�m os prot�tipos dos m�todos utilizados para controlar a inclusao de gerentes de sistema na interface l�gica de neg�cio.
*/

class CntrIUGerenteSistema::CntrInclusao{
    public:
        void executar(ILNGerenteSistema *) throw(runtime_error);
};

/*! \class CntrIUGerenteSistema::CntrRemocao
    \brief Classe interna respons�vel pela remo�ao do gerente de sistema na interface l�gica de neg�cio.

    Cont�m os prot�tipos dos m�todos utilizados para controlar a remo��o de gerentes de sistema na interface l�gica de neg�cio.
*/

class CntrIUGerenteSistema::CntrRemocao{
    public:
        void executar(ILNGerenteSistema *) throw(runtime_error);
};

/*! \class CntrIUGerenteSistema::CntrPesquisa
    \brief Classe interna respons�vel pela pesquisa do gerente de sistema na interface l�gica de neg�cio.

    Cont�m os prot�tipos dos m�todos utilizados para controlar a pesquisa de gerentes de sistema na interface l�gica de neg�cio.
*/

class CntrIUGerenteSistema::CntrPesquisa{
    public:
        void executar(ILNGerenteSistema *) throw(runtime_error);
};

/*! \class CCntrIUGerenteSistema::CntrEdicao
    \brief Classe interna respons�vel pela edi��o do gerente de sistema na interface l�gica de neg�cio.

    Cont�m os prot�tipos dos m�todos utilizados para controlar a edi��o de gerentes de sistema na interface l�gica de neg�cio.
*/

class CntrIUGerenteSistema::CntrEdicao{
    public:
        void executar(ILNGerenteSistema *)throw(runtime_error);
};

// EXEMPLO
// --------------------------------------------------------

// Exemplifica controladora segundo padr�o Singleton.

// Apenas c�digo necess�rio ao padr�o Singleton foi inclu�do.

// Em uma implementa��o real, o resto do c�digo seria necess�rio.

/*! \class CntrIUDesenvolvedor
    \brief Classe respons�vel pelo controle do desenvolvedor na interface.

    Cont�m os prot�tipos dos m�todos utilizados para controlar desenvolvedores na interface.
*/


class CntrIUDesenvolvedor:public IUDesenvolvedor {

private:

    ILNDesenvolvedor *cntrLNDesenvolvedor;

    // Refer�ncia para a inst�ncia.

    static CntrIUDesenvolvedor *referencia;

    // M�todo construtor privado inibe a cria��o de objetos por m�todos n�o membros da classe.

    CntrIUDesenvolvedor(){}

public:

    static CntrIUDesenvolvedor *instanciar(){
        if(referencia == 0){
            referencia = new CntrIUDesenvolvedor();
        }
        return referencia;
    }

    // M�todos previstos na interface.

    void executar(const Matricula&) throw(runtime_error);

    void setCntrLNDesenvolvedor(ILNDesenvolvedor*);
};



#endif // CONTROLADORAS_H_INCLUDED
