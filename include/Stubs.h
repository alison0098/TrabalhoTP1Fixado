#ifndef STUBS_H_INCLUDED
#define STUBS_H_INCLUDED

#include "Interfaces.h"
#include <stdexcept>
#include <iostream>
#include <typeinfo>

using namespace std;

// EXEMPLO
// --------------------------------------------------------

// Declaração de classe stub da interface ILNAutenticacao.

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

class StubLNGerenteSistema:public ILNGerenteSistema{  // classe implementa a interface.

public:
    ResultadoGerenteSistema incluir(const GerenteSistema&) throw(runtime_error);
    ResultadoGerenteSistema remover(const Matricula&) throw(runtime_error);
    ResultadoGerenteSistema pesquisar(const Matricula&) throw(runtime_error);
    ResultadoGerenteSistema editar(const GerenteSistema&) throw(runtime_error);
};

// Declaração de classe stub da interface ILNDesenvolvedor.

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

class StubPersistencia:public IPersistencia {

public:

    void executar (const ComandoBancoDados*) throw(runtime_error);
};


#endif // STUBS_H_INCLUDED
