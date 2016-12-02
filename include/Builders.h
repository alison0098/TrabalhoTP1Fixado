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
    \brief Arquivo que contém as classes construtoras dos objetos do sistema.

    O arquivo Builders.h contém os protótipos de todas as classes construturas que permitem a criação dos objetos do sistema.
*/

// Builder responsável por construir o subsistema de gerente no modo teste.

// Builder implementado como um Singleton.

/*! \class BuilderSubsistemaGerenteProjetoTeste
    \brief Classe responsável por testar o construtor de Gerente de Projeto na interface.

    Contém os protótipos dos métodos utilizados para fazer o teste do construtor de gerente de projeto do sistema.
*/

class BuilderSubsistemaGerenteProjetoTeste {

    public:

        IUGerenteProjeto *construir();
};

/*! \class BuilderSubsistemaGerenteSistemaTeste
    \brief Classe responsável por testar o construtor de Gerente de Sistema na interface.

    Contém os protótipos dos métodos utilizados para fazer o teste do construtor de gerente de Sistema do sistema.
*/

class BuilderSubsistemaGerenteSistemaTeste {

    public:

        IUGerenteSistema *construir();
};


/*! \class BuilderSubsistemaProjetoTeste
    \brief Classe responsável por testar o construtor de Projeto na interface.

    Contém os protótipos dos métodos utilizados para fazer o teste do construtor de projeto do sistema.
*/

class BuilderSubsistemaProjetoTeste {

    public:

        IUProjeto *construir();
};

/*! \class BuilderSubsistemaDesenvolvedorTeste
    \brief Classe responsável por testar o construtor de Desenvolvedor na interface.

    Contém os protótipos dos métodos utilizados para fazer o teste do construtor de desenvolvedor do sistema.
*/

class BuilderSubsistemaDesenvolvedorTeste {

    public:

        IUDesenvolvedor *construir();
};


#endif // BUILDERS_H_INCLUDED


