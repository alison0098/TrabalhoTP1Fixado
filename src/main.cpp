// Exemplos desenvolvidos para ilustrar a sintaxe da linguagem.

#include <iostream>
#include <string>
#include "TesteUnidade.h"
#include "Apresentacao.h"

using namespace std;

int main()
{

   //Segue abaixo a execução dos testes de unidade.


   //Testes de unidade dos Dominios
   TUNome testeNome;
   TUSenha testeSenha;
   TUCodigoProjeto testeCodigoProjeto;
   TUTelefone testeTelefone;
   TUEstadoProjeto testeEstadoProjeto;
   TUFase testeFase;
   TUFuncao testeFuncao;
   TUMatricula testeMatricula;
   TUData testeData;
   TUEmail testeEmail;
   TUCusto testeCusto;
   Opening opening;

   if(testeNome.run() == TUNome::FALHA){
        cout << "Falha no teste de Unidade de Nome." << endl;
   }else{
        cout << "Sucesso no teste de Unidade de Nome." << endl;
   }

    if(testeSenha.run() == TUNome::FALHA){
        cout << "Falha no teste de Unidade de Senha." << endl;
   }else{
        cout << "Sucesso no teste de Unidade de Senha." << endl;
   }

   if(testeCodigoProjeto.run() == TUCodigoProjeto::FALHA){
        cout << "Falha no teste de Unidade de Codigo de Projeto." << endl;
   }else{
        cout << "Sucesso no teste de Unidade de Codigo de Projeto." << endl;
   }

    if(testeTelefone.run() == TUTelefone::FALHA){
        cout << "Falha no teste de Unidade de Telefone." << endl;
   }else{
        cout << "Sucesso no teste de Unidade de Telefone." << endl;
   }

   if(testeEstadoProjeto.run() == TUEstadoProjeto::FALHA){
        cout << "Falha no teste de Unidade de Estado de Projeto." << endl;
   }else{
        cout << "Sucesso no teste de Unidade de Estado de Projeto." << endl;
   }

    if(testeFase.run() == TUFase::FALHA){
        cout << "Falha no teste de Unidade de Fase." << endl;
   }else{
        cout << "Sucesso no teste de Unidade de Fase." << endl;
   }

    if(testeFuncao.run() == TUFuncao::FALHA){
        cout << "Falha no teste de Unidade de Funcao." << endl;
   }else{
        cout << "Sucesso no teste de Unidade de Funcao." << endl;
   }

    if(testeMatricula.run() == TUMatricula::FALHA){
        cout << "Falha no teste de Unidade de Matricula." << endl;
   }else{
        cout << "Sucesso no teste de Unidade de Matricula." << endl;
   }

    if(testeData.run() == TUData::FALHA){
        cout << "Falha no teste de Unidade de Data." << endl;
   }else{
        cout << "Sucesso no teste de Unidade de Data." << endl;
   }

    if(testeEmail.run() == TUEmail::FALHA){
        cout << "Falha no teste de Unidade de Email." << endl;
   }else{
        cout << "Sucesso no teste de Unidade de Email." << endl;
   }

    if(testeCusto.run() == TUCusto::FALHA){
        cout << "Falha no teste de Unidade de Custo." << endl;
   }else{
        cout << "Sucesso no teste de Unidade de Custo." << endl;
   }


    opening.executar();

}
