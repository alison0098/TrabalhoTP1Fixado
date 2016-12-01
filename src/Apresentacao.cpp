#include "Apresentacao.h"

void Opening::executar(){

    Matricula matricula;
    Senha senha;
    string entrada;

    cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
    cout << "!!                                            !!"<<endl;
    cout << "!! @@@@@@@@@@@@ @@@@@@@@@@@@@@@ @@@@@@@@@@@@@ !!"<<endl;
    cout << "!! @@@@@@@@@@@@ @@@@@@@@@@@@@@@ @@@@@@@@@@@@@ !!"<<endl;
    cout << "!! @@@@@        @@@@            @@@@     @@@@ !!"<<endl;
    cout << "!! @@@@@@@@@@@@ @@@@            @@@@     @@@@ !!"<<endl;
    cout << "!! @@@@@@@@@@@@ @@@@   @@@@@@@@ @@@@     @@@@ !!"<<endl;
    cout << "!!        @@@@@ @@@@   @@@@@@@@ @@@@@@@@@@@@@ !!"<<endl;
    cout << "!!        @@@@@ @@@@       @@@@ @@@@@@@@@@@@@ !!"<<endl;
    cout << "!! @@@@@  @@@@@ @@@@       @@@@ @@@@          !!"<<endl;
    cout << "!! @@@@@@@@@@@@ @@@@@@@@@@@@@@@ @@@@          !!"<<endl;
    cout << "!! @@@@@@@@@@@@ @@@@@@@@@@@@@@@ @@@@          !!"<<endl;
    cout << "!!                                            !!"<<endl;
    cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl <<endl;

    cout << "Bem vindo ao Sistema de Gerenciamento de Projetos. Informe seus dados abaixo para autenticacao." <<endl;

    while(true){
            try{
                cout << endl << "Digite sua matricula: ";
                cin >> entrada;
                matricula.setMatricula(entrada);
                cout << "Digite sua senha: ";
                cin >> entrada;
                senha.setSenha(entrada);
                break;
            }catch(const invalid_argument &exp){
                cout << endl << "Dado em formato incorreto." << endl ;
            }
    }

}

