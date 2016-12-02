#ifndef STUBS_H_INCLUDED
#define STUBS_H_INCLUDED

#include "Interfaces.h"
#include <stdexcept>
#include <iostream>
#include <typeinfo>

using namespace std;

/*! \file Stubs.h
    \brief Arquivo que cont�m as classes dos stubs.

    O arquivo Stubs.h cont�m os prot�tipos de todas as classes que definem os Stubs referentes ao sistema.
*/


// EXEMPLO
// --------------------------------------------------------

// Declara��o de classe stub da interface ILNAutenticacao.

/*! \class StubLNAutenticacao
    \brief Classe que cont�m os m�todos dos stubs de autenticao.

    Cont�m os prot�tipos dos m�todos da classe de stub referente a autenticacao da logica de negocio.

*/

class StubLNAutenticacao:public ILNAutenticacao{  // classe implementa interface.

public:

    // Defini��o de valor a ser usado como gatilho para falha.

    const static string TRIGGER_FALHA;
    const static string TRIGGER_ERRO_SISTEMA;

    // Declara��o de m�todo previsto na interface.

    ResultadoAutenticacao autenticar(const Matricula&, const Senha&) throw(runtime_error);
};

// EXEMPLO
// --------------------------------------------------------

// Declara��o de classe stub da interface ILNProjeto.


/*! \class StubLNProjeto
    \brief Classe que cont�m os m�todos dos stubs de projeto.

    Cont�m os prot�tipos dos m�todos da classe de stub referente ao projeto da logica de negocio.

*/

class StubLNProjeto:public ILNProjeto{  // classe implementa a interface.

public:
    ResultadoProjeto incluir(const Projeto&) throw(runtime_error);
    ResultadoProjeto remover(const CodigoProjeto&) throw(runtime_error);
    ResultadoProjeto pesquisar(const CodigoProjeto&) throw(runtime_error);
    ResultadoProjeto editar(const Projeto&) throw(runtime_error);
};

// EXEMPLO
// --------------------------------------------------------

// Declara��o de classe stub da interface ILNGerenteProjeto.

/*! \class StubLNGerente
    \brief Classe que cont�m os m�todos dos stubs de Gerente de projeto.

    Cont�m os prot�tipos dos m�todos da classe de stub referente ao gerente de projeto da logica de negocio.

*/


class StubLNGerenteProjeto:public ILNGerenteProjeto{  // classe implementa a interface.

public:
    ResultadoGerenteProjeto incluir(const GerenteProjeto&) throw(runtime_error);
    ResultadoGerenteProjeto remover(const Matricula&) throw(runtime_error);
    ResultadoGerenteProjeto pesquisar(const Matricula&) throw(runtime_error);
    ResultadoGerenteProjeto editar(const GerenteProjeto&) throw(runtime_error);
};

// EXEMPLO
// --------------------------------------------------------

// Declara��o de classe stub da interface ILNGerenteSistema.

/*! \class StubLNAGerente
    \brief Classe que cont�m os m�todos dos stubs de gerente de sistema.

    Cont�m os prot�tipos dos m�todos da classe de stub referente ao gerente de sistema da logica de negocio.

*/

class StubLNGerenteSistema:public ILNGerenteSistema{  // classe implementa a interface.

public:
    ResultadoGerenteSistema incluir(const GerenteSistema&) throw(runtime_error);
    ResultadoGerenteSistema remover(const Matricula&) throw(runtime_error);
    ResultadoGerenteSistema pesquisar(const Matricula&) throw(runtime_error);
    ResultadoGerenteSistema editar(const GerenteSistema&) throw(runtime_error);
};

// Declara��o de classe stub da interface ILNDesenvolvedor.

/*! \class StubLNAGerente
    \brief Classe que cont�m os m�todos dos stubs de desenvolvedor.

    Cont�m os prot�tipos dos m�todos da classe de stub referente ao desenvolvedor da logica de negocio.

*/

class StubLNDesenvolvedor:public ILNDesenvolvedor{  // classe implementa a interface.

public:
    ResultadoDesenvolvedor incluir(const Desenvolvedor&) throw(runtime_error);
    ResultadoDesenvolvedor remover(const Desenvolvedor&) throw(runtime_error);
    ResultadoDesenvolvedor pesquisar(const Desenvolvedor&) throw(runtime_error);
    ResultadoDesenvolvedor editar(const Desenvolvedor&) throw(runtime_error);
};


// EXEMPLO
// --------------------------------------------------------

// Declara��o de classe stub da interface IPersistencia.

/*! \class StubPersistencia
    \brief Classe que cont�m os m�todos dos stubs de persistencia.

    Cont�m os prot�tipos dos m�todos da classe de stub referente a persistencia da logica de negocio.

*/

class StubPersistencia:public IPersistencia {

public:

    void executar (const ComandoBancoDados*) throw(runtime_error);
};


#endif // STUBS_H_INCLUDED
