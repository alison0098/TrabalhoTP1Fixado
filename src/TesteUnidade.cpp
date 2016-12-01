#include "TesteUnidade.h"

#include <iostream>

// Definições de constantes

//Constantes de TUNome
const int TUNome::SUCESSO =  0;
const int TUNome::FALHA   = -1;
const string TUNome::VALOR_VALIDO = "Lorem Ipsum";
const string TUNome::VALOR_INVALIDO = "Lorem Ipsum Lorem Ipsum Lorem Ipsum Lorem Ipsum";

//Constantes de TUSenha
const int TUSenha::SUCESSO =  0;
const int TUSenha::FALHA   = -1;
const string TUSenha::VALOR_VALIDO = "ABCDE";
const string TUSenha::VALOR_INVALIDO = "AABCD";

//Constantes de TUCodigoProjeto
const int TUCodigoProjeto::SUCESSO =  0;
const int TUCodigoProjeto::FALHA   = -1;
const string TUCodigoProjeto::VALOR_VALIDO = "ABCDE";
const string TUCodigoProjeto::VALOR_INVALIDO = "AA$CD";

//Constantes de TUTelefone
const int TUTelefone::SUCESSO =  0;
const int TUTelefone::FALHA   = -1;
const string TUTelefone::VALOR_VALIDO = "98765432";
const string TUTelefone::VALOR_INVALIDO = "9876543A";

//Constantes de TUEstadoProjeto
const int TUEstadoProjeto::SUCESSO =  0;
const int TUEstadoProjeto::FALHA   = -1;
const int TUEstadoProjeto::VALOR_VALIDO = 1;
const int TUEstadoProjeto::VALOR_INVALIDO = 3;

//Constantes de TUFase
const int TUFase::SUCESSO =  0;
const int TUFase::FALHA   = -1;
const int TUFase::VALOR_VALIDO = 1;
const int TUFase::VALOR_INVALIDO = 19;

//Constantes de TUFuncao
const int TUFuncao::SUCESSO =  0;
const int TUFuncao::FALHA   = -1;
const int TUFuncao::VALOR_VALIDO = 1;
const int TUFuncao::VALOR_INVALIDO = 19;

//Constantes de TUMatricula
const int TUMatricula::SUCESSO =  0;
const int TUMatricula::FALHA   = -1;
const string TUMatricula::VALOR_VALIDO = "12388";
const string TUMatricula::VALOR_INVALIDO = "1238A";

//Constantes de TUData
const int TUData::SUCESSO =  0;
const int TUData::FALHA   = -1;
const string TUData::VALOR_VALIDO = "18/01/2016";
const string TUData::VALOR_INVALIDO = "33/2";

//Métodos referentes à TUEmail
const int TUEmail::SUCESSO =  0;
const int TUEmail::FALHA   = -1;
const string TUEmail::VALOR_VALIDO = "email@exemplo.com";
const string TUEmail::VALOR_INVALIDO = "email@";

//Métodos referentes à TUCusto
const int TUCusto::SUCESSO =  0;
const int TUCusto::FALHA   = -1;
const double TUCusto::VALOR_VALIDO = 123890.23;
const double TUCusto::VALOR_INVALIDO = 0;


void TUNome::setUp(){
    nome = new Nome();
    estado = SUCESSO;
}

void TUNome::tearDown(){
    delete nome;
}

void TUNome::testarCenarioSucesso(){
    try{
        nome->setNome(VALOR_VALIDO);
        if (nome->getNome() != VALOR_VALIDO)
            estado = FALHA;

    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUNome::testarCenarioFalha(){
    try{
        nome->setNome(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUNome::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


//Métodos referentes à TUSenha

void TUSenha::setUp(){
    senha = new Senha();
    estado = SUCESSO;
}

void TUSenha::tearDown(){
    delete senha;
}

void TUSenha::testarCenarioSucesso(){
    try{
        senha->setSenha(VALOR_VALIDO);
        if (senha->getSenha() != VALOR_VALIDO)
            estado = FALHA;

    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUSenha::testarCenarioFalha(){
    try{
        senha->setSenha(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUSenha::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


//Métodos referentes à TUCodigoProjeto


void TUCodigoProjeto::setUp(){
    codigoProjeto = new CodigoProjeto();
    estado = SUCESSO;
}

void TUCodigoProjeto::tearDown(){
    delete codigoProjeto;
}

void TUCodigoProjeto::testarCenarioSucesso(){
    try{
        codigoProjeto->setCodigoProjeto(VALOR_VALIDO);
        if (codigoProjeto->getCodigoProjeto() != VALOR_VALIDO)
            estado = FALHA;

    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUCodigoProjeto::testarCenarioFalha(){
    try{
        codigoProjeto->setCodigoProjeto(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUCodigoProjeto::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


//Métodos referentes à TUTelefone


void TUTelefone::setUp(){
    telefone = new Telefone();
    estado = SUCESSO;
}

void TUTelefone::tearDown(){
    delete telefone;
}

void TUTelefone::testarCenarioSucesso(){
    try{
        telefone->setTelefone(VALOR_VALIDO);
        if (telefone->getTelefone() != VALOR_VALIDO)
            estado = FALHA;

    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUTelefone::testarCenarioFalha(){
    try{
        telefone->setTelefone(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUTelefone::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


//Métodos referentes à TUEstadoProjeto

void TUEstadoProjeto::setUp(){
    estadoProjeto = new EstadoProjeto();
    estado = SUCESSO;
}

void TUEstadoProjeto::tearDown(){
    delete estadoProjeto;
}

void TUEstadoProjeto::testarCenarioSucesso(){
    try{
        estadoProjeto->setEstadoProjeto(VALOR_VALIDO);
        if (estadoProjeto->getEstadoProjeto() != VALOR_VALIDO)
            estado = FALHA;

    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUEstadoProjeto::testarCenarioFalha(){
    try{
        estadoProjeto->setEstadoProjeto(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUEstadoProjeto::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


//Métodos referentes à TUFase

void TUFase::setUp(){
    fase = new Fase();
    estado = SUCESSO;
}

void TUFase::tearDown(){
    delete fase;
}

void TUFase::testarCenarioSucesso(){
    try{
        fase->setFase(VALOR_VALIDO);
        if (fase->getFase() != VALOR_VALIDO)
            estado = FALHA;

    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUFase::testarCenarioFalha(){
    try{
        fase->setFase(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUFase::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


//Métodos referentes à TUFuncao

void TUFuncao::setUp(){
    funcao = new Funcao();
    estado = SUCESSO;
}

void TUFuncao::tearDown(){
    delete funcao;
}

void TUFuncao::testarCenarioSucesso(){
    try{
        funcao->setFuncao(VALOR_VALIDO);
        if (funcao->getFuncao() != VALOR_VALIDO)
            estado = FALHA;

    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUFuncao::testarCenarioFalha(){
    try{
        funcao->setFuncao(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUFuncao::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


//Métodos referentes à TUMatricula

void TUMatricula::setUp(){
    matricula = new Matricula();
    estado = SUCESSO;
}

void TUMatricula::tearDown(){
    delete matricula;
}

void TUMatricula::testarCenarioSucesso(){
    try{
        matricula->setMatricula(VALOR_VALIDO);
        if (matricula->getMatricula() != VALOR_VALIDO)
            estado = FALHA;

    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUMatricula::testarCenarioFalha(){
    try{
        matricula->setMatricula(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUMatricula::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


//Métodos referentes à TUData

void TUData::setUp(){
    data = new Data();
    estado = SUCESSO;
}

void TUData::tearDown(){
    delete data;
}

void TUData::testarCenarioSucesso(){
    try{
        data->setData(VALOR_VALIDO);
        if (data->getData() != VALOR_VALIDO)
            estado = FALHA;

    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUData::testarCenarioFalha(){
    try{
        data->setData(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUData::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


//Métodos referentes à TUEmail

void TUEmail::setUp(){
    email = new Email();
    estado = SUCESSO;
}

void TUEmail::tearDown(){
    delete email;
}

void TUEmail::testarCenarioSucesso(){
    try{
        email->setEmail(VALOR_VALIDO);
        if (email->getEmail() != VALOR_VALIDO)
            estado = FALHA;

    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUEmail::testarCenarioFalha(){
    try{
        email->setEmail(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUEmail::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


//Métodos referentes à TUCusto

void TUCusto::setUp(){
    custo = new Custo();
    estado = SUCESSO;
}

void TUCusto::tearDown(){
    delete custo;
}

void TUCusto::testarCenarioSucesso(){
    try{
        custo->setCusto(VALOR_VALIDO);
        if (custo->getCusto() != VALOR_VALIDO)
            estado = FALHA;

    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUCusto::testarCenarioFalha(){
    try{
        custo->setCusto(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUCusto::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}




