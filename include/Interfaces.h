#ifndef INTERFACES_H_INCLUDED
#define INTERFACES_H_INCLUDED

#include "Dominio.h"
#include "Entidade.h"
#include "Comandos.h"
#include <stdexcept>

using namespace std;

/*! \file Interfaces.h
    \brief Arquivo que contém as classes do módulo de interface.

    O arquivo Interfaces.h contém os protótipos de todas as classes que definem a interface do sistema.
*/

// Declarações adiantadas.

class ILNAutenticacao;
class ILNProjeto;
class ILNGerenteProjeto;
class ILNGerenteSistema;
class ILNDesenvolvedor;

// Declarações de serviços na camada de apresentação
// -----------------------------------------------------------------

// Declaração de interface para serviço de autenticação na camada de apresentação.

/*! \class IUAutenticacao
    \brief Classe que contém os principais métodos dos comandos da autenticação da interface.

    Contém os protótipos dos métodos utilizados nas outras classes em Controladoras.h que se comunicam com a interface.

*/

class IUAutenticacao {
public:

    // Método por meio do qual é solicitada autenticacao.

    virtual ResultadoAutenticacao autenticar() throw(runtime_error) = 0;

    // Método por meio do qual é estabelecida ligação (link) com a controladora de negócio.

    virtual void setCntrLNAutenticacao(ILNAutenticacao *) = 0;
};

// Declaração de interface para serviço de projeto na camada de apresentação.

/*! \class IUProjeto
    \brief Classe que contém os principais métodos dos comandos do projeto da interface.

    Contém os protótipos dos métodos utilizados nas outras classes em Controladoras.h que se comunicam com a interface.

*/

class IUProjeto {
public:

    // Método por meio do qual é solicitada autenticacao.

    virtual void executar(const Matricula&) throw(runtime_error) = 0;

    // Método por meio do qual é estabelecida ligação (link) com a controladora de negócio.

    virtual void setCntrLNProjeto(ILNProjeto *) = 0;
};

/*! \class IUGerenteProjeto
    \brief Classe que contém os principais métodos dos comandos do gerente de projeto da interface.

    Contém os protótipos dos métodos utilizados nas outras classes em Controladoras.h que se comunicam com a interface.

*/

// Declaração de interface para serviço de GerenteProjeto na camada de apresentação.

class IUGerenteProjeto {
public:

    // Método por meio do qual é solicitada autenticacao.

    virtual void executar(const Matricula&) throw(runtime_error) = 0;

    // Método por meio do qual é estabelecida ligação (link) com a controladora de negócio.

    virtual void setCntrLNGerenteProjeto(ILNGerenteProjeto *) = 0;
};

/*! \class IUGerenteSistema
    \brief Classe que contém os principais métodos dos comandos do gerente de sistema da interface.

    Contém os protótipos dos métodos utilizados nas outras classes em Controladoras.h que se comunicam com a interface.

*/

// Declaração de interface para serviço de GerenteProjeto na camada de apresentação.

class IUGerenteSistema {
public:

    // Método por meio do qual é solicitada autenticacao.

    virtual void executar(const Matricula&) throw(runtime_error) = 0;

    // Método por meio do qual é estabelecida ligação (link) com a controladora de negócio.

    virtual void setCntrLNGerenteSistema(ILNGerenteSistema *) = 0;
};


/*! \class IUDesenvolvedor
    \brief Classe que contém os principais métodos dos comandos do desenvolvedor da interface.

    Contém os protótipos dos métodos utilizados nas outras classes em Controladoras.h que se comunicam com a interface.

*/
// Declaração de interface para serviço de desenvolvedor na camada de apresentação.

class IUDesenvolvedor {
public:

    // Método por meio do qual é solicitada autenticacao.

    virtual void executar(const Matricula&) throw(runtime_error) = 0;

    // Método por meio do qual é estabelecida ligação (link) com a controladora de negócio.

    virtual void setCntrLNDesenvolvedor(ILNDesenvolvedor*) = 0;
};

// Declarações de serviços na camada de negócio
// ------------------------------------------------------------------

// Declarações de interfaces para serviços na camada de negócio.

// Declaração de interface para o serviço de autenticação na camada de negócio.

/*! \class ILNAutenticacao
    \brief Classe que contém os principais métodos dos comandos de autenticação da interface de negocio.

    Contém os protótipos dos métodos utilizados que se comunicam com a interface de negocio.

*/

class ILNAutenticacao {
public:
    virtual ResultadoAutenticacao autenticar(const Matricula&, const Senha&) throw(runtime_error)= 0;
};

// Declaração de interface para o serviço de projeto na camada de negócio.

/*! \class ILNProjeto
    \brief Classe que contém os principais métodos dos comandos de projeto da interface de negocio.

    Contém os protótipos dos métodos utilizados que se comunicam com a interface de negocio.

*/

class ILNProjeto {
public:
    virtual ResultadoProjeto incluir(const Projeto&) throw(runtime_error) = 0;
    virtual ResultadoProjeto remover(const CodigoProjeto&) throw(runtime_error) = 0;
    virtual ResultadoProjeto pesquisar(const CodigoProjeto&) throw(runtime_error) = 0;
    virtual ResultadoProjeto editar(const Projeto&) throw(runtime_error) = 0;
};

// Declaração de interface para o serviço de GerenteProjeto na camada de negócio.

/*! \class ILNGerenteProjeto
    \brief Classe que contém os principais métodos dos comandos de gerente de projetos da interface de negocio.

    Contém os protótipos dos métodos utilizados que se comunicam com a interface de negocio.

*/

class ILNGerenteProjeto {
public:
    virtual ResultadoGerenteProjeto incluir(const GerenteProjeto&) throw(runtime_error) = 0;
    virtual ResultadoGerenteProjeto remover(const Matricula&) throw(runtime_error) = 0;
    virtual ResultadoGerenteProjeto pesquisar(const Matricula&) throw(runtime_error) = 0;
    virtual ResultadoGerenteProjeto editar(const GerenteProjeto&) throw(runtime_error) = 0;
};

// Declaração de interface para o serviço de GerenteSistema na camada de negócio.

/*! \class ILNGerenteSistema
    \brief Classe que contém os principais métodos dos comandos de gerente de sistema da interface de negocio.

    Contém os protótipos dos métodos utilizados que se comunicam com a interface de negocio.

*/

class ILNGerenteSistema {
public:
    virtual ResultadoGerenteSistema incluir(const GerenteSistema&) throw(runtime_error) = 0;
    virtual ResultadoGerenteSistema remover(const Matricula&) throw(runtime_error) = 0;
    virtual ResultadoGerenteSistema pesquisar(const Matricula&) throw(runtime_error) = 0;
    virtual ResultadoGerenteSistema editar(const GerenteSistema&) throw(runtime_error) = 0;
};

// Declaração de interface para o serviço de desenvolvedor na camada de negócio.

/*! \class ILNDesenvolvedor
    \brief Classe que contém os principais métodos dos comandos de desenvolvedor da interface de negocio.

    Contém os protótipos dos métodos utilizados que se comunicam com a interface de negocio.

*/

class ILNDesenvolvedor {
public:
    virtual ResultadoDesenvolvedor incluir(const Desenvolvedor&) throw(runtime_error) = 0;
    virtual ResultadoDesenvolvedor remover(const Matricula&) throw(runtime_error) = 0;
    virtual ResultadoDesenvolvedor pesquisar(const Matricula&) throw(runtime_error) = 0;
    virtual ResultadoDesenvolvedor editar(const Desenvolvedor&) throw(runtime_error) = 0;
};

// Declrações de serviços na camada de persistência.
// ------------------------------------------------------------------

/*! \class IPersistencia
    \brief Classe que contém os principais métodos dos comandos de persistencia da interface de negocio.

    Contém os protótipos dos métodos utilizados que se comunicam com a interface de negocio.

*/

class IPersistencia {

public:
    // Método por meio do qual é solicitada execução de comando.

    // Observe que o parâmetro é um ponteiro para a classe no topo da hierarquia de comandos.

    virtual void executar(const ComandoBancoDados*) throw(runtime_error) = 0;

};


#endif // INTERFACES_H_INCLUDED
