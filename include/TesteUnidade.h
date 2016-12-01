#ifndef TESTEUNIDADE_H_INCLUDED
#define TESTEUNIDADE_H_INCLUDED

#include<string>
#include <stdexcept>
#include "Dominio.h"

/*! \file TesteUnidade.h
    \brief Arquivo que contém as classes de testes de unidade dos domínios.

    O arquivo TesteUnidade.h contém os protótipos de todas as classes que definem os testes de unidades referentes aos domínios.
*/

using namespace std;

/*! \class TUNome
    \brief Classe que contém os testes de unidade do domínio: Nome.

    Contém os protótipos dos métodos utilizados no teste de unidade e os atributos necessários a este.

*/
class TUNome{

    private:

        const static string VALOR_VALIDO;
        const static string VALOR_INVALIDO;

        Nome *nome;

        /*! \var int estado
            \brief Contém um valor inteiro que indica o sucesso ou falha do teste.
        */
        int estado;

        /*! \fn void setUp()
            \brief Função que prepara todo o necessário para o teste de unidade.

            Instancia a classe a ser testada e define um valor inicial para a variável estado.
        */
        void setUp();

        /*! \fn void tearDown()
            \brief Libera memória utilizada pelo teste de unidade.

            Ao final do teste de unidade libera memória referente a instâncias de classes.

        */
        void tearDown();

        /*! \fn void testarCenarioSucesso()
            \brief Realiza o teste de unidade com variáveis válidas.
        */
        void testarCenarioSucesso();

        /*! \fn void testarCenarioFalha()
            \brief Realiza o teste de unidade com variáveis inválidas.
        */
        void testarCenarioFalha();

    public:

        /*! \var const static int SUCESSO
            \brief Constante única da classe que indica sucesso do teste.
        */
        const static int SUCESSO;

        /*! \var const static int FALHA
            \brief Constante única da classe que indica falha do teste.
        */
        const static int FALHA;

        /*! \fn int run();
            \brief Método que inicia o teste de unidade e retorna um valor inteiro indicando sucesso ou falha.
        */
        int run();
};

/*! \class TUSenha
    \brief Classe que contém os testes de unidade do domínio: Senha.

    Contém os protótipos dos métodos utilizados no teste de unidade e os atributos necessários a este.

*/
class TUSenha{

    private:

        const static string VALOR_VALIDO;
        const static string VALOR_INVALIDO;

        Senha *senha;

        /*! \var int estado
            \brief Contém um valor inteiro que indica o sucesso ou falha do teste.
        */
        int estado;

        /*! \fn void setUp()
            \brief Função que prepara todo o necessário para o teste de unidade.

            Instancia a classe a ser testada e define um valor inicial para a variável estado.
        */
        void setUp();

        /*! \fn void tearDown()
            \brief Libera memória utilizada pelo teste de unidade.

            Ao final do teste de unidade libera memória referente a instâncias de classes.

        */
        void tearDown();

        /*! \fn void testarCenarioSucesso()
            \brief Realiza o teste de unidade com variáveis válidas.
        */
        void testarCenarioSucesso();

        /*! \fn void testarCenarioFalha()
            \brief Realiza o teste de unidade com variáveis inválidas.
        */
        void testarCenarioFalha();

    public:

        /*! \var const static int SUCESSO
            \brief Constante única da classe que indica sucesso do teste.
        */
        const static int SUCESSO;

        /*! \var const static int FALHA
            \brief Constante única da classe que indica falha do teste.
        */
        const static int FALHA;

        /*! \fn int run();
            \brief Método que inicia o teste de unidade e retorna um valor inteiro indicando sucesso ou falha.
        */
        int run();
};

/*! \class TUCodigoProjeto
    \brief Classe que contém os testes de unidade do domínio: CodigoProjeto.

    Contém os protótipos dos métodos utilizados no teste de unidade e os atributos necessários a este.

*/
class TUCodigoProjeto{

    private:

        const static string VALOR_VALIDO;
        const static string VALOR_INVALIDO;

        CodigoProjeto *codigoProjeto;

        /*! \var int estado
            \brief Contém um valor inteiro que indica o sucesso ou falha do teste.
        */
        int estado;

        /*! \fn void setUp()
            \brief Função que prepara todo o necessário para o teste de unidade.

            Instancia a classe a ser testada e define um valor inicial para a variável estado.
        */
        void setUp();

        /*! \fn void tearDown()
            \brief Libera memória utilizada pelo teste de unidade.

            Ao final do teste de unidade libera memória referente a instâncias de classes.

        */
        void tearDown();

        /*! \fn void testarCenarioSucesso()
            \brief Realiza o teste de unidade com variáveis válidas.
        */
        void testarCenarioSucesso();

        /*! \fn void testarCenarioFalha()
            \brief Realiza o teste de unidade com variáveis inválidas.
        */
        void testarCenarioFalha();

    public:

        /*! \var const static int SUCESSO
            \brief Constante única da classe que indica sucesso do teste.
        */
        const static int SUCESSO;

        /*! \var const static int FALHA
            \brief Constante única da classe que indica falha do teste.
        */
        const static int FALHA;

        /*! \fn int run();
            \brief Método que inicia o teste de unidade e retorna um valor inteiro indicando sucesso ou falha.
        */
        int run();

};

/*! \class TUTelefone
    \brief Classe que contém os testes de unidade do domínio: Telefone.

    Contém os protótipos dos métodos utilizados no teste de unidade e os atributos necessários a este.

*/
class TUTelefone{

    private:

        const static string VALOR_VALIDO;
        const static string VALOR_INVALIDO;

        Telefone *telefone;

        /*! \var int estado
            \brief Contém um valor inteiro que indica o sucesso ou falha do teste.
        */
        int estado;

        /*! \fn void setUp()
            \brief Função que prepara todo o necessário para o teste de unidade.

            Instancia a classe a ser testada e define um valor inicial para a variável estado.
        */
        void setUp();

        /*! \fn void tearDown()
            \brief Libera memória utilizada pelo teste de unidade.

            Ao final do teste de unidade libera memória referente a instâncias de classes.

        */
        void tearDown();

        /*! \fn void testarCenarioSucesso()
            \brief Realiza o teste de unidade com variáveis válidas.
        */
        void testarCenarioSucesso();

        /*! \fn void testarCenarioFalha()
            \brief Realiza o teste de unidade com variáveis inválidas.
        */
        void testarCenarioFalha();

    public:

        /*! \var const static int SUCESSO
            \brief Constante única da classe que indica sucesso do teste.
        */
        const static int SUCESSO;

        /*! \var const static int FALHA
            \brief Constante única da classe que indica falha do teste.
        */
        const static int FALHA;

        /*! \fn int run();
            \brief Método que inicia o teste de unidade e retorna um valor inteiro indicando sucesso ou falha.
        */
        int run();
};

/*! \class TUEstadoProjeto
    \brief Classe que contém os testes de unidade do domínio: EstadoProjeto.

    Contém os protótipos dos métodos utilizados no teste de unidade e os atributos necessários a este.

*/
class TUEstadoProjeto{

    private:

        const static int VALOR_VALIDO;
        const static int VALOR_INVALIDO;

        EstadoProjeto *estadoProjeto;

        /*! \var int estado
            \brief Contém um valor inteiro que indica o sucesso ou falha do teste.
        */
        int estado;

        /*! \fn void setUp()
            \brief Função que prepara todo o necessário para o teste de unidade.

            Instancia a classe a ser testada e define um valor inicial para a variável estado.
        */
        void setUp();

        /*! \fn void tearDown()
            \brief Libera memória utilizada pelo teste de unidade.

            Ao final do teste de unidade libera memória referente a instâncias de classes.

        */
        void tearDown();

        /*! \fn void testarCenarioSucesso()
            \brief Realiza o teste de unidade com variáveis válidas.
        */
        void testarCenarioSucesso();

        /*! \fn void testarCenarioFalha()
            \brief Realiza o teste de unidade com variáveis inválidas.
        */
        void testarCenarioFalha();

    public:

        /*! \var const static int SUCESSO
            \brief Constante única da classe que indica sucesso do teste.
        */
        const static int SUCESSO;

        /*! \var const static int FALHA
            \brief Constante única da classe que indica falha do teste.
        */
        const static int FALHA;

        /*! \fn int run();
            \brief Método que inicia o teste de unidade e retorna um valor inteiro indicando sucesso ou falha.
        */
        int run();
};

/*! \class TUFase
    \brief Classe que contém os testes de unidade do domínio: Fase.

    Contém os protótipos dos métodos utilizados no teste de unidade e os atributos necessários a este.

*/
class TUFase{

    private:

        const static int VALOR_VALIDO;
        const static int VALOR_INVALIDO;

        Fase *fase;

        /*! \var int estado
            \brief Contém um valor inteiro que indica o sucesso ou falha do teste.
        */
        int estado;

        /*! \fn void setUp()
            \brief Função que prepara todo o necessário para o teste de unidade.

            Instancia a classe a ser testada e define um valor inicial para a variável estado.
        */
        void setUp();

        /*! \fn void tearDown()
            \brief Libera memória utilizada pelo teste de unidade.

            Ao final do teste de unidade libera memória referente a instâncias de classes.

        */
        void tearDown();

        /*! \fn void testarCenarioSucesso()
            \brief Realiza o teste de unidade com variáveis válidas.
        */
        void testarCenarioSucesso();

        /*! \fn void testarCenarioFalha()
            \brief Realiza o teste de unidade com variáveis inválidas.
        */
        void testarCenarioFalha();

    public:

        /*! \var const static int SUCESSO
            \brief Constante única da classe que indica sucesso do teste.
        */
        const static int SUCESSO;

        /*! \var const static int FALHA
            \brief Constante única da classe que indica falha do teste.
        */
        const static int FALHA;

        /*! \fn int run();
            \brief Método que inicia o teste de unidade e retorna um valor inteiro indicando sucesso ou falha.
        */
        int run();
};

/*! \class TUFuncao
    \brief Classe que contém os testes de unidade do domínio: Funcao.

    Contém os protótipos dos métodos utilizados no teste de unidade e os atributos necessários a este.

*/
class TUFuncao{

    private:

        const static int VALOR_VALIDO;
        const static int VALOR_INVALIDO;

        Funcao *funcao;

        /*! \var int estado
            \brief Contém um valor inteiro que indica o sucesso ou falha do teste.
        */
        int estado;

        /*! \fn void setUp()
            \brief Função que prepara todo o necessário para o teste de unidade.

            Instancia a classe a ser testada e define um valor inicial para a variável estado.
        */
        void setUp();

        /*! \fn void tearDown()
            \brief Libera memória utilizada pelo teste de unidade.

            Ao final do teste de unidade libera memória referente a instâncias de classes.

        */
        void tearDown();

        /*! \fn void testarCenarioSucesso()
            \brief Realiza o teste de unidade com variáveis válidas.
        */
        void testarCenarioSucesso();

        /*! \fn void testarCenarioFalha()
            \brief Realiza o teste de unidade com variáveis inválidas.
        */
        void testarCenarioFalha();

    public:

        /*! \var const static int SUCESSO
            \brief Constante única da classe que indica sucesso do teste.
        */
        const static int SUCESSO;

        /*! \var const static int FALHA
            \brief Constante única da classe que indica falha do teste.
        */
        const static int FALHA;

        /*! \fn int run();
            \brief Método que inicia o teste de unidade e retorna um valor inteiro indicando sucesso ou falha.
        */
        int run();
};

/*! \class TUMatricula
    \brief Classe que contém os testes de unidade do domínio: Matricula.

    Contém os protótipos dos métodos utilizados no teste de unidade e os atributos necessários a este.

*/
class TUMatricula{

    private:

        const static string VALOR_VALIDO;
        const static string VALOR_INVALIDO;

        Matricula *matricula;

        /*! \var int estado
            \brief Contém um valor inteiro que indica o sucesso ou falha do teste.
        */
        int estado;

        /*! \fn void setUp()
            \brief Função que prepara todo o necessário para o teste de unidade.

            Instancia a classe a ser testada e define um valor inicial para a variável estado.
        */
        void setUp();

        /*! \fn void tearDown()
            \brief Libera memória utilizada pelo teste de unidade.

            Ao final do teste de unidade libera memória referente a instâncias de classes.

        */
        void tearDown();

        /*! \fn void testarCenarioSucesso()
            \brief Realiza o teste de unidade com variáveis válidas.
        */
        void testarCenarioSucesso();

        /*! \fn void testarCenarioFalha()
            \brief Realiza o teste de unidade com variáveis inválidas.
        */
        void testarCenarioFalha();

    public:

        /*! \var const static int SUCESSO
            \brief Constante única da classe que indica sucesso do teste.
        */
        const static int SUCESSO;

        /*! \var const static int FALHA
            \brief Constante única da classe que indica falha do teste.
        */
        const static int FALHA;

        /*! \fn int run();
            \brief Método que inicia o teste de unidade e retorna um valor inteiro indicando sucesso ou falha.
        */
        int run();
};

/*! \class TUData
    \brief Classe que contém os testes de unidade do domínio: Data.

    Contém os protótipos dos métodos utilizados no teste de unidade e os atributos necessários a este.

*/
class TUData{

    private:

        const static string VALOR_VALIDO;
        const static string VALOR_INVALIDO;

        Data *data;

        /*! \var int estado
            \brief Contém um valor inteiro que indica o sucesso ou falha do teste.
        */
        int estado;

        /*! \fn void setUp()
            \brief Função que prepara todo o necessário para o teste de unidade.

            Instancia a classe a ser testada e define um valor inicial para a variável estado.
        */
        void setUp();

        /*! \fn void tearDown()
            \brief Libera memória utilizada pelo teste de unidade.

            Ao final do teste de unidade libera memória referente a instâncias de classes.

        */
        void tearDown();

        /*! \fn void testarCenarioSucesso()
            \brief Realiza o teste de unidade com variáveis válidas.
        */
        void testarCenarioSucesso();

        /*! \fn void testarCenarioFalha()
            \brief Realiza o teste de unidade com variáveis inválidas.
        */
        void testarCenarioFalha();

    public:

        /*! \var const static int SUCESSO
            \brief Constante única da classe que indica sucesso do teste.
        */
        const static int SUCESSO;

        /*! \var const static int FALHA
            \brief Constante única da classe que indica falha do teste.
        */
        const static int FALHA;

        /*! \fn int run();
            \brief Método que inicia o teste de unidade e retorna um valor inteiro indicando sucesso ou falha.
        */
        int run();
};

/*! \class TUEmail
    \brief Classe que contém os testes de unidade do domínio: Email.

    Contém os protótipos dos métodos utilizados no teste de unidade e os atributos necessários a este.

*/
class TUEmail{

    private:

        const static string VALOR_VALIDO;
        const static string VALOR_INVALIDO;

        Email *email;

        /*! \var int estado
            \brief Contém um valor inteiro que indica o sucesso ou falha do teste.
        */
        int estado;

        /*! \fn void setUp()
            \brief Função que prepara todo o necessário para o teste de unidade.

            Instancia a classe a ser testada e define um valor inicial para a variável estado.
        */
        void setUp();

        /*! \fn void tearDown()
            \brief Libera memória utilizada pelo teste de unidade.

            Ao final do teste de unidade libera memória referente a instâncias de classes.

        */
        void tearDown();

        /*! \fn void testarCenarioSucesso()
            \brief Realiza o teste de unidade com variáveis válidas.
        */
        void testarCenarioSucesso();

        /*! \fn void testarCenarioFalha()
            \brief Realiza o teste de unidade com variáveis inválidas.
        */
        void testarCenarioFalha();

    public:

        /*! \var const static int SUCESSO
            \brief Constante única da classe que indica sucesso do teste.
        */
        const static int SUCESSO;

        /*! \var const static int FALHA
            \brief Constante única da classe que indica falha do teste.
        */
        const static int FALHA;

        /*! \fn int run();
            \brief Método que inicia o teste de unidade e retorna um valor inteiro indicando sucesso ou falha.
        */
        int run();
};

/*! \class TUCusto
    \brief Classe que contém os testes de unidade do domínio: Custo.

    Contém os protótipos dos métodos utilizados no teste de unidade e os atributos necessários a este.

*/
class TUCusto{

    private:


        const static double VALOR_VALIDO;
        const static double VALOR_INVALIDO;

        Custo *custo;


        /*! \var int estado
            \brief Contém um valor inteiro que indica o sucesso ou falha do teste.
        */
        int estado;

        /*! \fn void setUp()
            \brief Função que prepara todo o necessário para o teste de unidade.

            Instancia a classe a ser testada e define um valor inicial para a variável estado.
        */
        void setUp();

        /*! \fn void tearDown()
            \brief Libera memória utilizada pelo teste de unidade.

            Ao final do teste de unidade libera memória referente a instâncias de classes.

        */
        void tearDown();

        /*! \fn void testarCenarioSucesso()
            \brief Realiza o teste de unidade com variáveis válidas.
        */
        void testarCenarioSucesso();

        /*! \fn void testarCenarioFalha()
            \brief Realiza o teste de unidade com variáveis inválidas.
        */
        void testarCenarioFalha();

    public:

        /*! \var const static int SUCESSO
            \brief Constante única da classe que indica sucesso do teste.
        */
        const static int SUCESSO;

        /*! \var const static int FALHA
            \brief Constante unica da classe que indica falha do teste.
        */
        const static int FALHA;

        /*! \fn int run();
            \brief Método que inicia o teste de unidade e retorna um valor inteiro indicando sucesso ou falha.
        */
        int run();
};



#endif // TESTEUNIDADE_H_INCLUDED
