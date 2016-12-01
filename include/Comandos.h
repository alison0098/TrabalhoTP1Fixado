#ifndef COMANDOS_H_INCLUDED
#define COMANDOS_H_INCLUDED

//---------------------------------------------------------------------------------
// Classe com informação acerca de resultado de comando de acesso ao banco de dados.


//---------------------------------------------------------------------------------

/*! \file Comandos.h
    \brief Arquivo que contém as classes do módulo de lógica de negócio.

    O arquivo Comandos.h contém os protótipos de todas as classes que definem a lógica de negócio referentes ao banco de dados.
*/

// Classe base da hierarquia de comandos de acesso ao banco de dados.

/*! \class ComandoBancoDados
    \brief Classe que contém os principais métodos dos comandos do banco de dados.

    Contém os protótipos dos métodos utilizados nas outras classes que se comunicam com o banco de dados.

*/

class ComandoBancoDados {

public:

    // Método para execução do comando.

    virtual void executar() throw(runtime_error) = 0;

    virtual ~ComandoBancoDados(){}
};

//---------------------------------------------------------------------------------
// Comandos para acesso a gerente.


/*! \class ComandoIncluirGerenteProjeto
    \brief Classe responsável por: Incluir Gerente de projeto.

    Contém o protótipo do método responsável pelo comando do banco de dados de incluir um gerente de projeto.

*/


class ComandoIncluirGerenteProjeto:public ComandoBancoDados {

private:

    GerenteProjeto gerenteProjeto;

public:

    void executar() throw(runtime_error){}
};

/*! \class ComandoRemoverGerenteProjeto
    \brief Classe responsável por: Remover Gerente de projeto.

    Contém o protótipo do método responsável pelo comando do banco de dados de remover um gerente de projeto.

*/

class ComandoRemoverGerenteProjeto:public ComandoBancoDados {


private:

    Matricula matricula;

public:

    void executar() throw(runtime_error){}
};

/*! \class ComandoRecuperarGerenteProjeto
    \brief Classe responsável por: Recuperar Gerente de projeto.

    Contém o protótipo do método responsável pelo comando do banco de dados de recuperar um gerente de projeto.

*/

class ComandoRecuperarGerenteProjeto:public ComandoBancoDados {

private:

    Matricula matricula;

public:

    void executar() throw(runtime_error){}
};


/*! \class ComandoEditarGerenteProjeto
    \brief Classe responsável por: Editar Gerente de projeto.

    Contém o protótipo do método responsável pelo comando do banco de dados de editar um gerente de projeto.

*/

class ComandoEditarGerenteProjeto:public ComandoBancoDados {

private:

    GerenteProjeto gerenteProjeto;

public:

    void executar() throw(runtime_error){}
};

//---------------------------------------------------------------------------------
// Comandos para acesso a gerente de Sistema.

/*! \class ComandoIncluirGerenteSistema
    \brief Classe responsável por: Incluir Gerente de sistema.

    Contém o protótipo do método responsável pelo comando do banco de dados de incluir um gerente de sistema.

*/


class ComandoIncluirGerenteSistema:public ComandoBancoDados {

private:

    GerenteSistema gerenteSistema;

public:

    void executar() throw(runtime_error){}
};

/*! \class ComandoRemoverGerenteSistema
    \brief Classe responsável por: Remover Gerente de sistema.

    Contém o protótipo do método responsável pelo comando do banco de dados de remover um gerente de sistema.

*/
class ComandoRemoverGerenteSistema:public ComandoBancoDados {

private:

    Matricula matricula;

public:

    void executar() throw(runtime_error){}
};

/*! \class ComandoRecuperarSistema
    \brief Classe responsável por: Recuperar Gerente de Sistema.

    Contém o protótipo do método responsável pelo comando do banco de dados de recuperar um gerente de sistema.

*/


class ComandoRecuperarGerenteSistema:public ComandoBancoDados {


private:

    Matricula matricula;

public:

    void executar() throw(runtime_error){}
};

/*! \class ComandoEditarGerenteSistema
    \brief Classe responsável por: Editar Gerente de sistema.

    Contém o protótipo do método responsável pelo comando do banco de dados de editar um gerente de sistema.

*/

class ComandoEditarGerenteSistema:public ComandoBancoDados {

private:

    GerenteSistema gerenteSistema;

public:

    void executar() throw(runtime_error){}
};

//---------------------------------------------------------------------------------
// Comandos para acesso a gerente de projeto.

/*! \class ComandoIncluirProjeto
    \brief Classe responsável por: Incluir projeto.

    Contém o protótipo do método responsável pelo comando do banco de dados, exclusivo do Gerente de Projeto, de incluir um projeto.

*/

class ComandoIncluirProjeto:public ComandoBancoDados {


private:

    Projeto projeto;

public:

    void executar() throw(runtime_error){}
};

/*! \class ComandoRemoverProjeto
    \brief Classe responsável por: Remover projeto.

    Contém o protótipo do método responsável pelo comando do banco de dados, exclusivo do Gerente de Projeto, de remover um projeto.

*/

class ComandoRemoverProjeto:public ComandoBancoDados {


private:

    Projeto projeto;

public:

    void executar() throw(runtime_error){}
};

/*! \class ComandoRecuperarProjeto
    \brief Classe responsável por: Recuperar projeto.

    Contém o protótipo do método responsável pelo comando do banco de dados, exclusivo do Gerente de Projeto, de recuperar um projeto.

*/

class ComandoRecuperarProjeto:public ComandoBancoDados {


private:

   Projeto projeto;

public:

    void executar() throw(runtime_error){}
};

/*! \class ComandoEditarProjeto
    \brief Classe responsável por: Editar projeto.

    Contém o protótipo do método responsável pelo comando do banco de dados, exclusivo do Gerente de Projeto, de editar um projeto.

*/

class ComandoEditarProjeto:public ComandoBancoDados {

private:

    Projeto projeto;

public:

    void executar() throw(runtime_error){}
};

//---------------------------------------------------------------------------------
// Comandos para acesso a Gerente de Projeto.

/*! \class ComandoIncluirDesenvolvedor
    \brief Classe responsável por: Incluir desenvolvedor.

    Contém o protótipo do método responsável pelo comando do banco de dados, exclusivo do Gerente de Projeto, de incluir um desenvolvedor.

*/

class ComandoIncluirDesenvolvedor:public ComandoBancoDados {


private:

    Desenvolvedor desenvoledor;

public:

    void executar() throw(runtime_error){}
};

/*! \class ComandoRemoverDesenvolvedor
    \brief Classe responsável por: Remover desenvolvedor.

    Contém o protótipo do método responsável pelo comando do banco de dados, exclusivo do Gerente de Projeto, de remover um desenvolvedor.

*/

class ComandoRemoverDesenvolvedor:public ComandoBancoDados {


private:

    Desenvolvedor desenvoledor;

public:

    void executar() throw(runtime_error){}
};

/*! \class ComandoRecuperarDesenvolvedor
    \brief Classe responsável por: Recuperar desenvolvedor.

    Contém o protótipo do método responsável pelo comando do banco de dados, exclusivo do Gerente de Projeto, de recuperar um desenvolvedor.

*/

class ComandoRecuperarDesenvolvedor:public ComandoBancoDados {



private:

   Desenvolvedor desenvoledor;

public:

    void executar() throw(runtime_error){}
};

/*! \class ComandoEditarDesenvolvedor
    \brief Classe responsável por: Editar desenvolvedor.

    Contém o protótipo do método responsável pelo comando do banco de dados, exclusivo do Gerente de Projeto, de Editar um desenvolvedor.

*/

class ComandoEditarDesenvolvedor:public ComandoBancoDados {

private:

    Desenvolvedor desenvoledor;

public:

    void executar() throw(runtime_error){}
};


#endif // COMANDOS_H_INCLUDED
