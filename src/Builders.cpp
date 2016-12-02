#include "Builders.h"
#include "Interfaces.h"
#include "Stubs.h"

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

