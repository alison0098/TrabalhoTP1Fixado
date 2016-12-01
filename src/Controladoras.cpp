#include "Controladoras.h"
#include "Entidade.h"

// Aloca��o e inicializa��es de vari�veis est�ticas.

CntrIUDesenvolvedor * CntrIUDesenvolvedor::referencia = 0;

// EXEMPLO
// --------------------------------------------------------

// Defini��es de m�todos da classe CntrIUAutenticacao.

ResultadoAutenticacao CntrIUAutenticacao::autenticar() throw(runtime_error) {

    ResultadoAutenticacao resultado;
    Matricula matricula;
    Senha senha;
    string entrada;

    // Solicitar matricula e senha.

    while(true) {

        cout << endl << "Autenticacao de usuario." << endl << endl;

        try {
            cout << "Digite a matricula : ";
            cin >> entrada;
            matricula.setMatricula(entrada);
            cout << "Digite a senha     : ";
            cin >> entrada;
            senha.setSenha(entrada);
            break;
        }
        catch (const invalid_argument &exp) {               // catch por refer�ncia.
            cout << endl << "Dado em formato incorreto." << endl;
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

void CntrIUProjeto::incluir() throw(runtime_error){

    Projeto projeto;

    // Solicitar dados do projeto a ser inclu�do.

    // Solicitar servi�o.

    ResultadoProjeto resultado;
    resultado = cntrLNProjeto->incluir(projeto);

    // Processar resultado.

}

void CntrIUProjeto::remover() throw(runtime_error){

    CodigoProjeto codigo;

    // Solicitar c�digo do projeto a ser removido.

    // Solicitar servi�o.

    ResultadoProjeto resultado;
    resultado = cntrLNProjeto->remover(codigo);

    // Processar resultado.

}

void CntrIUProjeto::pesquisar() throw(runtime_error){

    CodigoProjeto codigo;

    // Solicitar c�digo do projeto a ser pesquisado.


    // Solicitar servi�o.

    ResultadoProjeto resultado;
    resultado = cntrLNProjeto->pesquisar(codigo);

    // Processar resultado.

}

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

void CntrIUGerenteProjeto::incluir() throw(runtime_error){
    CntrInclusao *cntr = new CntrInclusao();
    cntr->executar(cntrLNGerenteProjeto);
    delete cntr;
}

void CntrIUGerenteProjeto::remover() throw(runtime_error){
    CntrRemocao *cntr = new CntrRemocao();
    cntr->executar(cntrLNGerenteProjeto);
    delete cntr;
}

void CntrIUGerenteProjeto::pesquisar() throw(runtime_error){
    CntrPesquisa *cntr = new CntrPesquisa();
    cntr->executar(cntrLNGerenteProjeto);
    delete cntr;
}

void CntrIUGerenteProjeto::editar() throw(runtime_error){
    CntrEdicao *cntr = new CntrEdicao();
    cntr->executar(cntrLNGerenteProjeto);
    delete cntr;
}

// EXEMPLO
// --------------------------------------------------------

// Defini��es de m�todos das classes internas de CntrIUGerenteProjeto.

void CntrIUGerenteProjeto::CntrEdicao::executar(ILNGerenteProjeto *cntrLNGerenteProjeto) throw(runtime_error) {

    GerenteProjeto GerenteProjeto;

    // Solicitar dados do GerenteProjeto a ser editado.

    // . . . .

    // Solicitar servi�o.

    ResultadoGerenteProjeto resultado;
    resultado = cntrLNGerenteProjeto->editar(GerenteProjeto);

    // Processar resultado.
}

void CntrIUGerenteProjeto::CntrInclusao::executar(ILNGerenteProjeto *cntrLNGerenteProjeto) throw(runtime_error) {

    GerenteProjeto GerenteProjeto;

    // Solicitar dados do GerenteProjeto a ser inclu�do.

    // . . . .

    // Solicitar servi�o.

    ResultadoGerenteProjeto resultado;
    resultado = cntrLNGerenteProjeto->incluir(GerenteProjeto);

    // Processar resultado.

}

void CntrIUGerenteProjeto::CntrPesquisa::executar(ILNGerenteProjeto *cntrLNGerenteProjeto) throw(runtime_error) {

    Matricula matricula;

    // Solicitar dados do GerenteProjeto a ser pesquisado.

    // . . . .

    // Solicitar servi�o.

    ResultadoGerenteProjeto resultado;
    resultado = cntrLNGerenteProjeto->pesquisar(matricula);

    // Processar resultado.

}

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

void CntrIUGerenteSistema::incluir() throw(runtime_error){
    CntrInclusao *cntr = new CntrInclusao();
    cntr->executar(cntrLNGerenteSistema);
    delete cntr;
}

void CntrIUGerenteSistema::remover() throw(runtime_error){
    CntrRemocao *cntr = new CntrRemocao();
    cntr->executar(cntrLNGerenteSistema);
    delete cntr;
}

void CntrIUGerenteSistema::pesquisar() throw(runtime_error){
    CntrPesquisa *cntr = new CntrPesquisa();
    cntr->executar(cntrLNGerenteSistema);
    delete cntr;
}

void CntrIUGerenteSistema::editar() throw(runtime_error){
    CntrEdicao *cntr = new CntrEdicao();
    cntr->executar(cntrLNGerenteSistema);
    delete cntr;
}

// EXEMPLO
// --------------------------------------------------------

// Defini��es de m�todos das classes internas de CntrIUGerenteSistema.

void CntrIUGerenteSistema::CntrEdicao::executar(ILNGerenteSistema *cntrLNGerenteSistema) throw(runtime_error) {

    GerenteSistema GerenteSistema;

    // Solicitar dados do GerenteSistema a ser editado.

    // . . . .

    // Solicitar servi�o.

    ResultadoGerenteSistema resultado;
    resultado = cntrLNGerenteSistema->editar(GerenteSistema);

    // Processar resultado.
}

void CntrIUGerenteSistema::CntrInclusao::executar(ILNGerenteSistema *cntrLNGerenteSistema) throw(runtime_error) {

    GerenteSistema GerenteSistema;

    // Solicitar dados do GerenteSistema a ser inclu�do.

    // . . . .

    // Solicitar servi�o.

    ResultadoGerenteSistema resultado;
    resultado = cntrLNGerenteSistema->incluir(GerenteSistema);

    // Processar resultado.

}

void CntrIUGerenteSistema::CntrPesquisa::executar(ILNGerenteSistema *cntrLNGerenteSistema) throw(runtime_error) {

    Matricula matricula;

    // Solicitar dados do GerenteSistema a ser pesquisado.

    // . . . .

    // Solicitar servi�o.

    ResultadoGerenteSistema resultado;
    resultado = cntrLNGerenteSistema->pesquisar(matricula);

    // Processar resultado.

}

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

void CntrIUDesenvolvedor::executar(const Matricula &matricula) throw(runtime_error){

}

void CntrIUDesenvolvedor::setCntrLNDesenvolvedor(ILNDesenvolvedor *cntrLNDesenvolvedor) {
    this->cntrLNDesenvolvedor = cntrLNDesenvolvedor;
}
