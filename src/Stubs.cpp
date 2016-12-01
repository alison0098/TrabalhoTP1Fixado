#include "Stubs.h"
#include <string>

//Definições de constantes.

const string StubLNAutenticacao::TRIGGER_FALHA = "67890";
const string StubLNAutenticacao::TRIGGER_ERRO_SISTEMA = "78901";

using namespace std;

// EXEMPLO
// --------------------------------------------------------

// Definições de método da classe stub do controlador da lógica de negócio de autenticação.

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
