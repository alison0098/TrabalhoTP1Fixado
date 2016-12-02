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

// Builder responsável por construir o subsistema de gerente no modo teste.

// Builder implementado como um Singleton.

class BuilderSubsistemaGerenteProjetoTeste {

    public:

        IUGerenteProjeto *construir();
};

class BuilderSubsistemaGerenteSistemaTeste {

    public:

        IUGerenteSistema *construir();
};

class BuilderSubsistemaProjetoTeste {

    public:

        IUProjeto *construir();
};

class BuilderSubsistemaDesenvolvedorTeste {

    public:

        IUDesenvolvedor *construir();
};


#endif // BUILDERS_H_INCLUDED


