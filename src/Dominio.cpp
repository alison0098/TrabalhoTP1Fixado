#include "Dominio.h"
#include <iostream>

/*! \file Dominio.cpp
    \brief Arquivo que contém os métodos das classes de domínio da aplicação.

    O arquivo Dominio.cpp contém as implementações de todos os métodos das classes do domínio da aplicação.

*/

// Métodos relativos à classe Nome

/*! \fn Nome::Nome()
    \brief Método que implementa o construtor do nome sem parâmetros do dominio do sistema.

    Contém a implementação do método construto nome() em Dominio.h referente ao dominio do sistema.

*/

Nome::Nome(){
    nome = "Nome Qualquer";
}


/*! \fn Nome::Nome(string nome)
    \brief Método que implementa o construtor do nome do dominio do sistema.

    Contém a implementação do método construtor nome(string nome) em Dominio.h referente ao dominio do sistema.

*/

Nome::Nome(string nome){
    this->nome = nome;
}


/*! \fn void Nome::setNome(string nome)
    \brief Método que implementa o set nome do dominio do sistema.

    Contém a implementação do método set nome em Dominio.h referente ao dominio do sistema.

*/

void Nome::setNome(string nome)  throw (invalid_argument){
    Nome::isNomeValid(nome);
    this->nome = nome;
}

/*! \fn string Nome::getNome()
    \brief Método que implementa o get nome do dominio do sistema.

    Contém a implementação do método get nome em Dominio.h referente ao dominio do sistema.

*/

string Nome::getNome() const{
    return nome;
}

/*! \fn void Nome::isNomeValid(string nome)
    \brief Método que implementa o teste de nome do dominio do sistema.

    Contém a implementação do método de validação de nome em Dominio.h referente ao dominio do sistema.

*/

void Nome::isNomeValid(string nome) throw (invalid_argument){
    if (nome.length() <= 20){
        for (unsigned int i = 0; i < nome.length(); i++){
            if( !(('a' <= nome[i] && nome[i] <= 'z') || ('A' <= nome[i] && nome[i] <= 'Z') || (nome[i] == ' ')) ){
                throw invalid_argument("Argumento Inválido. Caracteres não permitidos.\n");
            }
        }

    }else{
        throw invalid_argument("Argumento inválido. Nome excede 20 caracteres.");
    }


}


// Métodos relativos à classe Senha

/*! \fn Senha::Senha()
    \brief Método que implementa o construtor do senha sem parâmetros do dominio do sistema.

    Contém a implementação do método construto senha() em Dominio.h referente ao dominio do sistema.

*/


Senha::Senha(){
    senha = "12345";
}

/*! \fn Senha::Senha(string senha)
    \brief Método que implementa o construtor da senha do dominio do sistema.

    Contém a implementação do método construtor senha(string senha) em Dominio.h referente ao dominio do sistema.

*/

Senha::Senha(string senha){
    this->senha = senha;
}

/*! \fn void Senha::setSenha(string senha)
    \brief Método que implementa o set senha do dominio do sistema.

    Contém a implementação do método set senha em Dominio.h referente ao dominio do sistema.

*/

void Senha::setSenha(string senha) throw (invalid_argument){
    Senha::isSenhaValid(senha);
    this->senha = senha;
}


/*! \fn void Senha::getSenha()
    \brief Método que implementa o get senha do dominio do sistema.

    Contém a implementação do método get senha em Dominio.h referente ao dominio do sistema.

*/

string Senha::getSenha() const{
    return senha;
}

/*! \fn void Senha::isSenhaValid(string senha)
    \brief Método que implementa o teste de senha do dominio do sistema.

    Contém a implementação do método de validação de senha em Dominio.h referente ao dominio do sistema.

*/

void Senha::isSenhaValid(string senha) throw (invalid_argument){
    if (senha.length() == 5){

        for (unsigned int i = 0; i < senha.length(); i++){
            for(unsigned int j = i+1; j < senha.length(); j++){
                if(senha[i] == senha[j]){
                     throw invalid_argument("Argumento inválido. Há letras repetidas na senha.");
                }
            }
        }
    }else{
         throw invalid_argument("Argumento inválido. Tamanho diferente de 5.");
    }

}


// Métodos relativos à classe CodigoProjeto

/*! \fn CodigoProjeto::CodigoProjeto()
    \brief Método que implementa o construtor do codigo do projeto sem parâmetros do dominio do sistema.

    Contém a implementação do método construto CodigoProjeto() em Dominio.h referente ao dominio do sistema.

*/

CodigoProjeto::CodigoProjeto(){
    codigoProjeto = "RANDM";
}

/*! \fn CodigoProjeto::CodigoProjeto(string codigoProjeto)
    \brief Método que implementa o construtor do codigo de projeto do dominio do sistema.

    Contém a implementação do método construtor CodigoProjeto(string codigoProjeto) em Dominio.h referente ao dominio do sistema.

*/

CodigoProjeto::CodigoProjeto(string codigoProjeto){
    this->codigoProjeto = codigoProjeto;
}

/*! \fn void CodigoProjeto::setCodigoProjeto(string codigoProjeto)
    \brief Método que implementa o set Codigo de Projeto do dominio do sistema.

    Contém a implementação do método set CodigoProjeto em Dominio.h referente ao dominio do sistema.

*/

void CodigoProjeto::setCodigoProjeto(string codigoProjeto)  throw (invalid_argument){
    CodigoProjeto::isCodigoProjetoValid(codigoProjeto);
    this->codigoProjeto = codigoProjeto;
}

/*! \fn string CodigoProjeto::getCodigoProjeto()
    \brief Método que implementa o get Codigo de projeto do dominio do sistema.

    Contém a implementação do método get CodigoProjeto em Dominio.h referente ao dominio do sistema.

*/

string CodigoProjeto::getCodigoProjeto() const{
    return codigoProjeto;
}

/*! \fn void CodigoProjeto::isCodigoProjetoValid(string codigoProjeto)
    \brief Método que implementa o teste de codigo de projeto do dominio do sistema.

    Contém a implementação do método de validação de Codigo Projeto em Dominio.h referente ao dominio do sistema.

*/

void CodigoProjeto::isCodigoProjetoValid(string codigoProjeto)  throw (invalid_argument){
    if (codigoProjeto.length() == 5){
        for (unsigned int i = 0; i < codigoProjeto.length(); i++){
            if( !(('a' <= codigoProjeto[i] && codigoProjeto[i] <= 'z') || ('A' <= codigoProjeto[i] && codigoProjeto[i] <= 'Z')) ){
                 throw invalid_argument("Argumento inválido. Caracteres inválidos.");
            }
        }
    }else{
         throw invalid_argument("Argumento inválido. Tamanho diferente de 5.");
    }
}


// Métodos relativos à classe Telefone

/*! \fn Telefone::Telefone()
    \brief Método que implementa o construtor do Telefone sem parâmetros do dominio do sistema.

    Contém a implementação do método construto Telefone() em Dominio.h referente ao dominio do sistema.

*/

Telefone::Telefone(){
    telefone = "12345678";
}

/*! \fn Telefone::Telefone(string telefone)
    \brief Método que implementa o construtor do Tefelone do dominio do sistema.

    Contém a implementação do método construtor Telefone(string telefone) em Dominio.h referente ao dominio do sistema.

*/

Telefone::Telefone(string telefone){
    this->telefone = telefone;
}

/*! \fn void Telefone::setTelefone(string telefone)
    \brief Método que implementa o set Telefone do dominio do sistema.

    Contém a implementação do método set Telefone em Dominio.h referente ao dominio do sistema.

*/

void Telefone::setTelefone(string telefone)  throw (invalid_argument){
    Telefone::isTelefoneValid(telefone);
    this->telefone = telefone;
}

/*! \fn string Telefone::getTelefone()
    \brief Método que implementa o get Telefone do dominio do sistema.

    Contém a implementação do método get Telefone em Dominio.h referente ao dominio do sistema.

*/

string Telefone::getTelefone() const{
    return telefone;
}


/*! \fn void Telefone::isTelefoneValid(string telefone)
    \brief Método que implementa o teste de telefone do dominio do sistema.

    Contém a implementação do método de validação de Telefone em Dominio.h referente ao dominio do sistema.

*/

void Telefone::isTelefoneValid(string telefone) throw (invalid_argument){
    if (telefone.length() == 8){
        for (unsigned int i = 0; i < telefone.length(); i++){
            if( !('0' <= telefone[i] && telefone[i] <= '9') ){
                throw invalid_argument("Argumento inválido. Caracteres inválidos.");
            }
        }
    }else{
      throw invalid_argument("Argumento inválido. Tamanho diferente de 8.");
    }
}


// Métodos relativos à classe EstadoProjeto

EstadoProjeto::EstadoProjeto(){
    estadoProjeto = 1;
}

EstadoProjeto::EstadoProjeto(int estadoProjeto){
    this->estadoProjeto = estadoProjeto;
}

void EstadoProjeto::setEstadoProjeto(int estadoProjeto)   throw (invalid_argument){
    EstadoProjeto::isEstadoProjetoValid(estadoProjeto);
    this->estadoProjeto = estadoProjeto;
}

int EstadoProjeto::getEstadoProjeto() const{
    return estadoProjeto;
}

void EstadoProjeto::isEstadoProjetoValid(int estadoProjeto)   throw (invalid_argument){
    if (!(estadoProjeto == 1 || estadoProjeto == 2)){
          throw invalid_argument("Argumento inválido. Estado inexistente.");
    }
}


// Métodos relativos à classe Fase

Fase::Fase(){
    fase = 1;
}

Fase::Fase(int fase){
    this->fase = fase;
}

void Fase::setFase(int fase) throw (invalid_argument){
    Fase::isFaseValid(fase);
    this->fase = fase;
}

int Fase::getFase() const{
    return fase;
}

void Fase::isFaseValid(int fase) throw (invalid_argument){
    if (!(fase >= 1 && fase <= 4)){
          throw invalid_argument("Argumento inválido. Estado inexistente.");
    }
}


// Métodos relativos à classe Funcao

Funcao::Funcao(){
    funcao = 1;
}

Funcao::Funcao(int funcao){
    this->funcao = funcao;
}

void Funcao::setFuncao(int funcao) throw (invalid_argument){
    Funcao::isFuncaoValid(funcao);
    this->funcao = funcao;
}

int Funcao::getFuncao() const{
    return funcao;
}

void Funcao::isFuncaoValid(int funcao) throw (invalid_argument){
    if (!(funcao >= 1 && funcao <= 3)){
          throw invalid_argument("Argumento inválido. Estado inexistente.");
    }
}


// Métodos relativos à classe Matricula

Matricula::Matricula(){
    matricula = "12345";
}

Matricula::Matricula(string matricula){
    this->matricula = matricula;
}

void Matricula::setMatricula(string matricula) throw (invalid_argument){
    Matricula::isMatriculaValid(matricula);
    this->matricula = matricula;
}

string Matricula::getMatricula() const{
    return matricula;
}

void Matricula::isMatriculaValid(string matricula) throw (invalid_argument){
    if (matricula.length() == 5){
        for (unsigned int i = 0; i < matricula.length(); i++){
            if( !('0' <= matricula[i] && matricula[i] <= '9') ){
                throw invalid_argument("Argumento Inválido. Caracteres não permitidos.");
            }
        }
    }else{
        throw invalid_argument("Argumento inválido. Matricula não possui exatamente 5 caracteres.");
    }
}


// Métodos relativos à classe Data


Data::Data(){
    data = "01/01/2016";
}

Data::Data(string data){
    this->data = data;
}

void Data::setData(string data) throw (invalid_argument){
    Data::isDataValid(data);
    this->data = data;
}

string Data::getData() const{
    return data;
}

void Data::isDataValid(string data) throw (invalid_argument){
    if(data.size() != 10){
        throw invalid_argument("Argumento invalido. A data deve estar no formato 'DD/MM/AAAA' ");
    }

    for(int i = 0; i < 10; i++){
        if (i == 2 || i == 5){
            if (data[i] != '/'){
                throw invalid_argument("Argumento invalido. A data deve estar no formato 'DD/MM/AAAA'.");
            }
        }
        else{
            if (data[i] < 48 || data[i] > 57) throw invalid_argument("Argumento invalido. Data deve ser em numeros.");
        }
    }

    if (data[0] > 51) throw invalid_argument("Argumento invalido. O dia da data passada esta invalido [1].");

    if (data[0] == 51){
        if (data[1] > 49) throw invalid_argument("Argumento invalido. O dia da data passada esta invalido [2].");
    }

    if (data[3] < 48 || data [3] > 49) throw invalid_argument("Argumento invalido. O mes da data passada esta invalido [1].");

    if (data[3] == 49){
        if (data[4] > 50) throw invalid_argument("Argumento invalido. O mes da data passada esta invalido [2]");
    }

    if (data[6] != '2' || data[7] != '0') throw invalid_argument("Argumento invalido. Ano deve ser 20xx.");

    if (data[8] < 49 || data[8] > 53) throw invalid_argument("Argumento invalido. Ano estar entre 2016 - 2050.");

    if (data[8] == 49 && data[9] < 54) throw invalid_argument("Argumento invalido. Ano deve ser maior que 2016.");

    if (data[8] == 53 && data[9] > 48) throw invalid_argument("Argumento invalido. Ano deve ser menor que 2050.");
}



// Métodos relativos à classe Email

Email::Email(){
    email = "email@exemplo.com";
}

Email::Email(string email){
    this->email = email;
}

void Email::setEmail(string email) throw (invalid_argument){
    Email::isEmailValid(email);
    this->email = email;
}

string Email::getEmail() const{
    return email;
}

void Email::isEmailValid(string email) throw (invalid_argument){
    if(email != "email@exemplo.com"){
        throw invalid_argument("Argumento inválido. Email de exemplo.");
    }
}


//Métodos relativos à classe Custo

Custo::Custo(){
    custo = 0.01;
}

Custo::Custo(double custo){
    this->custo = custo;
}

void Custo::setCusto(double custo) throw (invalid_argument){
    Custo::isCustoValid(custo);
    this->custo = custo;
}

double Custo::getCusto() const{
    return custo;
}

void Custo::isCustoValid(double custo) throw (invalid_argument){
    if(custo <= 0.00){
        throw invalid_argument("Argumento inválido. Custo <= 0.00");
    }
}



