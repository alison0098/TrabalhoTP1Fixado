#ifndef APRESENTACAO_H
#define APRESENTACAO_H

#include <iostream>
#include "Dominio.h"

using namespace std;

/*! \file Apresentacao.h
    \brief Arquivo que contém as classes do módulo de apresentacao.

    O arquivo Apresentacao.h contém os protótipos das classes que definem a apresentaco do sistema.
*/

class Apresentacao{

    public:

        virtual void executar() = 0;

};

class Opening: public Apresentacao{
    public:

        virtual void executar();

};

class GestaoProjetos: public Apresentacao{};

class ProjetosDev: public GestaoProjetos{};

class ProjetosGP: public GestaoProjetos{};

class ProjetosGS: public GestaoProjetos{};

class GestaoPessoas: public Apresentacao{};

class PessoasDev: public GestaoPessoas{};

class PessoasGP: public GestaoPessoas{};

class PessoasGS: public GestaoPessoas{};


#endif // APRESENTACAO_H
