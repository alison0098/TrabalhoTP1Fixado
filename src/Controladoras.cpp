#include "Controladoras.h"
#include "Entidade.h"


/*! \file Controladoras.cpp
    \brief Arquivo que implementa as classes do m�dulo que faz a comunica��o entre a interface com o a l�gica de negocio.

    O arquivo Controladoras.cpp cont�m a implementa��o de todas as classes de Controladoras.h e entidades.h que permitem a comunica��o entre a interface de usu�rio e a l�gica de neg�cio.
*/

// Aloca��o e inicializa��es de vari�veis est�ticas.

CntrIUDesenvolvedor * CntrIUDesenvolvedor::referencia = 0;

// EXEMPLO
// --------------------------------------------------------

// Defini��es de m�todos da classe CntrIUAutenticacao.

/*! \fn ResultadoAutenticacao CntrIUAutenticacao::autenticar()
    \brief M�todo que implementa a autenticacao da entidade de Resultado de autenticacao.

    Cont�m a implementa��o do m�todo da classe ResultadoAutenticacao em Entidades.h referente �s entidades do sistema.

*/


ResultadoAutenticacao CntrIUAutenticacao::autenticar() throw(runtime_error) {

    ResultadoAutenticacao resultado;
    Matricula matricula;
    Senha senha;
    string entrada;

    cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
    cout << "!!                                            !!"<<endl;
    cout << "!! @@@@@@@@@@@@ @@@@@@@@@@@@@@@ @@@@@@@@@@@@@ !!"<<endl;
    cout << "!! @@@@@@@@@@@@ @@@@@@@@@@@@@@@ @@@@@@@@@@@@@ !!"<<endl;
    cout << "!! @@@@@        @@@@            @@@@     @@@@ !!"<<endl;
    cout << "!! @@@@@@@@@@@@ @@@@            @@@@     @@@@ !!"<<endl;
    cout << "!! @@@@@@@@@@@@ @@@@   @@@@@@@@ @@@@     @@@@ !!"<<endl;
    cout << "!!        @@@@@ @@@@   @@@@@@@@ @@@@@@@@@@@@@ !!"<<endl;
    cout << "!!        @@@@@ @@@@       @@@@ @@@@@@@@@@@@@ !!"<<endl;
    cout << "!! @@@@@  @@@@@ @@@@       @@@@ @@@@          !!"<<endl;
    cout << "!! @@@@@@@@@@@@ @@@@@@@@@@@@@@@ @@@@          !!"<<endl;
    cout << "!! @@@@@@@@@@@@ @@@@@@@@@@@@@@@ @@@@          !!"<<endl;
    cout << "!!                                            !!"<<endl;
    cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl <<endl;

    cout << "Bem vindo ao Sistema de Gerenciamento de Projetos. Informe seus dados abaixo para autenticacao." <<endl;

    // Solicitar matricula e senha.

    while(true){
            try{
                cout << endl << "Digite sua matricula: ";
                cin >> entrada;
                matricula.setMatricula(entrada);
                cout << "Digite sua senha: ";
                cin >> entrada;
                senha.setSenha(entrada);
                break;
            }catch(const invalid_argument &exp){
                cout << endl << "Dado em formato incorreto." << endl ;
            }
    }

    // Solicitar autentica��o.

    resultado = cntrLNAutenticacao->autenticar(matricula, senha);

    // Informar resultado da autentica��o.

    if(resultado.getValor() == ResultadoAutenticacao::FALHA)
    cout << endl << "Falha na autenticacao." << endl;

    return resultado;
}

// EXEMPLO
// --------------------------------------------------------

// Defini��es de m�todos da classe CntrIUProjeto.


/*! \fn void CntrIUProjeto::executar(const Matricula &matricula)
    \brief M�todo que implementa a execu��o do projeto no sistema.

    Cont�m a implementa��o do m�todo executar da classe CntrIUProjeto em Entidades.h referente.

*/



void CntrIUProjeto::executar(const Matricula &matricula) throw(runtime_error){

    int opcao;

    while(true){

        // Ilustra limpeza de tela.

        // system("CLS");

        // Apresentar as op��es.

        cout << endl << "Gerenciamento de projeto." << endl << endl;

        cout << "Incluir  - " << INCLUIR << endl;
        cout << "Remover  - " << REMOVER << endl;
        cout << "Pesquiar - " << PESQUISAR << endl;
        cout << "Editar   - " << EDITAR << endl;
        cout << "Retornar - " << RETORNAR << endl << endl;
        cout << "Selecione uma opcao :";

        cin >> opcao;

        switch(opcao){
            case INCLUIR:   incluir();
                            break;
            case REMOVER:   remover();
                            break;
            case PESQUISAR: pesquisar();
                            break;
            case EDITAR:    editar();
                            break;
        }

        if(opcao == RETORNAR)
            break;
    }

    return;
}

/*! \fn void CntrIUProjeto::incluir()
    \brief M�todo que implementa a inclusao de projeto no sistema.

    Cont�m a implementa��o do m�todo incluir da classe CntrIUProjeto em Controladoras.h.

*/

void CntrIUProjeto::incluir() throw(runtime_error){

    Projeto projeto;

    // Solicitar dados do projeto a ser inclu�do.

    // Solicitar servi�o.

    ResultadoProjeto resultado;
    resultado = cntrLNProjeto->incluir(projeto);

    // Processar resultado.

}

/*! \fn void CntrIUProjeto::remover()
    \brief M�todo que implementa a remo��o de projeto no sistema.

    Cont�m a implementa��o do m�todo remover da classe CntrIUProjeto em Controladoras.h.

*/

void CntrIUProjeto::remover() throw(runtime_error){

    CodigoProjeto codigo;

    // Solicitar c�digo do projeto a ser removido.

    // Solicitar servi�o.

    ResultadoProjeto resultado;
    resultado = cntrLNProjeto->remover(codigo);

    // Processar resultado.

}

/*! \fn void CntrIUProjeto::pesquisar()
    \brief M�todo que implementa a pesquisa de projeto no sistema.

    Cont�m a implementa��o do m�todo pesquisar da classe CntrIUProjeto em Controladoras.h.

*/

void CntrIUProjeto::pesquisar() throw(runtime_error){

    CodigoProjeto codigo;

    // Solicitar c�digo do projeto a ser pesquisado.


    // Solicitar servi�o.

    ResultadoProjeto resultado;
    resultado = cntrLNProjeto->pesquisar(codigo);

    // Processar resultado.

}

/*! \fn void CntrIUProjeto::editar()
    \brief M�todo que implementa a edi��o de projeto no sistema.

    Cont�m a implementa��o do m�todo editar da classe CntrIUProjeto em Controladoras.h.

*/

void CntrIUProjeto::editar() throw(runtime_error){

    Projeto projeto;

    // Solicitar dados do projeto a ser editado.

    // Solicitar servi�o.

    ResultadoProjeto resultado;
    resultado = cntrLNProjeto->editar(projeto);

    // Processar resultado.

}

// EXEMPLO
// --------------------------------------------------------

// Defini��es de m�todos da classe CntrIUGerenteProjeto.

/*! \fn void CntrIUGerenteProjeto::executar(const Matricula &matricula)
    \brief M�todo que implementa a execu�ao de gerente de projeto no sistema.

    Cont�m a implementa��o do m�todo executar da classe CntrIUGerenteProjeto em Controladoras.h.

*/

void CntrIUGerenteProjeto::executar(const Matricula &matricula) throw(runtime_error){

    int opcao;

    while(true){

        // Ilustra limpeza de tela.

        // system("CLS");

        // Apresentar as op��es.

        cout << endl << "Gerenciamento de GerenteProjeto." << endl << endl;

        cout << "Incluir  - " << INCLUIR << endl;
        cout << "Remover  - " << REMOVER << endl;
        cout << "Pesquiar - " << PESQUISAR << endl;
        cout << "Editar   - " << EDITAR << endl;
        cout << "Retornar - " << RETORNAR << endl << endl;
        cout << "Selecione uma opcao :";

        cin >> opcao;

        switch(opcao){
            case INCLUIR:   incluir();
                            break;
            case REMOVER:   remover();
                            break;
            case PESQUISAR: pesquisar();
                            break;
            case EDITAR:    editar();
                            break;
        }

        if(opcao == RETORNAR)
            break;
    }

    return;
}

/*! \fn void CntrIUGerenteProjeto::incluir()
    \brief M�todo que implementa a inclusao de gerente de projeto no sistema.

    Cont�m a implementa��o do m�todo incluir da classe CntrIUGerenteProjeto em Controladoras.h.

*/

void CntrIUGerenteProjeto::incluir() throw(runtime_error){
    CntrInclusao *cntr = new CntrInclusao();
    cntr->executar(cntrLNGerenteProjeto);
    delete cntr;
}

/*! \fn void CntrIUGerenteProjeto::incluir()
    \brief M�todo que implementa a remo��o de gerente de projeto no sistema.

    Cont�m a implementa��o do m�todo remover da classe CntrIUGerenteProjeto em Controladoras.h.

*/


void CntrIUGerenteProjeto::remover() throw(runtime_error){
    CntrRemocao *cntr = new CntrRemocao();
    cntr->executar(cntrLNGerenteProjeto);
    delete cntr;
}

/*! \fn void CntrIUGerenteProjeto::pesquisar()
    \brief M�todo que implementa a pesquisa de gerente de projeto no sistema.

    Cont�m a implementa��o do m�todo pesquisar da classe CntrIUGerenteProjeto em Controladoras.h.

*/


void CntrIUGerenteProjeto::pesquisar() throw(runtime_error){
    CntrPesquisa *cntr = new CntrPesquisa();
    cntr->executar(cntrLNGerenteProjeto);
    delete cntr;
}

/*! \fn void CntrIUGerenteProjeto::editar()
    \brief M�todo que implementa a edi��o de gerente de projeto no sistema.

    Cont�m a implementa��o do m�todo editar da classe CntrIUGerenteProjeto em Controladoras.h.

*/


void CntrIUGerenteProjeto::editar() throw(runtime_error){
    CntrEdicao *cntr = new CntrEdicao();
    cntr->executar(cntrLNGerenteProjeto);
    delete cntr;
}

// EXEMPLO
// --------------------------------------------------------

// Defini��es de m�todos das classes internas de CntrIUGerenteProjeto.

/*! \fn void CntrIUGerenteProjeto::CntrEdicao::executar(ILNGerenteProjeto *cntrLNGerenteProjeto)
    \brief M�todo que implementa a o metodo interno CntrEdicao de execu�ao de gerente de projeto no sistema.

    Cont�m a implementa��o do m�todo executar interno da classe CntrIUGerenteProjeto::CntroEdicao em Controladoras.h.

*/


void CntrIUGerenteProjeto::CntrEdicao::executar(ILNGerenteProjeto *cntrLNGerenteProjeto) throw(runtime_error) {

    GerenteProjeto GerenteProjeto;

    // Solicitar dados do GerenteProjeto a ser editado.

    // . . . .

    // Solicitar servi�o.

    ResultadoGerenteProjeto resultado;
    resultado = cntrLNGerenteProjeto->editar(GerenteProjeto);

    // Processar resultado.
}

/*! \fn void CntrIUGerenteProjeto::CntrInclusao::executar(ILNGerenteProjeto *cntrLNGerenteProjeto)
    \brief M�todo que implementa a o metodo interno CntrInclusao de execu��o de gerente de projeto no sistema.

    Cont�m a implementa��o do m�todo executar interno da classe CntrIUGerenteProjeto::CntroInclusao em Controladoras.h.

*/

void CntrIUGerenteProjeto::CntrInclusao::executar(ILNGerenteProjeto *cntrLNGerenteProjeto) throw(runtime_error) {

    GerenteProjeto GerenteProjeto;

    // Solicitar dados do GerenteProjeto a ser inclu�do.

    // . . . .

    // Solicitar servi�o.

    ResultadoGerenteProjeto resultado;
    resultado = cntrLNGerenteProjeto->incluir(GerenteProjeto);

    // Processar resultado.

}

/*! \fn void CntrIUGerenteProjeto::CntrPesquisa::executar(ILNGerenteProjeto *cntrLNGerenteProjeto)
    \brief M�todo que implementa a o metodo interno CntrPesquisa de execu��o de gerente de projeto no sistema.

    Cont�m a implementa��o do m�todo executar interno da classe CntrIUGerenteProjeto::CntroPesquisa em Controladoras.h.

*/


void CntrIUGerenteProjeto::CntrPesquisa::executar(ILNGerenteProjeto *cntrLNGerenteProjeto) throw(runtime_error) {

    Matricula matricula;

    // Solicitar dados do GerenteProjeto a ser pesquisado.

    // . . . .

    // Solicitar servi�o.

    ResultadoGerenteProjeto resultado;
    resultado = cntrLNGerenteProjeto->pesquisar(matricula);

    // Processar resultado.

}


/*! \fn void CntrIUGerenteProjeto::CntrRemocao::executar(ILNGerenteProjeto *cntrLNGerenteProjeto)
    \brief M�todo que implementa a o metodo interno CntrRemocao de execu��o de gerente de projeto no sistema.

    Cont�m a implementa��o do m�todo executar interno da classe CntrIUGerenteProjeto::CntroRemocao em Controladoras.h.

*/

void CntrIUGerenteProjeto::CntrRemocao::executar(ILNGerenteProjeto *cntrLNGerenteProjeto) throw(runtime_error) {

    Matricula matricula;

    // Solicitar dados do GerenteProjeto a ser removido.

    // . . . .

    // Solicitar servi�o.

    ResultadoGerenteProjeto resultado;
    resultado = cntrLNGerenteProjeto->remover(matricula);

    // Processar resultado.

}

// A partir daqui
// EXEMPLO
// --------------------------------------------------------

// Defini��es de m�todos da classe CntrIUGerenteSistema.

/*! \fn void CntrIUGerenteSistema::executar(const Matricula &matricula)
    \brief M�todo que implementa a execu�ao de gerente de sistema no sistema.

    Cont�m a implementa��o do m�todo executar da classe CntrIUGerenteSistema em Controladoras.h.

*/


void CntrIUGerenteSistema::executar(const Matricula &matricula) throw(runtime_error){

    int opcao;

    while(true){

        // Ilustra limpeza de tela.

        // system("CLS");

        // Apresentar as op��es.

        cout << endl << "Gerenciamento de GerenteSistema." << endl << endl;

        cout << "Incluir  - " << INCLUIR << endl;
        cout << "Remover  - " << REMOVER << endl;
        cout << "Pesquiar - " << PESQUISAR << endl;
        cout << "Editar   - " << EDITAR << endl;
        cout << "Retornar - " << RETORNAR << endl << endl;
        cout << "Selecione uma opcao :";

        cin >> opcao;

        switch(opcao){
            case INCLUIR:   incluir();
                            break;
            case REMOVER:   remover();
                            break;
            case PESQUISAR: pesquisar();
                            break;
            case EDITAR:    editar();
                            break;
        }

        if(opcao == RETORNAR)
            break;
    }

    return;
}

/*! \fn void CntrIUGerenteSistema::incluir()
    \brief M�todo que implementa a inclusao de gerente de sistema no sistema.

    Cont�m a implementa��o do m�todo incluir da classe CntrIUGerenteSistema em Controladoras.h.

*/

void CntrIUGerenteSistema::incluir() throw(runtime_error){
    CntrInclusao *cntr = new CntrInclusao();
    cntr->executar(cntrLNGerenteSistema);
    delete cntr;
}

/*! \fn void CntrIUGerenteSistema::remover()
    \brief M�todo que implementa a remocao de gerente de sistema no sistema.

    Cont�m a implementa��o do m�todo remover da classe CntrIUGerenteSistema em Controladoras.h.

*/


void CntrIUGerenteSistema::remover() throw(runtime_error){
    CntrRemocao *cntr = new CntrRemocao();
    cntr->executar(cntrLNGerenteSistema);
    delete cntr;
}

/*! \fn void CntrIUGerenteSistema::pesquisar()
    \brief M�todo que implementa a pesquisa de gerente de sistema no sistema.

    Cont�m a implementa��o do m�todo pesquisar da classe CntrIUGerenteSistema em Controladoras.h.

*/

void CntrIUGerenteSistema::pesquisar() throw(runtime_error){
    CntrPesquisa *cntr = new CntrPesquisa();
    cntr->executar(cntrLNGerenteSistema);
    delete cntr;
}

/*! \fn void CntrIUGerenteSistema::editar()
    \brief M�todo que implementa a edicao de gerente de sistema no sistema.

    Cont�m a implementa��o do m�todo editar da classe CntrIUGerenteSistema em Controladoras.h.

*/

void CntrIUGerenteSistema::editar() throw(runtime_error){
    CntrEdicao *cntr = new CntrEdicao();
    cntr->executar(cntrLNGerenteSistema);
    delete cntr;
}

// EXEMPLO
// --------------------------------------------------------

// Defini��es de m�todos das classes internas de CntrIUGerenteSistema.

/*! \fn void CntrIUGerenteSistema::CntrEdicao::executar(ILNGerenteSistema *cntrLNGerenteSistema)
    \brief M�todo que implementa o metodo interno CntrEdicao de execu��o de gerente de sistema no sistema.

    Cont�m a implementa��o do m�todo executar interno da classe CntrIUGerenteSistema::CntroEdicao em Controladoras.h.

*/

void CntrIUGerenteSistema::CntrEdicao::executar(ILNGerenteSistema *cntrLNGerenteSistema) throw(runtime_error) {

    GerenteSistema GerenteSistema;

    // Solicitar dados do GerenteSistema a ser editado.

    // . . . .

    // Solicitar servi�o.

    ResultadoGerenteSistema resultado;
    resultado = cntrLNGerenteSistema->editar(GerenteSistema);

    // Processar resultado.
}

/*! \fn void CntrIUGerenteSistema::CntrInclusao::executar(ILNGerenteSistema *cntrLNGerenteSistema)
    \brief M�todo que implementa o metodo interno CntrInclusao de execu��o de gerente de sistema no sistema.

    Cont�m a implementa��o do m�todo executar interno da classe CntrIUGerenteSistema::CntroInclusao em Controladoras.h.

*/

void CntrIUGerenteSistema::CntrInclusao::executar(ILNGerenteSistema *cntrLNGerenteSistema) throw(runtime_error) {

    GerenteSistema GerenteSistema;

    // Solicitar dados do GerenteSistema a ser inclu�do.

    // . . . .

    // Solicitar servi�o.

    ResultadoGerenteSistema resultado;
    resultado = cntrLNGerenteSistema->incluir(GerenteSistema);

    // Processar resultado.

}

/*! \fn void CntrIUGerenteSistema::CntrPesquisa::executar(ILNGerenteSistema *cntrLNGerenteSistema)
    \brief M�todo que implementa o metodo interno CntrPesquisa de execu��o de gerente de sistema no sistema.

    Cont�m a implementa��o do m�todo executar interno da classe CntrIUGerenteSistema::CntroPesquisa em Controladoras.h.

*/

void CntrIUGerenteSistema::CntrPesquisa::executar(ILNGerenteSistema *cntrLNGerenteSistema) throw(runtime_error) {

    Matricula matricula;

    // Solicitar dados do GerenteSistema a ser pesquisado.

    // . . . .

    // Solicitar servi�o.

    ResultadoGerenteSistema resultado;
    resultado = cntrLNGerenteSistema->pesquisar(matricula);

    // Processar resultado.

}

/*! \fn void CntrIUGerenteSistema::CntrRemocao::executar(ILNGerenteSistema *cntrLNGerenteSistema)
    \brief M�todo que implementa o metodo interno CntrRemocao de execu��o de gerente de sistema no sistema.

    Cont�m a implementa��o do m�todo executar interno da classe CntrIUGerenteSistema::CntroRemocao em Controladoras.h.

*/

void CntrIUGerenteSistema::CntrRemocao::executar(ILNGerenteSistema *cntrLNGerenteSistema) throw(runtime_error) {

    Matricula matricula;

    // Solicitar dados do GerenteSistema a ser removido.

    // . . . .

    // Solicitar servi�o.

    ResultadoGerenteSistema resultado;
    resultado = cntrLNGerenteSistema->remover(matricula);

    // Processar resultado.

}

// EXEMPLO
// --------------------------------------------------------

// Defini��es de m�todos da classe CntrIUDesenvolvedor.

// M�todos sem implementa��es pois o intuito da classe � apenas ilustrar o padr�o Singleton.

// Em uma implementa��o real, o m�todo precisaria estar codificados.

/*! \fn void CntrIUDesenvolvedor::executar(const Matricula &matricula)
    \brief M�todo que implementa a execu�ao de desenvolvedor no sistema.

    Cont�m a implementa��o do m�todo executar da classe CntrIUDesenvolvedor em Controladoras.h.

*/


void CntrIUDesenvolvedor::executar(const Matricula &matricula) throw(runtime_error){

}

/*! \fn void CntrIUDesenvolvedor::setCntrLNDesenvolvedor(ILNDesenvolvedor *cntrLNDesenvolvedor)
    \brief M�todo que implementa o construtor de desenvolvedor no sistema.

    Cont�m a implementa��o do m�todo construtor da classe CntrIUDesenvolvedor em Controladoras.h.

*/

void CntrIUDesenvolvedor::setCntrLNDesenvolvedor(ILNDesenvolvedor *cntrLNDesenvolvedor) {
    this->cntrLNDesenvolvedor = cntrLNDesenvolvedor;
}
