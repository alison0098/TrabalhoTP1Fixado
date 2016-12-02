// Diretivas para controle de inclusão.

#ifndef ENTIDADE_H_INCLUDED
#define ENTIDADE_H_INCLUDED


// Inclusões e definições de espaço de nomes.

#include <string>
#include <stdexcept>
#include "Dominio.h"


using namespace std;

/*! \file Entidade.h
    \brief Arquivo que contém as classes do módulo de entidade.

    O arquivo Entidade.h contém os protótipos de todas as classes que definem as entidades referentes ao sistema.
*/

/*! \class Usuario
    \brief Classe que contém os principais métodos da entidade de usuário.

    Contém os protótipos dos métodos da classe usuário referente às entidades do sistema que serao herdadas de outras classes.

*/
class Usuario{

    public:

        Usuario();
        Usuario(Nome, Matricula, Senha);

        Nome nome;
        Matricula matricula;
        Senha senha;
        Funcao funcao;
};

/*! \class Desenvolvedor
    \brief Classe que contém os principais métodos da entidade de desenvolvedor.

    Contém os protótipos dos métodos da classe desenvolvedor referente às entidades do sistema.

*/

class Desenvolvedor : public Usuario{

    public:


        Funcao subfuncao;
        Email email;
};

/*! \class GerenteProjeto
    \brief Classe que contém os principais métodos da entidade de gerente de projeto.

    Contém os protótipos dos métodos da classe gerente de projeto referente às entidades do sistema.

*/

class GerenteProjeto: public Usuario{

    public:


        Telefone telefone;

};


/*! \class GerenteSistema
    \brief Classe que contém os principais métodos da entidade de gerente de sistema.

    Contém os protótipos dos métodos da classe gerente de sistema referente às entidades do sistema.

*/

class GerenteSistema: public Usuario{

    public:

};


/*! \class FaseProjeto
    \brief Classe que contém os principais métodos da entidade de fase de projeto.

    Contém os protótipos dos métodos da classe fase de projeto referente às entidades do sistema.

*/

class FaseProjeto{

    public:


        Fase fase;
        Data dataInicio;
        Data dataFim;

};


/*! \class Projeto
    \brief Classe que contém os principais métodos da entidade de projeto.

    Contém os protótipos dos métodos da classe projeto referente às entidades do sistema.

*/

class Projeto {

    public:

        Nome nome;
        CodigoProjeto codigoProjeto;
        GerenteProjeto gerenteProjeto;
        Data dataInicio;
        Data dataFim;
        Custo custoAtual;
        Custo custoPrevisto;
        EstadoProjeto estadoProjeto;
        FaseProjeto faseProjeto;


};

/*! \class Resultado
    \brief Classe que contém os principais métodos da entidade de Resultado.

    Contém os protótipos dos métodos da classe resultado referente às entidades do sistema.

*/

class Resultado {

protected:
    int valor;

public:

    // Declarações de possíveis resultados.

    const static int SUCESSO = 0;
    const static int FALHA   = 1;

    void setValor(int valor){
        this->valor = valor;
    }

    int getValor() const {
        return valor;
    }
};

/*! \class ResultadoAutenticacao
    \brief Classe que contém os principais métodos da entidade de Resultado de autenticacao.

    Contém os protótipos dos métodos da classe ResultadoAutenticacao referente às entidades do sistema.

*/

class ResultadoAutenticacao:public Resultado {

private:
    Matricula matricula;

public:
    void setMatricula(const Matricula &matricula){      // passagem por referência.
        this->matricula = matricula;
    }

    Matricula getMatricula() const {
        return matricula;
    }
};

/*! \class ResultadoProjeto
    \brief Classe que contém os principais métodos da entidade de Resultado de projeto.

    Contém os protótipos dos métodos da classe resultado de projeto referente às entidades do sistema.

*/

class ResultadoProjeto:public Resultado {

private:
    Projeto projeto;

public:
    void setProjeto(const Projeto &projeto){      // passagem por referência.
        this->projeto = projeto;
    }

    Projeto getProjeto() const {
        return projeto;
    }
};

/*! \class ResultadoGerenteProjeto
    \brief Classe que contém os principais métodos da entidade de Resultado de Gerente de Projeto.

    Contém os protótipos dos métodos da classe Resultado de gerente de projeto referente às entidades do sistema.

*/


class ResultadoGerenteProjeto:public Resultado {

private:
    GerenteProjeto gerenteProjeto;

public:
    void setGerenteProjeto(const GerenteProjeto &gerenteProjeto){      // passagem por referência.
        this->gerenteProjeto = gerenteProjeto;
    }

    GerenteProjeto getGerenteProjeto() const {
        return gerenteProjeto;
    }
};

/*! \class ResultadoGerenteSistema
    \brief Classe que contém os principais métodos da entidade de resultado de gerente de sistema.

    Contém os protótipos dos métodos da classe resultado de gerente de sistema referente às entidades do sistema.

*/

class ResultadoGerenteSistema:public Resultado {

private:
    GerenteSistema gerenteSistema;

public:
    void setGerenteSistema(const GerenteSistema &gerenteSistema){      // passagem por referência.
        this->gerenteSistema = gerenteSistema;
    }

    GerenteSistema getGerenteSistema() const {
        return gerenteSistema;
    }
};

/*! \class ResultadoDesenvolvedor
    \brief Classe que contém os principais métodos da entidade de Resultado de desenvolvedor.

    Contém os protótipos dos métodos da classe resultado de desenvolvedor referente às entidades do sistema.

*/

class ResultadoDesenvolvedor:public Resultado {

private:
    Desenvolvedor desenvolvedor;


public:
    void setDesenvolvedor(const Desenvolvedor  &desenvolvedor){      // passagem por referência.
        this->desenvolvedor= desenvolvedor;
    }

    Desenvolvedor getDesenvolvedor() const {
        return desenvolvedor;
    }
};


#endif // ENTIDADE_H_INCLUDED
