// Diretivas para controle de inclus�o.


#ifndef DOMINIO_H_INCLUDED
#define DOMINIO_H_INCLUDED

// Inclus�es e defini��es de espa�o de nomes.

#include <string>
#include <stdexcept>

using namespace std;

/*! \file Dominio.h
    \brief Arquivo que cont�m as classes do m�dulo Dom�nio.

    O arquivo Dominio.h cont�m os prot�tipos de todas as classes que definem os dom�nios referentes ao sistema.
*/


/*! \class Nome
    \brief Classe que cont�m os principais m�todos do nome do dominio.

    Cont�m os prot�tipos dos m�todos do nome referente ao dom�nio do sistema.

*/

class Nome{

    private:
        string nome;

    public:

        Nome();
        Nome(string);

        void setNome(string)  throw (invalid_argument);
        string getNome() const;         // M�todo const. Evita que altere alguma informa��o.

       void isNomeValid(string) throw (invalid_argument);    // M�todo usado para validar a string nome. Usado pela camada de neg�cio.
};

/*! \class Senha
    \brief Classe que cont�m os principais m�todos da senha do dominio.

    Cont�m os prot�tipos dos m�todos do nome referente ao dom�nio do sistema.

*/

class Senha{

    private:
        string senha;

    public:

        Senha();
        Senha(string);

        void setSenha(string) throw (invalid_argument);
        string getSenha() const;

        void isSenhaValid(string) throw (invalid_argument);

};

/*! \class CodigoProjeto
    \brief Classe que cont�m os principais m�todos do codigo do projeto do dominio.

    Cont�m os prot�tipos dos m�todos do nome referente ao dom�nio do sistema.

*/

class CodigoProjeto{

    private:
        string codigoProjeto;

    public:

        CodigoProjeto();
        CodigoProjeto(string);

        void setCodigoProjeto(string)  throw (invalid_argument);
        string getCodigoProjeto() const;

        void isCodigoProjetoValid(string)  throw (invalid_argument);

};

/*! \class Telefone
    \brief Classe que cont�m os principais m�todos do telefone do dominio.

    Cont�m os prot�tipos dos m�todos do nome referente ao dom�nio do sistema.

*/

class Telefone{

    private:
        string telefone;

    public:

        Telefone();
        Telefone(string);

        void setTelefone(string)  throw (invalid_argument);
        string getTelefone() const;

        void isTelefoneValid(string)  throw (invalid_argument);

};

/*! \class EstadoProjeto
    \brief Classe que cont�m os principais m�todos do Estado do Projeto do dominio.

    Cont�m os prot�tipos dos m�todos do nome referente ao dom�nio do sistema.

*/

class EstadoProjeto{

    private:

        int estadoProjeto;

    public:

        EstadoProjeto();
        EstadoProjeto(int);

        void setEstadoProjeto(int)   throw (invalid_argument);
        int getEstadoProjeto() const;

        void isEstadoProjetoValid(int) throw (invalid_argument);


};

/*! \class Fase
    \brief Classe que cont�m os principais m�todos da fase do dominio.

    Cont�m os prot�tipos dos m�todos do nome referente ao dom�nio do sistema.

*/

class Fase{

    private:

        int fase;

    public:

        Fase();
        Fase(int);

        void setFase(int) throw (invalid_argument);
        int getFase() const;

        void isFaseValid(int) throw (invalid_argument);
};

/*! \class Funcao
    \brief Classe que cont�m os principais m�todos da fun��o do dominio.

    Cont�m os prot�tipos dos m�todos do nome referente ao dom�nio do sistema.

*/

class Funcao{

    private:

        int funcao;

    public:

        Funcao();
        Funcao(int);

        void setFuncao(int) throw (invalid_argument);
        int getFuncao() const;

        void isFuncaoValid(int) throw (invalid_argument);
};

/*! \class Matricula
    \brief Classe que cont�m os principais m�todos da matricula do dominio.

    Cont�m os prot�tipos dos m�todos do nome referente ao dom�nio do sistema.

*/

class Matricula{

    private:
        string matricula;

    public:

        Matricula();
        Matricula(string);

        void setMatricula(string) throw (invalid_argument);
        string getMatricula() const;

        void isMatriculaValid(string) throw (invalid_argument);
};

/*! \class Data
    \brief Classe que cont�m os principais m�todos da data do dominio.

    Cont�m os prot�tipos dos m�todos do nome referente ao dom�nio do sistema.

*/

class Data{

    private:
        string data;

    public:

        Data();
        Data(string);

        void setData(string) throw (invalid_argument);
        string getData() const;

        void isDataValid(string) throw (invalid_argument);
};


/*! \class Email
    \brief Classe que cont�m os principais m�todos do email do dominio.

    Cont�m os prot�tipos dos m�todos do nome referente ao dom�nio do sistema.

*/

class Email{

    private:
        string email;

    public:

        Email();
        Email(string);

        void setEmail(string) throw (invalid_argument);
        string getEmail() const;

        void isEmailValid(string) throw (invalid_argument);
};

/*! \class Custo
    \brief Classe que cont�m os principais m�todos do custo do dominio.

    Cont�m os prot�tipos dos m�todos do nome referente ao dom�nio do sistema.

*/

class Custo{

    private:
        double custo;

    public:

        Custo();
        Custo(double);

        void setCusto(double) throw (invalid_argument);
        double getCusto() const;

        void isCustoValid(double) throw (invalid_argument);
};

#endif // DOMINIO_H_INCLUDED
