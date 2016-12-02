#include "Builders.h"
#include "Interfaces.h"
#include "Stubs.h"

/*! \file Builders.cpp
    \brief Arquivo que implementa as classes do m�dulo Builder que faz a constru��o de objetos do sistema.

    O arquivo Builders.cpp cont�m a implementa��o de todas as classes de Builders.h que permitem a cria��o dos objetos do sistema.
*/


/*! \fn IUGerenteProjeto* BuilderSubsistemaGerenteProjetoTeste::construir()
    \brief M�todo que implementa a constru��o do teste de cria��o do Gerente de Projeto.

    Cont�m a implementa��o do m�todo da classe BuilderSubsistemaGerenteProjetoTeste em Builders.h referente aos construtores dos objetos do sistema.

*/

IUGerenteProjeto* BuilderSubsistemaGerenteProjetoTeste::construir(){

        IUGerenteProjeto   *cntrIUGerenteProjeto;
        ILNGerenteProjeto  *cntrLNGerenteProjeto;

        // Cria as controladoras;

        cntrIUGerenteProjeto = new CntrIUGerenteProjeto();
        cntrLNGerenteProjeto = new StubLNGerenteProjeto();

        // Interliga as controladoras;

        cntrIUGerenteProjeto->setCntrLNGerenteProjeto(cntrLNGerenteProjeto);

        // retorna refer�ncia para a controladora.

        return cntrIUGerenteProjeto;
}

/*! \fn IUGerenteSistema* BuilderSubsistemaGerenteSistemaTeste::construir()
    \brief M�todo que implementa a constru��o do teste de cria��o do Gerente de Sistema.

    Cont�m a implementa��o do m�todo da classe BuilderSubsistemaGerenteSistemaTeste em Builders.h referente aos construtores dos objetos do sistema.

*/

IUGerenteSistema* BuilderSubsistemaGerenteSistemaTeste::construir(){

        IUGerenteSistema   *cntrIUGerenteSistema;
        ILNGerenteSistema  *cntrLNGerenteSistema;

        // Cria as controladoras;

        cntrIUGerenteSistema = new CntrIUGerenteSistema();
        cntrLNGerenteSistema = new StubLNGerenteSistema();

        // Interliga as controladoras;

        cntrIUGerenteSistema->setCntrLNGerenteSistema(cntrLNGerenteSistema);

        // retorna refer�ncia para a controladora.

        return cntrIUGerenteSistema;
}


/*! \fn IUProjeto* BuilderSubsistemaProjetoTeste::construir()
    \brief M�todo que implementa a constru��o do teste de cria��o de projeto.

    Cont�m a implementa��o do m�todo da classe BuilderSubsistemaProjetoTeste em Builders.h referente aos construtores dos objetos do sistema.

*/

IUProjeto* BuilderSubsistemaProjetoTeste::construir(){

        IUProjeto   *cntrIUProjeto;
        ILNProjeto  *cntrLNProjeto;

        // Cria as controladoras;

        cntrIUProjeto = new CntrIUProjeto();
        cntrLNProjeto = new StubLNProjeto();

        // Interliga as controladoras;

        cntrIUProjeto->setCntrLNProjeto(cntrLNProjeto);

        // retorna refer�ncia para a controladora.

        return cntrIUProjeto;
}

/*! \fn IUDesenvolvedor* BuilderSubsistemaDesenvolvedorTeste::construir()
    \brief M�todo que implementa a constru��o do teste de cria��o de desenvolvedor.

    Cont�m a implementa��o do m�todo da classe BuilderSubsistemaDesenvolvedorTeste em Builders.h referente aos construtores dos objetos do sistema.

*/

IUDesenvolvedor* BuilderSubsistemaDesenvolvedorTeste::construir(){

        IUDesenvolvedor   *cntrIUDesenvolvedor;
        ILNDesenvolvedor  *cntrLNDesenvolvedor;

        // Cria as controladoras;

        cntrIUDesenvolvedor = new CntrIUDesenvolvedor();
        cntrLNDesenvolvedor = new StubLNDesenvolvedor();

        // Interliga as controladoras;

        cntrIUDesenvolvedor->setCntrLNDesenvolvedor(cntrLNDesenvolvedor);

        // retorna refer�ncia para a controladora.

        return cntrIUDesenvolvedor;
}

