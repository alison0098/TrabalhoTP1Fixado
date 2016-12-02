#include "Stubs.h"
#include <string>

//Definições de constantes.

const string StubLNAutenticacao::TRIGGER_FALHA = "67890";
const string StubLNAutenticacao::TRIGGER_ERRO_SISTEMA = "78901";

using namespace std;

/*! \file Stubs.cpp
    \brief Arquivo que implementa as classes do módulo stub que faz a comunicação entre a logica de negocio com o a camada de persistencia.

    O arquivo Stubs.cpp contém a implementação de todas as classes de Stubs.h que permitem a comunicação entre a lógica de negócio e a camada de persistencia.
*/

// EXEMPLO
// --------------------------------------------------------

// Definições de método da classe stub do controlador da lógica de negócio de autenticação.

/*! \fn ResultadoAutenticacao StubLNAutenticacao::autenticar(const Matricula &matricula, const Senha &senha)
    \brief Método que implementa a autenticacao da classe StubLNAutenticacao.

    Contém a implementação do método autenticar da classe StubLNAutenticacao em Stub.h.

*/

ResultadoAutenticacao StubLNAutenticacao::autenticar(const Matricula &matricula, const Senha &senha) throw(runtime_error) {

    // Apresentar dados recebidos.

    cout << endl << "StubLNAutenticacao::autenticar" << endl ;

    cout << "Matricula = " << matricula.getMatricula() << endl ;
    cout << "Senha     = " << senha.getSenha()     << endl ;

    ResultadoAutenticacao resultado;

    // Diferentes comportamentos dependendo do valor da matrícula.
    std::string aux = matricula.getMatricula();

    if( aux.compare(TRIGGER_FALHA) == 0){
        resultado.setValor(ResultadoAutenticacao::FALHA);
    }else if(aux.compare(TRIGGER_ERRO_SISTEMA) == 0){
        throw runtime_error("Erro de sistema");
    }else{
        resultado.setValor(ResultadoAutenticacao::SUCESSO);
        resultado.setMatricula(matricula);
    }

    return resultado;
}

// EXEMPLO
// --------------------------------------------------------

// Definições de método da classe stub da controladora da lógica de negócio de projeto.

/*! \fn ResultadoProjeto StubLNProjeto::incluir(const Projeto &projeto)
    \brief Método que implementa a inclusao da classe StubLNProjeto.

    Contém a implementação do método inclur da classe StubLNProjeto em Stub.h.

*/

ResultadoProjeto StubLNProjeto::incluir(const Projeto &projeto) throw(runtime_error){

    // Apresentar dados recebidos.

    cout << endl << "StubLNProjeto::incluir" << endl ;

    ResultadoProjeto resultado;

    // Diferentes comportamentos dependendo do código do projeto.

    // Sucesso.

    // Falha.

    // Erro de sistema.

    return resultado;
}

/*! \fn ResultadoProjeto StubLNProjeto::remover(const CodigoProjeto &codigo)
    \brief Método que implementa a remoção da classe StubLNProjeto.

    Contém a implementação do método remover da classe StubLNProjeto em Stub.h.

*/

ResultadoProjeto StubLNProjeto::remover(const CodigoProjeto &codigo) throw(runtime_error) {

    // Apresentar dados recebidos.

    cout << endl << "StubLNProjeto::remover" << endl ;

    ResultadoProjeto resultado;

    // Diferentes comportamentos dependendo do código do projeto.

    // Sucesso.

    // Falha.

    // Erro de sistema.

    return resultado;
}

/*! \fn ResultadoProjeto StubLNProjeto::pesquisar(const CodigoProjeto &codigo)
    \brief Método que implementa a pesquisa da classe StubLNProjeto.

    Contém a implementação do método pesquisa da classe StubLNProjeto em Stub.h.

*/

ResultadoProjeto StubLNProjeto::pesquisar(const CodigoProjeto &codigo) throw(runtime_error) {

    // Apresentar dados recebidos.

    cout << endl << "StubLNProjeto::pesquisar" << endl ;

    ResultadoProjeto resultado;

    // Diferentes comportamentos dependendo do código do projeto.

    // Sucesso.

    // Falha.

    // Erro de sistema.

    return resultado;
}

/*! \fn ResultadoProjeto StubLNProjeto::editar(const Projeto &projeto)
    \brief Método que implementa a editar da classe StubLNProjeto.

    Contém a implementação do método editar da classe StubLNProjeto em Stub.h.

*/

ResultadoProjeto StubLNProjeto::editar(const Projeto &projeto) throw(runtime_error) {

    // Apresentar dados recebidos.

    cout << endl << "StubLNProjeto::editar" << endl ;

    ResultadoProjeto resultado;

    // Diferentes comportamentos dependendo do código do projeto.

    // Sucesso.

    // Falha.

    // Erro de sistema.

    return resultado;
}

// EXEMPLO
// --------------------------------------------------------

// Definições de método da classe stub da controladora da lógica de negócio de GerenteProjeto.

/*! \fn ResultadoGerenteProjeto StubLNGerenteProjeto::incluir(const GerenteProjeto &GerenteProjeto)
    \brief Método que implementa a inclusao da classe StubLNGerenteProjeto.

    Contém a implementação do método incluir da classe  StubLNGerenteProjeto em Stub.h.

*/


ResultadoGerenteProjeto StubLNGerenteProjeto::incluir(const GerenteProjeto &GerenteProjeto) throw(runtime_error){

    // Apresentar dados recebidos.

    cout << endl << "StubLNGerenteProjeto::incluir" << endl ;

    ResultadoGerenteProjeto resultado;

    // Diferentes comportamentos dependendo da matrícula do GerenteProjeto.

    // Sucesso.

    // Falha.

    // Erro de sistema.

    return resultado;
}

/*! \fn ResultadoGerenteProjeto StubLNGerenteProjeto::remover(const Matricula &matricula)
    \brief Método que implementa a remoção da classe  StubLNGerenteProjeto.

    Contém a implementação do método remover da classe StubLNGerenteProjeto em Stub.h.

*/

ResultadoGerenteProjeto StubLNGerenteProjeto::remover(const Matricula &matricula) throw(runtime_error) {

    // Apresentar dados recebidos.

    cout << endl << "StubLNGerenteProjeto::remover" << endl ;

    ResultadoGerenteProjeto resultado;

    // Diferentes comportamentos dependendo da matrícula do GerenteProjeto.

    // Sucesso.

    // Falha.

    // Erro de sistema.

    return resultado;
}

/*! \fn ResultadoGerenteProjeto StubLNGerenteProjeto::pesquisar(const Matricula &matricula)
    \brief Método que implementa a pesquisa da classe  StubLNGerenteProjeto.

    Contém a implementação do método pesquisar da classe StubLNGerenteProjeto em Stub.h.

*/

ResultadoGerenteProjeto StubLNGerenteProjeto::pesquisar(const Matricula &matricula) throw(runtime_error) {

    // Apresentar dados recebidos.

    cout << endl << "StubLNGerenteProjeto::pesquisar" << endl ;

    ResultadoGerenteProjeto resultado;

    // Diferentes comportamentos dependendo da matrícula do GerenteProjeto.

    // Sucesso.

    // Falha.

    // Erro de sistema.

    return resultado;
}

/*! \fn ResultadoGerenteProjeto StubLNGerenteProjeto::editar(const GerenteProjeto &GerenteProjeto)
    \brief Método que implementa a edição da classe  StubLNGerenteProjeto.

    Contém a implementação do método editar da classe StubLNGerenteProjeto em Stub.h.

*/

ResultadoGerenteProjeto StubLNGerenteProjeto::editar(const GerenteProjeto &GerenteProjeto) throw(runtime_error) {

    // Apresentar dados recebidos.

    cout << endl << "StubLNGerenteProjeto::editar" << endl ;

    ResultadoGerenteProjeto resultado;

    // Diferentes comportamentos dependendo do código do projeto.

    // Sucesso.

    // Falha.

    // Erro de sistema.

    return resultado;
}



// A partir daqui

// Definições de método da classe stub da controladora da lógica de negócio de GerenteSistema.

/*! \fn ResultadoGerenteSistema StubLNGerenteSistema::incluir(const GerenteSistema &GerenteSistema)
    \brief Método que implementa a inclusao da classe StubLNGerenteSistema.

    Contém a implementação do método incluir da classe StubLNGerenteSistema em Stub.h.

*/

ResultadoGerenteSistema StubLNGerenteSistema::incluir(const GerenteSistema &GerenteSistema) throw(runtime_error){

    // Apresentar dados recebidos.

    cout << endl << "StubLNGerenteSistema::incluir" << endl ;

    ResultadoGerenteSistema resultado;

    // Diferentes comportamentos dependendo da matrícula do GerenteSistema.

    // Sucesso.

    // Falha.

    // Erro de sistema.

    return resultado;
}

/*! \fn ResultadoGerenteSistema StubLNGerenteSistema::remover(const Matricula &matricula)
    \brief Método que implementa a remoção da classe StubLNGerenteSistema.

    Contém a implementação do método remover da classe StubLNGerenteSistema em Stub.h.

*/

ResultadoGerenteSistema StubLNGerenteSistema::remover(const Matricula &matricula) throw(runtime_error) {

    // Apresentar dados recebidos.

    cout << endl << "StubLNGerenteSistema::remover" << endl ;

    ResultadoGerenteSistema resultado;

    // Diferentes comportamentos dependendo da matrícula do GerenteSistema.

    // Sucesso.

    // Falha.

    // Erro de sistema.

    return resultado;
}

/*! \fn ResultadoGerenteSistema StubLNGerenteSistema::pesquisar(const Matricula &matricula)
    \brief Método que implementa a pesquisa da classe StubLNGerenteSistema.

    Contém a implementação do método pesquisar da classe StubLNGerenteSistema em Stub.h.

*/

ResultadoGerenteSistema StubLNGerenteSistema::pesquisar(const Matricula &matricula) throw(runtime_error) {

    // Apresentar dados recebidos.

    cout << endl << "StubLNGerenteSistema::pesquisar" << endl ;

    ResultadoGerenteSistema resultado;

    // Diferentes comportamentos dependendo da matrícula do GerenteSistema.

    // Sucesso.

    // Falha.

    // Erro de sistema.

    return resultado;
}

/*! \fn ResultadoGerenteSistema StubLNGerenteSistema::editar(const GerenteSistema &GerenteSistema)
    \brief Método que implementa a edicao da classe StubLNGerenteSistema.

    Contém a implementação do método editar da classe StubLNGerenteSistema em Stub.h.

*/

ResultadoGerenteSistema StubLNGerenteSistema::editar(const GerenteSistema &GerenteSistema) throw(runtime_error) {

    // Apresentar dados recebidos.

    cout << endl << "StubLNGerenteSistema::editar" << endl ;

    ResultadoGerenteSistema resultado;

    // Diferentes comportamentos dependendo do código do projeto.

    // Sucesso.

    // Falha.

    // Erro de sistema.

    return resultado;
}

// A partir daqui

// Definições de método da classe stub da controladora da lógica de negócio de Desenvolvedor.

/*! \fn ResultadoDesenvolvedor StubLNDesenvolvedor::incluir(const Desenvolvedor &Desenvolvedor)
    \brief Método que implementa a inclusao da classe StubLNDesenvolvedor.

    Contém a implementação do método incluir da classe StubLNDesenvolvedor em Stub.h.

*/

ResultadoDesenvolvedor StubLNDesenvolvedor::incluir(const Desenvolvedor &Desenvolvedor) throw(runtime_error){

    // Apresentar dados recebidos.

    cout << endl << "StubLNDesenvolvedor::incluir" << endl ;

    ResultadoDesenvolvedor resultado;

    // Diferentes comportamentos dependendo da matrícula do Desenvolvedor.

    // Sucesso.

    // Falha.

    // Erro de sistema.

    return resultado;
}

/*! \fn ResultadoDesenvolvedor StubLNDesenvolvedor::remover(const Desenvolvedor &desenvolvedor)
    \brief Método que implementa a remoção da classe StubLNDesenvolvedor.

    Contém a implementação do método remover da classe StubLNDesenvolvedor em Stub.h.

*/

ResultadoDesenvolvedor StubLNDesenvolvedor::remover(const Desenvolvedor &desenvolvedor) throw(runtime_error) {

    // Apresentar dados recebidos.

    cout << endl << "StubLNDesenvolvedor::remover" << endl ;

    ResultadoDesenvolvedor resultado;

    // Diferentes comportamentos dependendo da matrícula do Desenvolvedor.

    // Sucesso.

    // Falha.

    // Erro de sistema.

    return resultado;
}

/*! \fn ResultadoDesenvolvedor StubLNDesenvolvedor::pesquisar(const Desenvolvedor &desenvolvedor)
    \brief Método que implementa a pesquisa da classe StubLNDesenvolvedor.

    Contém a implementação do método pesquisa da classe StubLNDesenvolvedor em Stub.h.

*/

ResultadoDesenvolvedor StubLNDesenvolvedor::pesquisar(const Desenvolvedor &desenvolvedor) throw(runtime_error) {

    // Apresentar dados recebidos.

    cout << endl << "StubLNDesenvolvedor::pesquisar" << endl ;

    ResultadoDesenvolvedor resultado;

    // Diferentes comportamentos dependendo da matrícula do Desenvolvedor.

    // Sucesso.

    // Falha.

    // Erro de sistema.

    return resultado;
}

/*! \fn ResultadoDesenvolvedor StubLNDesenvolvedor::editar(const Desenvolvedor &desenvolvedor)
    \brief Método que implementa a edição da classe StubLNDesenvolvedor.

    Contém a implementação do método editar da classe StubLNDesenvolvedor em Stub.h.

*/

ResultadoDesenvolvedor StubLNDesenvolvedor::editar(const Desenvolvedor &desenvolvedor) throw(runtime_error) {

    // Apresentar dados recebidos.

    cout << endl << "StubLNDesenvolvedor::editar" << endl ;

    ResultadoDesenvolvedor resultado;

    // Diferentes comportamentos dependendo do código do projeto.

    // Sucesso.

    // Falha.

    // Erro de sistema.

    return resultado;
}


// EXEMPLO
// --------------------------------------------------------

// Definições de método da classe stub da controladora de persistência.

/*! \class StubPersistencia
    \brief Classe que implementa os métodos dos stubs de persistencia.

    Contém a impletação dos métodos da classe de stub referente a persistencia da logica de negocio.

*/

void StubPersistencia::executar (const ComandoBancoDados* comandoBancoDados) throw(runtime_error){

    // Gerente Sistema
    if (typeid(*comandoBancoDados) == typeid(ComandoIncluirGerenteSistema)){
            cout << "Instancia da classe ComandoIncluirGerenteSistema" << endl;
    }

    if (typeid(*comandoBancoDados) == typeid(ComandoRemoverGerenteSistema)){
            cout << "Instancia da classe ComandoRemoverGerenteSistema" << endl;
    }

    if (typeid(*comandoBancoDados) == typeid(ComandoEditarGerenteSistema)){
            cout << "Instancia da classe ComandoEditarGerenteSistema" << endl;
    }

    if (typeid(*comandoBancoDados) == typeid(ComandoRecuperarGerenteSistema)){
            cout << "Instancia da classe ComandoRecuperarGerenteSistema" << endl;
    }

    //Gerente Projeto
    if (typeid(*comandoBancoDados) == typeid(ComandoIncluirGerenteProjeto)){
            cout << "Instancia da classe ComandoIncluirGerenteProjeto" << endl;
    }

    if (typeid(*comandoBancoDados) == typeid(ComandoRemoverGerenteProjeto)){
            cout << "Instancia da classe ComandoRemoverGerenteProjeto" << endl;
    }

    if (typeid(*comandoBancoDados) == typeid(ComandoEditarGerenteProjeto)){
            cout << "Instancia da classe ComandoEditarGerenteProjeto" << endl;
    }

    if (typeid(*comandoBancoDados) == typeid(ComandoRecuperarGerenteProjeto)){
            cout << "Instancia da classe ComandoRecuperarGerenteProjeto" << endl;
    }

        //Desenvolvedor
    if (typeid(*comandoBancoDados) == typeid(ComandoIncluirDesenvolvedor)){
            cout << "Instancia da classe ComandoIncluirDesenvolvedor" << endl;
    }

    if (typeid(*comandoBancoDados) == typeid(ComandoRemoverDesenvolvedor)){
            cout << "Instancia da classe ComandoRemoverDesenvolvedor" << endl;
    }

    if (typeid(*comandoBancoDados) == typeid(ComandoEditarDesenvolvedor)){
            cout << "Instancia da classe ComandoEditarDesenvolvedor" << endl;
    }

    if (typeid(*comandoBancoDados) == typeid(ComandoRecuperarDesenvolvedor)){
            cout << "Instancia da classe ComandoRecuperarDesenvolvedor" << endl;
    }
    //Projeto
    if (typeid(*comandoBancoDados) == typeid(ComandoIncluirProjeto)){
            cout << "Instancia da classe ComandoIncluirProjeto" << endl;
    }

    if (typeid(*comandoBancoDados) == typeid(ComandoRemoverProjeto)){
            cout << "Instancia da classe ComandoRemoverProjeto" << endl;
    }

    if (typeid(*comandoBancoDados) == typeid(ComandoEditarProjeto)){
            cout << "Instancia da classe ComandoEditarProjeto" << endl;
    }

    if (typeid(*comandoBancoDados) == typeid(ComandoRecuperarProjeto)){
            cout << "Instancia da classe ComandoRecuperarProjeto" << endl;
    }


}
