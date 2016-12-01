// Diretivas para controle de inclusão.


#ifndef DOMINIO_H_INCLUDED
#define DOMINIO_H_INCLUDED

// Inclusões e definições de espaço de nomes.

#include <string>
#include <stdexcept>

using namespace std;

/*! \file Dominio.h
    \brief Arquivo que contém as classes do módulo Domínio.

    O arquivo Dominio.h contém os protótipos de todas as classes que definem os domínios referentes ao sistema.
*/


/*! \class Nome
    \brief Classe que contém os principais métodos do nome do dominio.

    Contém os protótipos dos métodos do nome referente ao domínio do sistema.

*/

class Nome{

    private:
        string nome;

    public:

        Nome();
        Nome(string);

        void setNome(string)  throw (invalid_argument);
        string getNome() const;         // Método const. Evita que altere alguma informação.

       void isNomeValid(string) throw (invalid_argument);    // Método usado para validar a string nome. Usado pela camada de negócio.
};

/*! \class Senha
    \brief Classe que contém os principais métodos da senha do dominio.

    Contém os protótipos dos métodos do nome referente ao domínio do sistema.

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
    \brief Classe que contém os principais métodos do codigo do projeto do dominio.

    Contém os protótipos dos métodos do nome referente ao domínio do sistema.

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
    \brief Classe que contém os principais métodos do telefone do dominio.

    Contém os protótipos dos métodos do nome referente ao domínio do sistema.

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
    \brief Classe que contém os principais métodos do Estado do Projeto do dominio.

    Contém os protótipos dos métodos do nome referente ao domínio do sistema.

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
    \brief Classe que contém os principais métodos da fase do dominio.

    Contém os protótipos dos métodos do nome referente ao domínio do sistema.

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
    \brief Classe que contém os principais métodos da função do dominio.

    Contém os protótipos dos métodos do nome referente ao domínio do sistema.

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
    \brief Classe que contém os principais métodos da matricula do dominio.

    Contém os protótipos dos métodos do nome referente ao domínio do sistema.

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
    \brief Classe que contém os principais métodos da data do dominio.

    Contém os protótipos dos métodos do nome referente ao domínio do sistema.

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
    \brief Classe que contém os principais métodos do email do dominio.

    Contém os protótipos dos métodos do nome referente ao domínio do sistema.

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
    \brief Classe que contém os principais métodos do custo do dominio.

    Contém os protótipos dos métodos do nome referente ao domínio do sistema.

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
