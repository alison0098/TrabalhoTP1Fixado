#ifndef BUILDERS_H_INCLUDED
#define BUILDERS_H_INCLUDED

#include "Interfaces.h"
#include "Dominio.h"
#include "Interfaces.h"
#include "Controladoras.h"
#include "Stubs.h"

#include <stdexcept>
#include <iostream>
#include <cstdlib>

using namespace std;

/*! \file Builders.h
    \brief Arquivo que cont�m as classes construtoras dos objetos do sistema.

    O arquivo Builders.h cont�m os prot�tipos de todas as classes construturas que permitem a cria��o dos objetos do sistema.
*/

// Builder respons�vel por construir o subsistema de gerente no modo teste.

// Builder implementado como um Singleton.

/*! \class BuilderSubsistemaGerenteProjetoTeste
    \brief Classe respons�vel por testar o construtor de Gerente de Projeto na interface.

    Cont�m os prot�tipos dos m�todos utilizados para fazer o teste do construtor de gerente de projeto do sistema.
*/

class BuilderSubsistemaGerenteProjetoTeste {

    public:

        IUGerenteProjeto *construir();
};

/*! \class BuilderSubsistemaGerenteSistemaTeste
    \brief Classe respons�vel por testar o construtor de Gerente de Sistema na interface.

    Cont�m os prot�tipos dos m�todos utilizados para fazer o teste do construtor de gerente de Sistema do sistema.
*/

class BuilderSubsistemaGerenteSistemaTeste {

    public:

        IUGerenteSistema *construir();
};


/*! \class BuilderSubsistemaProjetoTeste
    \brief Classe respons�vel por testar o construtor de Projeto na interface.

    Cont�m os prot�tipos dos m�todos utilizados para fazer o teste do construtor de projeto do sistema.
*/

class BuilderSubsistemaProjetoTeste {

    public:

        IUProjeto *construir();
};

/*! \class BuilderSubsistemaDesenvolvedorTeste
    \brief Classe respons�vel por testar o construtor de Desenvolvedor na interface.

    Cont�m os prot�tipos dos m�todos utilizados para fazer o teste do construtor de desenvolvedor do sistema.
*/

class BuilderSubsistemaDesenvolvedorTeste {

    public:

        IUDesenvolvedor *construir();
};


#endif // BUILDERS_H_INCLUDED


