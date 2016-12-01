#ifndef COMANDOS_H_INCLUDED
#define COMANDOS_H_INCLUDED

//---------------------------------------------------------------------------------
// Classe com informação acerca de resultado de comando de acesso ao banco de dados.



/*! \file Lnegocio.h
    \brief Arquivo que contém as classes do módulo de lógica de negócio.

    O arquivo Lnegocio.h contém os protótipos de todas as classes que definem a lógica de negócio referentes ao banco de dados.
*/


//---------------------------------------------------------------------------------
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

/*! \class ComandoIncluirGerente
    \brief Classe responsável por: Incluir Gerente de projeto.

    Contém o protótipo do método responsável pelo comando do banco de dados de incluir novo gerente de projeto.

*/

class ComandoIncluirGerente:public ComandoBancoDados {

/*! \class ComandoRemoverGerente
    \brief Classe responsável por: Remover Gerente de projeto.

    Contém o protótipo do método responsável pelo comando do banco de dados de remover novo gerente de projeto.

*/

private:

    GerenteProjeto gerenteProjeto;

public:

    void executar() throw(runtime_error){}
};

class ComandoRemoverGerente:public ComandoBancoDados {

/*! \class ComandoRecuperarGerente
    \brief Classe responsável por: Recuperar Gerente de projeto.

    Contém o protótipo do método responsável pelo comando do banco de dados de recuperar novo gerente de projeto.

*/

private:

    Matricula matricula;

public:

    void executar() throw(runtime_error){}
};

class ComandoRecuperarGerente:public ComandoBancoDados {

/*! \class ComandoEditarGerente
    \brief Classe responsável por: Editar Gerente de projeto.

    Contém o protótipo do método responsável pelo comando do banco de dados de recuperar novo gerente de projeto.

*/

private:

    Matricula matricula;

public:

    void executar() throw(runtime_error){}
};

class ComandoEditarGerente:public ComandoBancoDados {

private:

    GerenteProjeto gerenteProjeto;

public:

    void executar() throw(runtime_error){}
};



#endif // COMANDOS_H_INCLUDED
