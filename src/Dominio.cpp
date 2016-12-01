#include "Dominio.h"
#include <iostream>

/*! \file Dominio.cpp
    \brief Arquivo que contém os métodos das classes de domínio da aplicação.

    O arquivo Dominio.cpp contém as implementações de todos os métodos das classes do domínio da aplicação.

*/

// Métodos relativos à classe Nome


Nome::Nome(){
    nome = "Nome Qualquer";
}

Nome::Nome(string nome){
    this->nome = nome;
}

void Nome::setNome(string nome)  throw (invalid_argument){
    Nome::isNomeValid(nome);
    this->nome = nome;
}

string Nome::getNome() const{
    return nome;
}

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

Senha::Senha(){
    senha = "12345";
}

Senha::Senha(string senha){
    this->senha = senha;
}

void Senha::setSenha(string senha) throw (invalid_argument){
    Senha::isSenhaValid(senha);
    this->senha = senha;
}

string Senha::getSenha() const{
    return senha;
}

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

CodigoProjeto::CodigoProjeto(){
    codigoProjeto = "RANDM";
}

CodigoProjeto::CodigoProjeto(string codigoProjeto){
    this->codigoProjeto = codigoProjeto;
}

void CodigoProjeto::setCodigoProjeto(string codigoProjeto)  throw (invalid_argument){
    CodigoProjeto::isCodigoProjetoValid(codigoProjeto);
    this->codigoProjeto = codigoProjeto;
}

string CodigoProjeto::getCodigoProjeto() const{
    return codigoProjeto;
}

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

Telefone::Telefone(){
    telefone = "12345678";
}

Telefone::Telefone(string telefone){
    this->telefone = telefone;
}

void Telefone::setTelefone(string telefone)  throw (invalid_argument){
    Telefone::isTelefoneValid(telefone);
    this->telefone = telefone;
}

string Telefone::getTelefone() const{
    return telefone;
}

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



