#include "Controladoras.h"
#include "Entidade.h"


/*! \file Controladoras.cpp
    \brief Arquivo que implementa as classes do módulo que faz a comunicação entre a interface com o a lógica de negocio.

    O arquivo Controladoras.cpp contém a implementação de todas as classes de Controladoras.h e entidades.h que permitem a comunicação entre a interface de usuário e a lógica de negócio.
*/

// Alocação e inicializações de variáveis estáticas.

CntrIUDesenvolvedor * CntrIUDesenvolvedor::referencia = 0;

// EXEMPLO
// --------------------------------------------------------

// Definições de métodos da classe CntrIUAutenticacao.

/*! \fn ResultadoAutenticacao CntrIUAutenticacao::autenticar()
    \brief Método que implementa a autenticacao da entidade de Resultado de autenticacao.

    Contém a implementação do método da classe ResultadoAutenticacao em Entidades.h referente às entidades do sistema.

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

    // Solicitar autenticação.

    resultado = cntrLNAutenticacao->autenticar(matricula, senha);

    // Informar resultado da autenticação.

    if(resultado.getValor() == ResultadoAutenticacao::FALHA)
    cout << endl << "Falha na autenticacao." << endl;

    return resultado;
}

// EXEMPLO
// --------------------------------------------------------

// Definições de métodos da classe CntrIUProjeto.


/*! \fn void CntrIUProjeto::executar(const Matricula &matricula)
    \brief Método que implementa a execução do projeto no sistema.

    Contém a implementação do método executar da classe CntrIUProjeto em Entidades.h referente.

*/



void CntrIUProjeto::executar(const Matricula &matricula) throw(runtime_error){

    int opcao;

    while(true){

        // Ilustra limpeza de tela.

        // system("CLS");

        // Apresentar as opções.

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
    \brief Método que implementa a inclusao de projeto no sistema.

    Contém a implementação do método incluir da classe CntrIUProjeto em Controladoras.h.

*/

void CntrIUProjeto::incluir() throw(runtime_error){

    Projeto projeto;

    // Solicitar dados do projeto a ser incluído.

    // Solicitar serviço.

    ResultadoProjeto resultado;
    resultado = cntrLNProjeto->incluir(projeto);

    // Processar resultado.

}

/*! \fn void CntrIUProjeto::remover()
    \brief Método que implementa a remoção de projeto no sistema.

    Contém a implementação do método remover da classe CntrIUProjeto em Controladoras.h.

*/

void CntrIUProjeto::remover() throw(runtime_error){

    CodigoProjeto codigo;

    // Solicitar código do projeto a ser removido.

    // Solicitar serviço.

    ResultadoProjeto resultado;
    resultado = cntrLNProjeto->remover(codigo);

    // Processar resultado.

}

/*! \fn void CntrIUProjeto::pesquisar()
    \brief Método que implementa a pesquisa de projeto no sistema.

    Contém a implementação do método pesquisar da classe CntrIUProjeto em Controladoras.h.

*/

void CntrIUProjeto::pesquisar() throw(runtime_error){

    CodigoProjeto codigo;

    // Solicitar código do projeto a ser pesquisado.


    // Solicitar serviço.

    ResultadoProjeto resultado;
    resultado = cntrLNProjeto->pesquisar(codigo);

    // Processar resultado.

}

/*! \fn void CntrIUProjeto::editar()
    \brief Método que implementa a edição de projeto no sistema.

    Contém a implementação do método editar da classe CntrIUProjeto em Controladoras.h.

*/

void CntrIUProjeto::editar() throw(runtime_error){

    Projeto projeto;

    // Solicitar dados do projeto a ser editado.

    // Solicitar serviço.

    ResultadoProjeto resultado;
    resultado = cntrLNProjeto->editar(projeto);

    // Processar resultado.

}

// EXEMPLO
// --------------------------------------------------------

// Definições de métodos da classe CntrIUGerenteProjeto.

/*! \fn void CntrIUGerenteProjeto::executar(const Matricula &matricula)
    \brief Método que implementa a execuçao de gerente de projeto no sistema.

    Contém a implementação do método executar da classe CntrIUGerenteProjeto em Controladoras.h.

*/

void CntrIUGerenteProjeto::executar(const Matricula &matricula) throw(runtime_error){

    int opcao;

    while(true){

        // Ilustra limpeza de tela.

        // system("CLS");

        // Apresentar as opções.

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
    \brief Método que implementa a inclusao de gerente de projeto no sistema.

    Contém a implementação do método incluir da classe CntrIUGerenteProjeto em Controladoras.h.

*/

void CntrIUGerenteProjeto::incluir() throw(runtime_error){
    CntrInclusao *cntr = new CntrInclusao();
    cntr->executar(cntrLNGerenteProjeto);
    delete cntr;
}

/*! \fn void CntrIUGerenteProjeto::incluir()
    \brief Método que implementa a remoção de gerente de projeto no sistema.

    Contém a implementação do método remover da classe CntrIUGerenteProjeto em Controladoras.h.

*/


void CntrIUGerenteProjeto::remover() throw(runtime_error){
    CntrRemocao *cntr = new CntrRemocao();
    cntr->executar(cntrLNGerenteProjeto);
    delete cntr;
}

/*! \fn void CntrIUGerenteProjeto::pesquisar()
    \brief Método que implementa a pesquisa de gerente de projeto no sistema.

    Contém a implementação do método pesquisar da classe CntrIUGerenteProjeto em Controladoras.h.

*/


void CntrIUGerenteProjeto::pesquisar() throw(runtime_error){
    CntrPesquisa *cntr = new CntrPesquisa();
    cntr->executar(cntrLNGerenteProjeto);
    delete cntr;
}

/*! \fn void CntrIUGerenteProjeto::editar()
    \brief Método que implementa a edição de gerente de projeto no sistema.

    Contém a implementação do método editar da classe CntrIUGerenteProjeto em Controladoras.h.

*/


void CntrIUGerenteProjeto::editar() throw(runtime_error){
    CntrEdicao *cntr = new CntrEdicao();
    cntr->executar(cntrLNGerenteProjeto);
    delete cntr;
}

// EXEMPLO
// --------------------------------------------------------

// Definições de métodos das classes internas de CntrIUGerenteProjeto.

/*! \fn void CntrIUGerenteProjeto::CntrEdicao::executar(ILNGerenteProjeto *cntrLNGerenteProjeto)
    \brief Método que implementa a o metodo interno CntrEdicao de execuçao de gerente de projeto no sistema.

    Contém a implementação do método executar interno da classe CntrIUGerenteProjeto::CntroEdicao em Controladoras.h.

*/


void CntrIUGerenteProjeto::CntrEdicao::executar(ILNGerenteProjeto *cntrLNGerenteProjeto) throw(runtime_error) {

    GerenteProjeto GerenteProjeto;

    // Solicitar dados do GerenteProjeto a ser editado.

    // . . . .

    // Solicitar serviço.

    ResultadoGerenteProjeto resultado;
    resultado = cntrLNGerenteProjeto->editar(GerenteProjeto);

    // Processar resultado.
}

/*! \fn void CntrIUGerenteProjeto::CntrInclusao::executar(ILNGerenteProjeto *cntrLNGerenteProjeto)
    \brief Método que implementa a o metodo interno CntrInclusao de execução de gerente de projeto no sistema.

    Contém a implementação do método executar interno da classe CntrIUGerenteProjeto::CntroInclusao em Controladoras.h.

*/

void CntrIUGerenteProjeto::CntrInclusao::executar(ILNGerenteProjeto *cntrLNGerenteProjeto) throw(runtime_error) {

    GerenteProjeto GerenteProjeto;

    // Solicitar dados do GerenteProjeto a ser incluído.

    // . . . .

    // Solicitar serviço.

    ResultadoGerenteProjeto resultado;
    resultado = cntrLNGerenteProjeto->incluir(GerenteProjeto);

    // Processar resultado.

}

/*! \fn void CntrIUGerenteProjeto::CntrPesquisa::executar(ILNGerenteProjeto *cntrLNGerenteProjeto)
    \brief Método que implementa a o metodo interno CntrPesquisa de execução de gerente de projeto no sistema.

    Contém a implementação do método executar interno da classe CntrIUGerenteProjeto::CntroPesquisa em Controladoras.h.

*/


void CntrIUGerenteProjeto::CntrPesquisa::executar(ILNGerenteProjeto *cntrLNGerenteProjeto) throw(runtime_error) {

    Matricula matricula;

    // Solicitar dados do GerenteProjeto a ser pesquisado.

    // . . . .

    // Solicitar serviço.

    ResultadoGerenteProjeto resultado;
    resultado = cntrLNGerenteProjeto->pesquisar(matricula);

    // Processar resultado.

}


/*! \fn void CntrIUGerenteProjeto::CntrRemocao::executar(ILNGerenteProjeto *cntrLNGerenteProjeto)
    \brief Método que implementa a o metodo interno CntrRemocao de execução de gerente de projeto no sistema.

    Contém a implementação do método executar interno da classe CntrIUGerenteProjeto::CntroRemocao em Controladoras.h.

*/

void CntrIUGerenteProjeto::CntrRemocao::executar(ILNGerenteProjeto *cntrLNGerenteProjeto) throw(runtime_error) {

    Matricula matricula;

    // Solicitar dados do GerenteProjeto a ser removido.

    // . . . .

    // Solicitar serviço.

    ResultadoGerenteProjeto resultado;
    resultado = cntrLNGerenteProjeto->remover(matricula);

    // Processar resultado.

}

// A partir daqui
// EXEMPLO
// --------------------------------------------------------

// Definições de métodos da classe CntrIUGerenteSistema.

/*! \fn void CntrIUGerenteSistema::executar(const Matricula &matricula)
    \brief Método que implementa a execuçao de gerente de sistema no sistema.

    Contém a implementação do método executar da classe CntrIUGerenteSistema em Controladoras.h.

*/


void CntrIUGerenteSistema::executar(const Matricula &matricula) throw(runtime_error){

    int opcao;

    while(true){

        // Ilustra limpeza de tela.

        // system("CLS");

        // Apresentar as opções.

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
    \brief Método que implementa a inclusao de gerente de sistema no sistema.

    Contém a implementação do método incluir da classe CntrIUGerenteSistema em Controladoras.h.

*/

void CntrIUGerenteSistema::incluir() throw(runtime_error){
    CntrInclusao *cntr = new CntrInclusao();
    cntr->executar(cntrLNGerenteSistema);
    delete cntr;
}

/*! \fn void CntrIUGerenteSistema::remover()
    \brief Método que implementa a remocao de gerente de sistema no sistema.

    Contém a implementação do método remover da classe CntrIUGerenteSistema em Controladoras.h.

*/


void CntrIUGerenteSistema::remover() throw(runtime_error){
    CntrRemocao *cntr = new CntrRemocao();
    cntr->executar(cntrLNGerenteSistema);
    delete cntr;
}

/*! \fn void CntrIUGerenteSistema::pesquisar()
    \brief Método que implementa a pesquisa de gerente de sistema no sistema.

    Contém a implementação do método pesquisar da classe CntrIUGerenteSistema em Controladoras.h.

*/

void CntrIUGerenteSistema::pesquisar() throw(runtime_error){
    CntrPesquisa *cntr = new CntrPesquisa();
    cntr->executar(cntrLNGerenteSistema);
    delete cntr;
}

/*! \fn void CntrIUGerenteSistema::editar()
    \brief Método que implementa a edicao de gerente de sistema no sistema.

    Contém a implementação do método editar da classe CntrIUGerenteSistema em Controladoras.h.

*/

void CntrIUGerenteSistema::editar() throw(runtime_error){
    CntrEdicao *cntr = new CntrEdicao();
    cntr->executar(cntrLNGerenteSistema);
    delete cntr;
}

// EXEMPLO
// --------------------------------------------------------

// Definições de métodos das classes internas de CntrIUGerenteSistema.

/*! \fn void CntrIUGerenteSistema::CntrEdicao::executar(ILNGerenteSistema *cntrLNGerenteSistema)
    \brief Método que implementa o metodo interno CntrEdicao de execução de gerente de sistema no sistema.

    Contém a implementação do método executar interno da classe CntrIUGerenteSistema::CntroEdicao em Controladoras.h.

*/

void CntrIUGerenteSistema::CntrEdicao::executar(ILNGerenteSistema *cntrLNGerenteSistema) throw(runtime_error) {

    GerenteSistema GerenteSistema;

    // Solicitar dados do GerenteSistema a ser editado.

    // . . . .

    // Solicitar serviço.

    ResultadoGerenteSistema resultado;
    resultado = cntrLNGerenteSistema->editar(GerenteSistema);

    // Processar resultado.
}

/*! \fn void CntrIUGerenteSistema::CntrInclusao::executar(ILNGerenteSistema *cntrLNGerenteSistema)
    \brief Método que implementa o metodo interno CntrInclusao de execução de gerente de sistema no sistema.

    Contém a implementação do método executar interno da classe CntrIUGerenteSistema::CntroInclusao em Controladoras.h.

*/

void CntrIUGerenteSistema::CntrInclusao::executar(ILNGerenteSistema *cntrLNGerenteSistema) throw(runtime_error) {

    GerenteSistema GerenteSistema;

    // Solicitar dados do GerenteSistema a ser incluído.

    // . . . .

    // Solicitar serviço.

    ResultadoGerenteSistema resultado;
    resultado = cntrLNGerenteSistema->incluir(GerenteSistema);

    // Processar resultado.

}

/*! \fn void CntrIUGerenteSistema::CntrPesquisa::executar(ILNGerenteSistema *cntrLNGerenteSistema)
    \brief Método que implementa o metodo interno CntrPesquisa de execução de gerente de sistema no sistema.

    Contém a implementação do método executar interno da classe CntrIUGerenteSistema::CntroPesquisa em Controladoras.h.

*/

void CntrIUGerenteSistema::CntrPesquisa::executar(ILNGerenteSistema *cntrLNGerenteSistema) throw(runtime_error) {

    Matricula matricula;

    // Solicitar dados do GerenteSistema a ser pesquisado.

    // . . . .

    // Solicitar serviço.

    ResultadoGerenteSistema resultado;
    resultado = cntrLNGerenteSistema->pesquisar(matricula);

    // Processar resultado.

}

/*! \fn void CntrIUGerenteSistema::CntrRemocao::executar(ILNGerenteSistema *cntrLNGerenteSistema)
    \brief Método que implementa o metodo interno CntrRemocao de execução de gerente de sistema no sistema.

    Contém a implementação do método executar interno da classe CntrIUGerenteSistema::CntroRemocao em Controladoras.h.

*/

void CntrIUGerenteSistema::CntrRemocao::executar(ILNGerenteSistema *cntrLNGerenteSistema) throw(runtime_error) {

    Matricula matricula;

    // Solicitar dados do GerenteSistema a ser removido.

    // . . . .

    // Solicitar serviço.

    ResultadoGerenteSistema resultado;
    resultado = cntrLNGerenteSistema->remover(matricula);

    // Processar resultado.

}

// EXEMPLO
// --------------------------------------------------------

// Definições de métodos da classe CntrIUDesenvolvedor.

// Métodos sem implementações pois o intuito da classe é apenas ilustrar o padrão Singleton.

// Em uma implementação real, o método precisaria estar codificados.

/*! \fn void CntrIUDesenvolvedor::executar(const Matricula &matricula)
    \brief Método que implementa a execuçao de desenvolvedor no sistema.

    Contém a implementação do método executar da classe CntrIUDesenvolvedor em Controladoras.h.

*/


void CntrIUDesenvolvedor::executar(const Matricula &matricula) throw(runtime_error){

}

/*! \fn void CntrIUDesenvolvedor::setCntrLNDesenvolvedor(ILNDesenvolvedor *cntrLNDesenvolvedor)
    \brief Método que implementa o construtor de desenvolvedor no sistema.

    Contém a implementação do método construtor da classe CntrIUDesenvolvedor em Controladoras.h.

*/

void CntrIUDesenvolvedor::setCntrLNDesenvolvedor(ILNDesenvolvedor *cntrLNDesenvolvedor) {
    this->cntrLNDesenvolvedor = cntrLNDesenvolvedor;
}
