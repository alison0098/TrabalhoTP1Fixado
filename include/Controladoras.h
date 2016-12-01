#ifndef CONTROLADORAS_H_INCLUDED
#define CONTROLADORAS_H_INCLUDED

#include "Interfaces.h"
#include "Dominio.h"

#include <stdexcept>
#include <iostream>
#include <cstdlib>

using namespace std;

/*! \file Controladoras.h
    \brief Arquivo que contém as classes do módulo de interface com o usuário.

    O arquivo Controladoras.h contém os protótipos de todas as classes que definem a interface com o usuário.
*/

// EXEMPLO
// --------------------------------------------------------

// Declaração de classe controladora de interação para o serviço de autenticação.

/*! \class CntrIUAutenticacao
    \brief Classe responsável por autenticação na interface.

    Contém os protótipos dos métodos utilizados para autenticação do usuário na interface.
*/

class CntrIUAutenticacao:public IUAutenticacao {    // observe que a classe implementa interface.

private:

    // Referência para servidor.

    ILNAutenticacao *cntrLNAutenticacao;

public:

    // Método previsto na interface.

    ResultadoAutenticacao autenticar() throw(runtime_error);

    // Método por meio do qual é estabelecido relacionamento com o servidor.

    void setCntrLNAutenticacao(ILNAutenticacao *cntrLNAutenticacao){
        this->cntrLNAutenticacao = cntrLNAutenticacao;
    }
};

// EXEMPLO
// --------------------------------------------------------

// Exemplifica controladora com múltiplos serviços.

/*! \class CntrIUProjeto
    \brief Classe responsável pelo controle do projeto na interface.

    Contém os protótipos dos métodos utilizados para controlar projetos na interface.
*/

class CntrIUProjeto:public IUProjeto {

private:

    const static int INCLUIR   = 1;
    const static int REMOVER   = 2;
    const static int PESQUISAR = 3;
    const static int EDITAR    = 4;
    const static int RETORNAR  = 5;

    // Referência para servidor.

    ILNProjeto *cntrLNProjeto;

    // Métodos responsáveis por prover os serviços.

    void incluir() throw(runtime_error);
    void remover() throw(runtime_error);
    void pesquisar() throw(runtime_error);
    void editar() throw(runtime_error);

public:

    // Método previsto na interface.

    void executar(const Matricula&) throw(runtime_error);

    // Método por meio do qual é estabelecido relacionamento com o servidor.

    void setCntrLNProjeto(ILNProjeto *cntrLNProjeto){
        this->cntrLNProjeto = cntrLNProjeto;
    }
};

// EXEMPLO
// --------------------------------------------------------

// Exemplifica controladora com múltiplos serviços providos por outras controladoras.

// Exemplifica classe interna.

/*! \class CntrIUGerenteProjeto
    \brief Classe responsável pelo controle do gerente de projeto na interface.

    Contém os protótipos dos métodos utilizados para controlar gerentes de projetos na interface.
*/

class CntrIUGerenteProjeto:public IUGerenteProjeto {

private:

    const static int INCLUIR   = 1;
    const static int REMOVER   = 2;
    const static int PESQUISAR = 3;
    const static int EDITAR    = 4;
    const static int RETORNAR  = 5;

    // Declarações adiantadas das classes internas.

    class CntrEdicao;
    class CntrInclusao;
    class CntrPesquisa;
    class CntrRemocao;

    // Referência para servidor.

    ILNGerenteProjeto *cntrLNGerenteProjeto;

    // Métodos responsáveis por prover os serviços.

    void incluir() throw(runtime_error);
    void remover() throw(runtime_error);
    void pesquisar() throw(runtime_error);
    void editar() throw(runtime_error);

public:

    // Método previsto na interface por meio do qual é solicitada execução da controladora.

    void executar(const Matricula&) throw(runtime_error);

    // Método por meio do qual é estabelecido relacionamento com o servidor.

    void setCntrLNGerenteProjeto(ILNGerenteProjeto *cntrLNGerenteProjeto){
        this->cntrLNGerenteProjeto = cntrLNGerenteProjeto;
    }
};

// Declarações de classes internas para prestação de serviço.

/*! \class CntrIUGerenteProjeto::CntrInclusao
    \brief Classe interna responsável pela inclusão do gerente de projeto na interface lógica de negócio.

    Contém os protótipos dos métodos utilizados para controlar a inclusao de gerentes de projetos na interface lógica de negócio.
*/

class CntrIUGerenteProjeto::CntrInclusao{
    public:
        void executar(ILNGerenteProjeto *) throw(runtime_error);
};


/*! \class CntrIUGerenteProjeto::CntrRemocao
    \brief Classe interna responsável pela remoção do gerente de projeto na interface lógica de negócio.

    Contém os protótipos dos métodos utilizados para controlar a remoção de gerentes de projetos na interface lógica de negócio.
*/

class CntrIUGerenteProjeto::CntrRemocao{
    public:
        void executar(ILNGerenteProjeto *) throw(runtime_error);
};

/*! \class CntrIUGerenteProjeto::CntrPesquisa
    \brief Classe interna responsável pela pesquisa do gerente de projeto na interface lógica de negócio.

    Contém os protótipos dos métodos utilizados para controlar a pesquisa de gerentes de projetos na interface lógica de negócio.
*/

class CntrIUGerenteProjeto::CntrPesquisa{
    public:
        void executar(ILNGerenteProjeto *) throw(runtime_error);
};

/*! \class CntrIUGerenteProjeto::CntrEdicao
    \brief Classe interna responsável pela edição do gerente de projeto na interface lógica de negócio.

    Contém os protótipos dos métodos utilizados para controlar a edição de gerentes de projetos na interface lógica de negócio.
*/

class CntrIUGerenteProjeto::CntrEdicao{
    public:
        void executar(ILNGerenteProjeto *)throw(runtime_error);
};
// A partir daqui
// A partir daqui

/*! \class CntrIUGerenteSistema
    \brief Classe responsável pelo controle do gerente de sistema na interface.

    Contém os protótipos dos métodos utilizados para controlar gerentes de sistema na interface.
*/

class CntrIUGerenteSistema:public IUGerenteSistema {

private:

    const static int INCLUIR   = 1;
    const static int REMOVER   = 2;
    const static int PESQUISAR = 3;
    const static int EDITAR    = 4;
    const static int RETORNAR  = 5;

    // Declarações adiantadas das classes internas.

    class CntrEdicao;
    class CntrInclusao;
    class CntrPesquisa;
    class CntrRemocao;

    // Referência para servidor.

    ILNGerenteSistema *cntrLNGerenteSistema;

    // Métodos responsáveis por prover os serviços.

    void incluir() throw(runtime_error);
    void remover() throw(runtime_error);
    void pesquisar() throw(runtime_error);
    void editar() throw(runtime_error);

public:

    // Método previsto na interface por meio do qual é solicitada execução da controladora.

    void executar(const Matricula&) throw(runtime_error);

    // Método por meio do qual é estabelecido relacionamento com o servidor.

    void setCntrLNGerenteSistema(ILNGerenteSistema *cntrLNGerenteSistema){
        this->cntrLNGerenteSistema = cntrLNGerenteSistema;
    }
};

// Declarações de classes internas para prestação de serviço.

/*! \class CntrIUGerenteSistema::CntrInclusao
    \brief Classe interna responsável pela inclusão do gerente de sistema na interface lógica de negócio.

    Contém os protótipos dos métodos utilizados para controlar a inclusao de gerentes de sistema na interface lógica de negócio.
*/

class CntrIUGerenteSistema::CntrInclusao{
    public:
        void executar(ILNGerenteSistema *) throw(runtime_error);
};

/*! \class CntrIUGerenteSistema::CntrRemocao
    \brief Classe interna responsável pela remoçao do gerente de sistema na interface lógica de negócio.

    Contém os protótipos dos métodos utilizados para controlar a remoção de gerentes de sistema na interface lógica de negócio.
*/

class CntrIUGerenteSistema::CntrRemocao{
    public:
        void executar(ILNGerenteSistema *) throw(runtime_error);
};

/*! \class CntrIUGerenteSistema::CntrPesquisa
    \brief Classe interna responsável pela pesquisa do gerente de sistema na interface lógica de negócio.

    Contém os protótipos dos métodos utilizados para controlar a pesquisa de gerentes de sistema na interface lógica de negócio.
*/

class CntrIUGerenteSistema::CntrPesquisa{
    public:
        void executar(ILNGerenteSistema *) throw(runtime_error);
};

/*! \class CCntrIUGerenteSistema::CntrEdicao
    \brief Classe interna responsável pela edição do gerente de sistema na interface lógica de negócio.

    Contém os protótipos dos métodos utilizados para controlar a edição de gerentes de sistema na interface lógica de negócio.
*/

class CntrIUGerenteSistema::CntrEdicao{
    public:
        void executar(ILNGerenteSistema *)throw(runtime_error);
};

// EXEMPLO
// --------------------------------------------------------

// Exemplifica controladora segundo padrão Singleton.

// Apenas código necessário ao padrão Singleton foi incluído.

// Em uma implementação real, o resto do código seria necessário.

/*! \class CntrIUDesenvolvedor
    \brief Classe responsável pelo controle do desenvolvedor na interface.

    Contém os protótipos dos métodos utilizados para controlar desenvolvedores na interface.
*/


class CntrIUDesenvolvedor:public IUDesenvolvedor {

private:

    ILNDesenvolvedor *cntrLNDesenvolvedor;

    // Referência para a instância.

    static CntrIUDesenvolvedor *referencia;

    // Método construtor privado inibe a criação de objetos por métodos não membros da classe.

    CntrIUDesenvolvedor(){}

public:

    static CntrIUDesenvolvedor *instanciar(){
        if(referencia == 0){
            referencia = new CntrIUDesenvolvedor();
        }
        return referencia;
    }

    // Métodos previstos na interface.

    void executar(const Matricula&) throw(runtime_error);

    void setCntrLNDesenvolvedor(ILNDesenvolvedor*);
};



#endif // CONTROLADORAS_H_INCLUDED
