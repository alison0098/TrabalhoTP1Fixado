#ifndef STUBS_H_INCLUDED
#define STUBS_H_INCLUDED

#include "Interfaces.h"
#include <stdexcept>
#include <iostream>
#include <typeinfo>

using namespace std;

/*! \file Stubs.h
    \brief Arquivo que contém as classes dos stubs.

    O arquivo Stubs.h contém os protótipos de todas as classes que definem os Stubs referentes ao sistema.
*/


// EXEMPLO
// --------------------------------------------------------

// Declaração de classe stub da interface ILNAutenticacao.

/*! \class StubLNAutenticacao
    \brief Classe que contém os métodos dos stubs de autenticao.

    Contém os protótipos dos métodos da classe de stub referente a autenticacao da logica de negocio.

*/

class StubLNAutenticacao:public ILNAutenticacao{  // classe implementa interface.

public:

    // Definição de valor a ser usado como gatilho para falha.

    const static string TRIGGER_FALHA;
    const static string TRIGGER_ERRO_SISTEMA;

    // Declaração de método previsto na interface.

    ResultadoAutenticacao autenticar(const Matricula&, const Senha&) throw(runtime_error);
};

// EXEMPLO
// --------------------------------------------------------

// Declaração de classe stub da interface ILNProjeto.


/*! \class StubLNProjeto
    \brief Classe que contém os métodos dos stubs de projeto.

    Contém os protótipos dos métodos da classe de stub referente ao projeto da logica de negocio.

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

// Declaração de classe stub da interface ILNGerenteProjeto.

/*! \class StubLNGerente
    \brief Classe que contém os métodos dos stubs de Gerente de projeto.

    Contém os protótipos dos métodos da classe de stub referente ao gerente de projeto da logica de negocio.

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

// Declaração de classe stub da interface ILNGerenteSistema.

/*! \class StubLNAGerente
    \brief Classe que contém os métodos dos stubs de gerente de sistema.

    Contém os protótipos dos métodos da classe de stub referente ao gerente de sistema da logica de negocio.

*/

class StubLNGerenteSistema:public ILNGerenteSistema{  // classe implementa a interface.

public:
    ResultadoGerenteSistema incluir(const GerenteSistema&) throw(runtime_error);
    ResultadoGerenteSistema remover(const Matricula&) throw(runtime_error);
    ResultadoGerenteSistema pesquisar(const Matricula&) throw(runtime_error);
    ResultadoGerenteSistema editar(const GerenteSistema&) throw(runtime_error);
};

// Declaração de classe stub da interface ILNDesenvolvedor.

/*! \class StubLNAGerente
    \brief Classe que contém os métodos dos stubs de desenvolvedor.

    Contém os protótipos dos métodos da classe de stub referente ao desenvolvedor da logica de negocio.

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

// Declaração de classe stub da interface IPersistencia.

/*! \class StubPersistencia
    \brief Classe que contém os métodos dos stubs de persistencia.

    Contém os protótipos dos métodos da classe de stub referente a persistencia da logica de negocio.

*/

class StubPersistencia:public IPersistencia {

public:

    void executar (const ComandoBancoDados*) throw(runtime_error);
};


#endif // STUBS_H_INCLUDED
