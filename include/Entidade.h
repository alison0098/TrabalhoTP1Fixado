// Diretivas para controle de inclus�o.

#ifndef ENTIDADE_H_INCLUDED
#define ENTIDADE_H_INCLUDED


// Inclus�es e defini��es de espa�o de nomes.

#include <string>
#include <stdexcept>
#include "Dominio.h"


using namespace std;

/*! \file Entidade.h
    \brief Arquivo que cont�m as classes do m�dulo de entidade.

    O arquivo Entidade.h cont�m os prot�tipos de todas as classes que definem as entidades referentes ao sistema.
*/

/*! \class Usuario
    \brief Classe que cont�m os principais m�todos da entidade de usu�rio.

    Cont�m os prot�tipos dos m�todos da classe usu�rio referente �s entidades do sistema que serao herdadas de outras classes.

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
    \brief Classe que cont�m os principais m�todos da entidade de desenvolvedor.

    Cont�m os prot�tipos dos m�todos da classe desenvolvedor referente �s entidades do sistema.

*/

class Desenvolvedor : public Usuario{

    public:


        Funcao subfuncao;
        Email email;
};

/*! \class GerenteProjeto
    \brief Classe que cont�m os principais m�todos da entidade de gerente de projeto.

    Cont�m os prot�tipos dos m�todos da classe gerente de projeto referente �s entidades do sistema.

*/

class GerenteProjeto: public Usuario{

    public:


        Telefone telefone;

};


/*! \class GerenteSistema
    \brief Classe que cont�m os principais m�todos da entidade de gerente de sistema.

    Cont�m os prot�tipos dos m�todos da classe gerente de sistema referente �s entidades do sistema.

*/

class GerenteSistema: public Usuario{

    public:

};


/*! \class FaseProjeto
    \brief Classe que cont�m os principais m�todos da entidade de fase de projeto.

    Cont�m os prot�tipos dos m�todos da classe fase de projeto referente �s entidades do sistema.

*/

class FaseProjeto{

    public:


        Fase fase;
        Data dataInicio;
        Data dataFim;

};


/*! \class Projeto
    \brief Classe que cont�m os principais m�todos da entidade de projeto.

    Cont�m os prot�tipos dos m�todos da classe projeto referente �s entidades do sistema.

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
    \brief Classe que cont�m os principais m�todos da entidade de Resultado.

    Cont�m os prot�tipos dos m�todos da classe resultado referente �s entidades do sistema.

*/

class Resultado {

protected:
    int valor;

public:

    // Declara��es de poss�veis resultados.

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
    \brief Classe que cont�m os principais m�todos da entidade de Resultado de autenticacao.

    Cont�m os prot�tipos dos m�todos da classe ResultadoAutenticacao referente �s entidades do sistema.

*/

class ResultadoAutenticacao:public Resultado {

private:
    Matricula matricula;

public:
    void setMatricula(const Matricula &matricula){      // passagem por refer�ncia.
        this->matricula = matricula;
    }

    Matricula getMatricula() const {
        return matricula;
    }
};

/*! \class ResultadoProjeto
    \brief Classe que cont�m os principais m�todos da entidade de Resultado de projeto.

    Cont�m os prot�tipos dos m�todos da classe resultado de projeto referente �s entidades do sistema.

*/

class ResultadoProjeto:public Resultado {

private:
    Projeto projeto;

public:
    void setProjeto(const Projeto &projeto){      // passagem por refer�ncia.
        this->projeto = projeto;
    }

    Projeto getProjeto() const {
        return projeto;
    }
};

/*! \class ResultadoGerenteProjeto
    \brief Classe que cont�m os principais m�todos da entidade de Resultado de Gerente de Projeto.

    Cont�m os prot�tipos dos m�todos da classe Resultado de gerente de projeto referente �s entidades do sistema.

*/


class ResultadoGerenteProjeto:public Resultado {

private:
    GerenteProjeto gerenteProjeto;

public:
    void setGerenteProjeto(const GerenteProjeto &gerenteProjeto){      // passagem por refer�ncia.
        this->gerenteProjeto = gerenteProjeto;
    }

    GerenteProjeto getGerenteProjeto() const {
        return gerenteProjeto;
    }
};

/*! \class ResultadoGerenteSistema
    \brief Classe que cont�m os principais m�todos da entidade de resultado de gerente de sistema.

    Cont�m os prot�tipos dos m�todos da classe resultado de gerente de sistema referente �s entidades do sistema.

*/

class ResultadoGerenteSistema:public Resultado {

private:
    GerenteSistema gerenteSistema;

public:
    void setGerenteSistema(const GerenteSistema &gerenteSistema){      // passagem por refer�ncia.
        this->gerenteSistema = gerenteSistema;
    }

    GerenteSistema getGerenteSistema() const {
        return gerenteSistema;
    }
};

/*! \class ResultadoDesenvolvedor
    \brief Classe que cont�m os principais m�todos da entidade de Resultado de desenvolvedor.

    Cont�m os prot�tipos dos m�todos da classe resultado de desenvolvedor referente �s entidades do sistema.

*/

class ResultadoDesenvolvedor:public Resultado {

private:
    Desenvolvedor desenvolvedor;


public:
    void setDesenvolvedor(const Desenvolvedor  &desenvolvedor){      // passagem por refer�ncia.
        this->desenvolvedor= desenvolvedor;
    }

    Desenvolvedor getDesenvolvedor() const {
        return desenvolvedor;
    }
};


#endif // ENTIDADE_H_INCLUDED
