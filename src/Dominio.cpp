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

/*! \fn EstadoProjeto::EstadoProjeto()
    \brief Método que implementa o construtor do Estado de Projeto sem parâmetros do dominio do sistema.

    Contém a implementação do método construto Estado de Projeto em Dominio.h referente ao dominio do sistema.

*/

EstadoProjeto::EstadoProjeto(){
    estadoProjeto = 1;
}

/*! \fn Telefone::Telefone(string telefone)
    \brief Método que implementa o construtor do Estado do Projeto do dominio do sistema.

    Contém a implementação do método construtor EstadoProjeto(int estadoProjeto) em Dominio.h referente ao dominio do sistema.

*/

EstadoProjeto::EstadoProjeto(int estadoProjeto){
    this->estadoProjeto = estadoProjeto;
}


/*! \fn void EstadoProjeto::setEstadoProjeto(int estadoProjeto)
    \brief Método que implementa o set Estado do projeto do dominio do sistema.

    Contém a implementação do método set EstadoProjeto em Dominio.h referente ao dominio do sistema.

*/

void EstadoProjeto::setEstadoProjeto(int estadoProjeto)   throw (invalid_argument){
    EstadoProjeto::isEstadoProjetoValid(estadoProjeto);
    this->estadoProjeto = estadoProjeto;
}

/*! \fn int EstadoProjeto::getEstadoProjeto()
    \brief Método que implementa o get Estado do projeto do dominio do sistema.

    Contém a implementação do método get EstadoProjeto em Dominio.h referente ao dominio do sistema.

*/

int EstadoProjeto::getEstadoProjeto() const{
    return estadoProjeto;
}

/*! \fn void EstadoProjeto::isEstadoProjetoValid(int estadoProjeto)
    \brief Método que implementa o teste de Estado do projeto do dominio do sistema.

    Contém a implementação do método de validação de estado do projeto em Dominio.h referente ao dominio do sistema.

*/

void EstadoProjeto::isEstadoProjetoValid(int estadoProjeto)   throw (invalid_argument){
    if (!(estadoProjeto == 1 || estadoProjeto == 2)){
          throw invalid_argument("Argumento inválido. Estado inexistente.");
    }
}


// Métodos relativos à classe Fase

/*! \fn Fase::Fase()
    \brief Método que implementa o construtor do Fase de Projeto sem parâmetros do dominio do sistema.

    Contém a implementação do método construto Fase de Projeto em Dominio.h referente ao dominio do sistema.

*/

Fase::Fase(){
    fase = 1;
}

/*! \fn Fase::Fase(int fase)
    \brief Método que implementa o construtor do Fase do Projeto do dominio do sistema.

    Contém a implementação do método construtor Fase(int fase) em Dominio.h referente ao dominio do sistema.

*/

Fase::Fase(int fase){
    this->fase = fase;
}

/*! \fn void Fase::setFase(int fase)
    \brief Método que implementa o set Fase do projeto do dominio do sistema.

    Contém a implementação do método set Fase em Dominio.h referente ao dominio do sistema.

*/

void Fase::setFase(int fase) throw (invalid_argument){
    Fase::isFaseValid(fase);
    this->fase = fase;
}

/*! \fn int Fase::getFase()
    \brief Método que implementa o get Fase do projeto do dominio do sistema.

    Contém a implementação do método get Fase em Dominio.h referente ao dominio do sistema.

*/

int Fase::getFase() const{
    return fase;
}

/*! \fn void Fase::isFaseValid(int fase)
    \brief Método que implementa o teste de Fase do projeto do dominio do sistema.

    Contém a implementação do método de validação de Fase do projeto em Dominio.h referente ao dominio do sistema.

*/

void Fase::isFaseValid(int fase) throw (invalid_argument){
    if (!(fase >= 1 && fase <= 4)){
          throw invalid_argument("Argumento inválido. Estado inexistente.");
    }
}


// Métodos relativos à classe Funcao

/*! \fn Funcao::Funcao()
    \brief Método que implementa o construtor do Função sem parâmetros do dominio do sistema.

    Contém a implementação do método construto função em Dominio.h referente ao dominio do sistema.

*/


Funcao::Funcao(){
    funcao = 1;
}

/*! \fn Funcao::Funcao(int funcao)
    \brief Método que implementa o construtor do Função do dominio do sistema.

    Contém a implementação do método construtor Funcao(int funcao) em Dominio.h referente ao dominio do sistema.

*/


Funcao::Funcao(int funcao){
    this->funcao = funcao;
}

/*! \fn void Funcao::setFuncao(int funcao)
    \brief Método que implementa o set Função do dominio do sistema.

    Contém a implementação do método set Função em Dominio.h referente ao dominio do sistema.

*/

void Funcao::setFuncao(int funcao) throw (invalid_argument){
    Funcao::isFuncaoValid(funcao);
    this->funcao = funcao;
}

/*! \fn int Funcao::getFuncao()
    \brief Método que implementa o get Função do dominio do sistema.

    Contém a implementação do método get Função em Dominio.h referente ao dominio do sistema.

*/

int Funcao::getFuncao() const{
    return funcao;
}


/*! \fn void Funcao::isFuncaoValid(int funcao)
    \brief Método que implementa o teste de Função do dominio do sistema.

    Contém a implementação do método de validação de Função em Dominio.h referente ao dominio do sistema.

*/

void Funcao::isFuncaoValid(int funcao) throw (invalid_argument){
    if (!(funcao >= 1 && funcao <= 3)){
          throw invalid_argument("Argumento inválido. Estado inexistente.");
    }
}


// Métodos relativos à classe Matricula

/*! \fn Matricula::Matricula()
    \brief Método que implementa o construtor da Matrícula do dominio do sistema.

    Contém a implementação do método construtor Matrícula() em Dominio.h referente ao dominio do sistema.

*/

Matricula::Matricula(){
    matricula = "12345";
}

/*! \fn Matricula::Matricula(string matricula)
    \brief Método que implementa o construtor da Matrícula do dominio do sistema.

    Contém a implementação do método construtor Matrícula(string matricula) em Dominio.h referente ao dominio do sistema.

*/

Matricula::Matricula(string matricula){
    this->matricula = matricula;
}

/*! \fn int Funcao::setMatricula(string matricula)
    \brief Método que implementa o set Matrícula do dominio do sistema.

    Contém a implementação do método set Matrícula em Dominio.h referente ao dominio do sistema.

*/

void Matricula::setMatricula(string matricula) throw (invalid_argument){
    Matricula::isMatriculaValid(matricula);
    this->matricula = matricula;
}

/*! \fn string Matricula::getMatricula()
    \brief Método que implementa o get Matrícula do dominio do sistema.

    Contém a implementação do método get Matrícula em Dominio.h referente ao dominio do sistema.

*/

string Matricula::getMatricula() const{
    return matricula;
}

/*! \fn void Matricula::isMatriculaValid(string matricula)
    \brief Método que implementa o teste de Matrícula do dominio do sistema.

    Contém a implementação do método de validação de Matrícula em Dominio.h referente ao dominio do sistema.

*/

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

/*! \fn Data::Data()
    \brief Método que implementa o construtor da Data do dominio do sistema.

    Contém a implementação do método construtor Data() em Dominio.h referente ao dominio do sistema.

*/

Data::Data(){
    data = "01/01/2016";
}

/*! \fn Data::Data(string data)
    \brief Método que implementa o construtor da Data do dominio do sistema.

    Contém a implementação do método construtor Data(string data) em Dominio.h referente ao dominio do sistema.

*/

Data::Data(string data){
    this->data = data;
}

/*! \fn void Data::setData(string data)
    \brief Método que implementa o set Data do dominio do sistema.

    Contém a implementação do método set Data em Dominio.h referente ao dominio do sistema.

*/

void Data::setData(string data) throw (invalid_argument){
    Data::isDataValid(data);
    this->data = data;
}

/*! \fn string Data::getData()
    \brief Método que implementa o get Data do dominio do sistema.

    Contém a implementação do método get Data em Dominio.h referente ao dominio do sistema.

*/

string Data::getData() const{
    return data;
}

/*! \fn void Data::isDataValid(string data)
    \brief Método que implementa o teste de Data do dominio do sistema.

    Contém a implementação do método de validação de Data em Dominio.h referente ao dominio do sistema.

*/

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


/*! \fn Email::Email()
    \brief Método que implementa o construtor da Email do dominio do sistema.

    Contém a implementação do método construtor Email() em Dominio.h referente ao dominio do sistema.

*/

Email::Email(){
    email = "email@exemplo.com";
}

/*! \fn Email::Email(string email)
    \brief Método que implementa o construtor da Email do dominio do sistema.

    Contém a implementação do método construtor Email(string email) em Dominio.h referente ao dominio do sistema.

*/

Email::Email(string email){
    this->email = email;
}

/*! \fn void Email::setEmail(string email)
    \brief Método que implementa o set Email do dominio do sistema.

    Contém a implementação do método set Email em Dominio.h referente ao dominio do sistema.

*/

void Email::setEmail(string email) throw (invalid_argument){
    Email::isEmailValid(email);
    this->email = email;
}

/*! \fn void Email::getEmail()
    \brief Método que implementa o get Email do dominio do sistema.

    Contém a implementação do método get Email em Dominio.h referente ao dominio do sistema.

*/

string Email::getEmail() const{
    return email;
}


/*! \fn void Email::isEmailValid(string email)
    \brief Método que implementa o teste de Email do dominio do sistema.

    Contém a implementação do método de validação de Email em Dominio.h referente ao dominio do sistema.

*/

void Email::isEmailValid(string email) throw (invalid_argument){
    if(email != "email@exemplo.com"){
        throw invalid_argument("Argumento inválido. Email de exemplo.");
    }
}


//Métodos relativos à classe Custo


/*! \fn Custo::Custo()
    \brief Método que implementa o construtor da Custo de Projeto do dominio do sistema.

    Contém a implementação do método construtor Custo() em Dominio.h referente ao dominio do sistema.

*/

Custo::Custo(){
    custo = 0.01;
}

/*! \fn Custo::Custo(double custo)
    \brief Método que implementa o construtor da Custo de Projeto do dominio do sistema.

    Contém a implementação do método construtor Custo(double custo) em Dominio.h referente ao dominio do sistema.

*/

Custo::Custo(double custo){
    this->custo = custo;
}

/*! \fn void Custo::setCusto(double custo)
    \brief Método que implementa o set Custo de Projeto do dominio do sistema.

    Contém a implementação do método set Custo em Dominio.h referente ao dominio do sistema.

*/

void Custo::setCusto(double custo) throw (invalid_argument){
    Custo::isCustoValid(custo);
    this->custo = custo;
}

/*! \fn void Custo::getCusto()
    \brief Método que implementa o get Custo de Projeto do dominio do sistema.

    Contém a implementação do método get Custo() em Dominio.h referente ao dominio do sistema.

*/

double Custo::getCusto() const{
    return custo;
}

/*! \fn void Custo::isCustoValid(double custo)
    \brief Método que implementa o teste de Custo do dominio do sistema.

    Contém a implementação do método de validação de Custo em Dominio.h referente ao dominio do sistema.

*/

void Custo::isCustoValid(double custo) throw (invalid_argument){
    if(custo <= 0.00){
        throw invalid_argument("Argumento inválido. Custo <= 0.00");
    }
}



