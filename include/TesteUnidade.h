#ifndef TESTEUNIDADE_H_INCLUDED
#define TESTEUNIDADE_H_INCLUDED

#include<string>
#include <stdexcept>
#include "Dominio.h"

/*! \file TesteUnidade.h
    \brief Arquivo que cont�m as classes de testes de unidade dos dom�nios.

    O arquivo TesteUnidade.h cont�m os prot�tipos de todas as classes que definem os testes de unidades referentes aos dom�nios.
*/

using namespace std;

/*! \class TUNome
    \brief Classe que cont�m os testes de unidade do dom�nio: Nome.

    Cont�m os prot�tipos dos m�todos utilizados no teste de unidade e os atributos necess�rios a este.

*/
class TUNome{

    private:

        const static string VALOR_VALIDO;
        const static string VALOR_INVALIDO;

        Nome *nome;

        /*! \var int estado
            \brief Cont�m um valor inteiro que indica o sucesso ou falha do teste.
        */
        int estado;

        /*! \fn void setUp()
            \brief Fun��o que prepara todo o necess�rio para o teste de unidade.

            Instancia a classe a ser testada e define um valor inicial para a vari�vel estado.
        */
        void setUp();

        /*! \fn void tearDown()
            \brief Libera mem�ria utilizada pelo teste de unidade.

            Ao final do teste de unidade libera mem�ria referente a inst�ncias de classes.

        */
        void tearDown();

        /*! \fn void testarCenarioSucesso()
            \brief Realiza o teste de unidade com vari�veis v�lidas.
        */
        void testarCenarioSucesso();

        /*! \fn void testarCenarioFalha()
            \brief Realiza o teste de unidade com vari�veis inv�lidas.
        */
        void testarCenarioFalha();

    public:

        /*! \var const static int SUCESSO
            \brief Constante �nica da classe que indica sucesso do teste.
        */
        const static int SUCESSO;

        /*! \var const static int FALHA
            \brief Constante �nica da classe que indica falha do teste.
        */
        const static int FALHA;

        /*! \fn int run();
            \brief M�todo que inicia o teste de unidade e retorna um valor inteiro indicando sucesso ou falha.
        */
        int run();
};

/*! \class TUSenha
    \brief Classe que cont�m os testes de unidade do dom�nio: Senha.

    Cont�m os prot�tipos dos m�todos utilizados no teste de unidade e os atributos necess�rios a este.

*/
class TUSenha{

    private:

        const static string VALOR_VALIDO;
        const static string VALOR_INVALIDO;

        Senha *senha;

        /*! \var int estado
            \brief Cont�m um valor inteiro que indica o sucesso ou falha do teste.
        */
        int estado;

        /*! \fn void setUp()
            \brief Fun��o que prepara todo o necess�rio para o teste de unidade.

            Instancia a classe a ser testada e define um valor inicial para a vari�vel estado.
        */
        void setUp();

        /*! \fn void tearDown()
            \brief Libera mem�ria utilizada pelo teste de unidade.

            Ao final do teste de unidade libera mem�ria referente a inst�ncias de classes.

        */
        void tearDown();

        /*! \fn void testarCenarioSucesso()
            \brief Realiza o teste de unidade com vari�veis v�lidas.
        */
        void testarCenarioSucesso();

        /*! \fn void testarCenarioFalha()
            \brief Realiza o teste de unidade com vari�veis inv�lidas.
        */
        void testarCenarioFalha();

    public:

        /*! \var const static int SUCESSO
            \brief Constante �nica da classe que indica sucesso do teste.
        */
        const static int SUCESSO;

        /*! \var const static int FALHA
            \brief Constante �nica da classe que indica falha do teste.
        */
        const static int FALHA;

        /*! \fn int run();
            \brief M�todo que inicia o teste de unidade e retorna um valor inteiro indicando sucesso ou falha.
        */
        int run();
};

/*! \class TUCodigoProjeto
    \brief Classe que cont�m os testes de unidade do dom�nio: CodigoProjeto.

    Cont�m os prot�tipos dos m�todos utilizados no teste de unidade e os atributos necess�rios a este.

*/
class TUCodigoProjeto{

    private:

        const static string VALOR_VALIDO;
        const static string VALOR_INVALIDO;

        CodigoProjeto *codigoProjeto;

        /*! \var int estado
            \brief Cont�m um valor inteiro que indica o sucesso ou falha do teste.
        */
        int estado;

        /*! \fn void setUp()
            \brief Fun��o que prepara todo o necess�rio para o teste de unidade.

            Instancia a classe a ser testada e define um valor inicial para a vari�vel estado.
        */
        void setUp();

        /*! \fn void tearDown()
            \brief Libera mem�ria utilizada pelo teste de unidade.

            Ao final do teste de unidade libera mem�ria referente a inst�ncias de classes.

        */
        void tearDown();

        /*! \fn void testarCenarioSucesso()
            \brief Realiza o teste de unidade com vari�veis v�lidas.
        */
        void testarCenarioSucesso();

        /*! \fn void testarCenarioFalha()
            \brief Realiza o teste de unidade com vari�veis inv�lidas.
        */
        void testarCenarioFalha();

    public:

        /*! \var const static int SUCESSO
            \brief Constante �nica da classe que indica sucesso do teste.
        */
        const static int SUCESSO;

        /*! \var const static int FALHA
            \brief Constante �nica da classe que indica falha do teste.
        */
        const static int FALHA;

        /*! \fn int run();
            \brief M�todo que inicia o teste de unidade e retorna um valor inteiro indicando sucesso ou falha.
        */
        int run();

};

/*! \class TUTelefone
    \brief Classe que cont�m os testes de unidade do dom�nio: Telefone.

    Cont�m os prot�tipos dos m�todos utilizados no teste de unidade e os atributos necess�rios a este.

*/
class TUTelefone{

    private:

        const static string VALOR_VALIDO;
        const static string VALOR_INVALIDO;

        Telefone *telefone;

        /*! \var int estado
            \brief Cont�m um valor inteiro que indica o sucesso ou falha do teste.
        */
        int estado;

        /*! \fn void setUp()
            \brief Fun��o que prepara todo o necess�rio para o teste de unidade.

            Instancia a classe a ser testada e define um valor inicial para a vari�vel estado.
        */
        void setUp();

        /*! \fn void tearDown()
            \brief Libera mem�ria utilizada pelo teste de unidade.

            Ao final do teste de unidade libera mem�ria referente a inst�ncias de classes.

        */
        void tearDown();

        /*! \fn void testarCenarioSucesso()
            \brief Realiza o teste de unidade com vari�veis v�lidas.
        */
        void testarCenarioSucesso();

        /*! \fn void testarCenarioFalha()
            \brief Realiza o teste de unidade com vari�veis inv�lidas.
        */
        void testarCenarioFalha();

    public:

        /*! \var const static int SUCESSO
            \brief Constante �nica da classe que indica sucesso do teste.
        */
        const static int SUCESSO;

        /*! \var const static int FALHA
            \brief Constante �nica da classe que indica falha do teste.
        */
        const static int FALHA;

        /*! \fn int run();
            \brief M�todo que inicia o teste de unidade e retorna um valor inteiro indicando sucesso ou falha.
        */
        int run();
};

/*! \class TUEstadoProjeto
    \brief Classe que cont�m os testes de unidade do dom�nio: EstadoProjeto.

    Cont�m os prot�tipos dos m�todos utilizados no teste de unidade e os atributos necess�rios a este.

*/
class TUEstadoProjeto{

    private:

        const static int VALOR_VALIDO;
        const static int VALOR_INVALIDO;

        EstadoProjeto *estadoProjeto;

        /*! \var int estado
            \brief Cont�m um valor inteiro que indica o sucesso ou falha do teste.
        */
        int estado;

        /*! \fn void setUp()
            \brief Fun��o que prepara todo o necess�rio para o teste de unidade.

            Instancia a classe a ser testada e define um valor inicial para a vari�vel estado.
        */
        void setUp();

        /*! \fn void tearDown()
            \brief Libera mem�ria utilizada pelo teste de unidade.

            Ao final do teste de unidade libera mem�ria referente a inst�ncias de classes.

        */
        void tearDown();

        /*! \fn void testarCenarioSucesso()
            \brief Realiza o teste de unidade com vari�veis v�lidas.
        */
        void testarCenarioSucesso();

        /*! \fn void testarCenarioFalha()
            \brief Realiza o teste de unidade com vari�veis inv�lidas.
        */
        void testarCenarioFalha();

    public:

        /*! \var const static int SUCESSO
            \brief Constante �nica da classe que indica sucesso do teste.
        */
        const static int SUCESSO;

        /*! \var const static int FALHA
            \brief Constante �nica da classe que indica falha do teste.
        */
        const static int FALHA;

        /*! \fn int run();
            \brief M�todo que inicia o teste de unidade e retorna um valor inteiro indicando sucesso ou falha.
        */
        int run();
};

/*! \class TUFase
    \brief Classe que cont�m os testes de unidade do dom�nio: Fase.

    Cont�m os prot�tipos dos m�todos utilizados no teste de unidade e os atributos necess�rios a este.

*/
class TUFase{

    private:

        const static int VALOR_VALIDO;
        const static int VALOR_INVALIDO;

        Fase *fase;

        /*! \var int estado
            \brief Cont�m um valor inteiro que indica o sucesso ou falha do teste.
        */
        int estado;

        /*! \fn void setUp()
            \brief Fun��o que prepara todo o necess�rio para o teste de unidade.

            Instancia a classe a ser testada e define um valor inicial para a vari�vel estado.
        */
        void setUp();

        /*! \fn void tearDown()
            \brief Libera mem�ria utilizada pelo teste de unidade.

            Ao final do teste de unidade libera mem�ria referente a inst�ncias de classes.

        */
        void tearDown();

        /*! \fn void testarCenarioSucesso()
            \brief Realiza o teste de unidade com vari�veis v�lidas.
        */
        void testarCenarioSucesso();

        /*! \fn void testarCenarioFalha()
            \brief Realiza o teste de unidade com vari�veis inv�lidas.
        */
        void testarCenarioFalha();

    public:

        /*! \var const static int SUCESSO
            \brief Constante �nica da classe que indica sucesso do teste.
        */
        const static int SUCESSO;

        /*! \var const static int FALHA
            \brief Constante �nica da classe que indica falha do teste.
        */
        const static int FALHA;

        /*! \fn int run();
            \brief M�todo que inicia o teste de unidade e retorna um valor inteiro indicando sucesso ou falha.
        */
        int run();
};

/*! \class TUFuncao
    \brief Classe que cont�m os testes de unidade do dom�nio: Funcao.

    Cont�m os prot�tipos dos m�todos utilizados no teste de unidade e os atributos necess�rios a este.

*/
class TUFuncao{

    private:

        const static int VALOR_VALIDO;
        const static int VALOR_INVALIDO;

        Funcao *funcao;

        /*! \var int estado
            \brief Cont�m um valor inteiro que indica o sucesso ou falha do teste.
        */
        int estado;

        /*! \fn void setUp()
            \brief Fun��o que prepara todo o necess�rio para o teste de unidade.

            Instancia a classe a ser testada e define um valor inicial para a vari�vel estado.
        */
        void setUp();

        /*! \fn void tearDown()
            \brief Libera mem�ria utilizada pelo teste de unidade.

            Ao final do teste de unidade libera mem�ria referente a inst�ncias de classes.

        */
        void tearDown();

        /*! \fn void testarCenarioSucesso()
            \brief Realiza o teste de unidade com vari�veis v�lidas.
        */
        void testarCenarioSucesso();

        /*! \fn void testarCenarioFalha()
            \brief Realiza o teste de unidade com vari�veis inv�lidas.
        */
        void testarCenarioFalha();

    public:

        /*! \var const static int SUCESSO
            \brief Constante �nica da classe que indica sucesso do teste.
        */
        const static int SUCESSO;

        /*! \var const static int FALHA
            \brief Constante �nica da classe que indica falha do teste.
        */
        const static int FALHA;

        /*! \fn int run();
            \brief M�todo que inicia o teste de unidade e retorna um valor inteiro indicando sucesso ou falha.
        */
        int run();
};

/*! \class TUMatricula
    \brief Classe que cont�m os testes de unidade do dom�nio: Matricula.

    Cont�m os prot�tipos dos m�todos utilizados no teste de unidade e os atributos necess�rios a este.

*/
class TUMatricula{

    private:

        const static string VALOR_VALIDO;
        const static string VALOR_INVALIDO;

        Matricula *matricula;

        /*! \var int estado
            \brief Cont�m um valor inteiro que indica o sucesso ou falha do teste.
        */
        int estado;

        /*! \fn void setUp()
            \brief Fun��o que prepara todo o necess�rio para o teste de unidade.

            Instancia a classe a ser testada e define um valor inicial para a vari�vel estado.
        */
        void setUp();

        /*! \fn void tearDown()
            \brief Libera mem�ria utilizada pelo teste de unidade.

            Ao final do teste de unidade libera mem�ria referente a inst�ncias de classes.

        */
        void tearDown();

        /*! \fn void testarCenarioSucesso()
            \brief Realiza o teste de unidade com vari�veis v�lidas.
        */
        void testarCenarioSucesso();

        /*! \fn void testarCenarioFalha()
            \brief Realiza o teste de unidade com vari�veis inv�lidas.
        */
        void testarCenarioFalha();

    public:

        /*! \var const static int SUCESSO
            \brief Constante �nica da classe que indica sucesso do teste.
        */
        const static int SUCESSO;

        /*! \var const static int FALHA
            \brief Constante �nica da classe que indica falha do teste.
        */
        const static int FALHA;

        /*! \fn int run();
            \brief M�todo que inicia o teste de unidade e retorna um valor inteiro indicando sucesso ou falha.
        */
        int run();
};

/*! \class TUData
    \brief Classe que cont�m os testes de unidade do dom�nio: Data.

    Cont�m os prot�tipos dos m�todos utilizados no teste de unidade e os atributos necess�rios a este.

*/
class TUData{

    private:

        const static string VALOR_VALIDO;
        const static string VALOR_INVALIDO;

        Data *data;

        /*! \var int estado
            \brief Cont�m um valor inteiro que indica o sucesso ou falha do teste.
        */
        int estado;

        /*! \fn void setUp()
            \brief Fun��o que prepara todo o necess�rio para o teste de unidade.

            Instancia a classe a ser testada e define um valor inicial para a vari�vel estado.
        */
        void setUp();

        /*! \fn void tearDown()
            \brief Libera mem�ria utilizada pelo teste de unidade.

            Ao final do teste de unidade libera mem�ria referente a inst�ncias de classes.

        */
        void tearDown();

        /*! \fn void testarCenarioSucesso()
            \brief Realiza o teste de unidade com vari�veis v�lidas.
        */
        void testarCenarioSucesso();

        /*! \fn void testarCenarioFalha()
            \brief Realiza o teste de unidade com vari�veis inv�lidas.
        */
        void testarCenarioFalha();

    public:

        /*! \var const static int SUCESSO
            \brief Constante �nica da classe que indica sucesso do teste.
        */
        const static int SUCESSO;

        /*! \var const static int FALHA
            \brief Constante �nica da classe que indica falha do teste.
        */
        const static int FALHA;

        /*! \fn int run();
            \brief M�todo que inicia o teste de unidade e retorna um valor inteiro indicando sucesso ou falha.
        */
        int run();
};

/*! \class TUEmail
    \brief Classe que cont�m os testes de unidade do dom�nio: Email.

    Cont�m os prot�tipos dos m�todos utilizados no teste de unidade e os atributos necess�rios a este.

*/
class TUEmail{

    private:

        const static string VALOR_VALIDO;
        const static string VALOR_INVALIDO;

        Email *email;

        /*! \var int estado
            \brief Cont�m um valor inteiro que indica o sucesso ou falha do teste.
        */
        int estado;

        /*! \fn void setUp()
            \brief Fun��o que prepara todo o necess�rio para o teste de unidade.

            Instancia a classe a ser testada e define um valor inicial para a vari�vel estado.
        */
        void setUp();

        /*! \fn void tearDown()
            \brief Libera mem�ria utilizada pelo teste de unidade.

            Ao final do teste de unidade libera mem�ria referente a inst�ncias de classes.

        */
        void tearDown();

        /*! \fn void testarCenarioSucesso()
            \brief Realiza o teste de unidade com vari�veis v�lidas.
        */
        void testarCenarioSucesso();

        /*! \fn void testarCenarioFalha()
            \brief Realiza o teste de unidade com vari�veis inv�lidas.
        */
        void testarCenarioFalha();

    public:

        /*! \var const static int SUCESSO
            \brief Constante �nica da classe que indica sucesso do teste.
        */
        const static int SUCESSO;

        /*! \var const static int FALHA
            \brief Constante �nica da classe que indica falha do teste.
        */
        const static int FALHA;

        /*! \fn int run();
            \brief M�todo que inicia o teste de unidade e retorna um valor inteiro indicando sucesso ou falha.
        */
        int run();
};

/*! \class TUCusto
    \brief Classe que cont�m os testes de unidade do dom�nio: Custo.

    Cont�m os prot�tipos dos m�todos utilizados no teste de unidade e os atributos necess�rios a este.

*/
class TUCusto{

    private:


        const static double VALOR_VALIDO;
        const static double VALOR_INVALIDO;

        Custo *custo;


        /*! \var int estado
            \brief Cont�m um valor inteiro que indica o sucesso ou falha do teste.
        */
        int estado;

        /*! \fn void setUp()
            \brief Fun��o que prepara todo o necess�rio para o teste de unidade.

            Instancia a classe a ser testada e define um valor inicial para a vari�vel estado.
        */
        void setUp();

        /*! \fn void tearDown()
            \brief Libera mem�ria utilizada pelo teste de unidade.

            Ao final do teste de unidade libera mem�ria referente a inst�ncias de classes.

        */
        void tearDown();

        /*! \fn void testarCenarioSucesso()
            \brief Realiza o teste de unidade com vari�veis v�lidas.
        */
        void testarCenarioSucesso();

        /*! \fn void testarCenarioFalha()
            \brief Realiza o teste de unidade com vari�veis inv�lidas.
        */
        void testarCenarioFalha();

    public:

        /*! \var const static int SUCESSO
            \brief Constante �nica da classe que indica sucesso do teste.
        */
        const static int SUCESSO;

        /*! \var const static int FALHA
            \brief Constante unica da classe que indica falha do teste.
        */
        const static int FALHA;

        /*! \fn int run();
            \brief M�todo que inicia o teste de unidade e retorna um valor inteiro indicando sucesso ou falha.
        */
        int run();
};



#endif // TESTEUNIDADE_H_INCLUDED
