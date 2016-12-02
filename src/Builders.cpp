#include "Builders.h"
#include "Interfaces.h"
#include "Stubs.h"

/*! \file Builders.cpp
    \brief Arquivo que implementa as classes do módulo Builder que faz a construção de objetos do sistema.

    O arquivo Builders.cpp contém a implementação de todas as classes de Builders.h que permitem a criação dos objetos do sistema.
*/


/*! \fn IUGerenteProjeto* BuilderSubsistemaGerenteProjetoTeste::construir()
    \brief Método que implementa a construção do teste de criação do Gerente de Projeto.

    Contém a implementação do método da classe BuilderSubsistemaGerenteProjetoTeste em Builders.h referente aos construtores dos objetos do sistema.

*/

IUGerenteProjeto* BuilderSubsistemaGerenteProjetoTeste::construir(){

        IUGerenteProjeto   *cntrIUGerenteProjeto;
        ILNGerenteProjeto  *cntrLNGerenteProjeto;

        // Cria as controladoras;

        cntrIUGerenteProjeto = new CntrIUGerenteProjeto();
        cntrLNGerenteProjeto = new StubLNGerenteProjeto();

        // Interliga as controladoras;

        cntrIUGerenteProjeto->setCntrLNGerenteProjeto(cntrLNGerenteProjeto);

        // retorna referência para a controladora.

        return cntrIUGerenteProjeto;
}

/*! \fn IUGerenteSistema* BuilderSubsistemaGerenteSistemaTeste::construir()
    \brief Método que implementa a construção do teste de criação do Gerente de Sistema.

    Contém a implementação do método da classe BuilderSubsistemaGerenteSistemaTeste em Builders.h referente aos construtores dos objetos do sistema.

*/

IUGerenteSistema* BuilderSubsistemaGerenteSistemaTeste::construir(){

        IUGerenteSistema   *cntrIUGerenteSistema;
        ILNGerenteSistema  *cntrLNGerenteSistema;

        // Cria as controladoras;

        cntrIUGerenteSistema = new CntrIUGerenteSistema();
        cntrLNGerenteSistema = new StubLNGerenteSistema();

        // Interliga as controladoras;

        cntrIUGerenteSistema->setCntrLNGerenteSistema(cntrLNGerenteSistema);

        // retorna referência para a controladora.

        return cntrIUGerenteSistema;
}


/*! \fn IUProjeto* BuilderSubsistemaProjetoTeste::construir()
    \brief Método que implementa a construção do teste de criação de projeto.

    Contém a implementação do método da classe BuilderSubsistemaProjetoTeste em Builders.h referente aos construtores dos objetos do sistema.

*/

IUProjeto* BuilderSubsistemaProjetoTeste::construir(){

        IUProjeto   *cntrIUProjeto;
        ILNProjeto  *cntrLNProjeto;

        // Cria as controladoras;

        cntrIUProjeto = new CntrIUProjeto();
        cntrLNProjeto = new StubLNProjeto();

        // Interliga as controladoras;

        cntrIUProjeto->setCntrLNProjeto(cntrLNProjeto);

        // retorna referência para a controladora.

        return cntrIUProjeto;
}

/*! \fn IUDesenvolvedor* BuilderSubsistemaDesenvolvedorTeste::construir()
    \brief Método que implementa a construção do teste de criação de desenvolvedor.

    Contém a implementação do método da classe BuilderSubsistemaDesenvolvedorTeste em Builders.h referente aos construtores dos objetos do sistema.

*/

IUDesenvolvedor* BuilderSubsistemaDesenvolvedorTeste::construir(){

        IUDesenvolvedor   *cntrIUDesenvolvedor;
        ILNDesenvolvedor  *cntrLNDesenvolvedor;

        // Cria as controladoras;

        cntrIUDesenvolvedor = new CntrIUDesenvolvedor();
        cntrLNDesenvolvedor = new StubLNDesenvolvedor();

        // Interliga as controladoras;

        cntrIUDesenvolvedor->setCntrLNDesenvolvedor(cntrLNDesenvolvedor);

        // retorna referência para a controladora.

        return cntrIUDesenvolvedor;
}

