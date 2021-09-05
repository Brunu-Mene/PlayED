#include "../include/tListaUsuario.h"
#include "../include/tListaPlayList.h"

//Aluno;
//Bruno Menegaz Acerbi 2020101066;
//Matheus Adami Bernardes Moreira 2020100975;

//Arquivos de entrada/saída são resgatados/gerados no diretório data;

int main()
{
    tListaUsu *sentUsu = iniciaSentinelaUsuario();
    criaListaUsuarios(sentUsu);
    criaListaPlayList(sentUsu);
    refatorandoListaUsuarios(sentUsu);
    geraSaida(sentUsu);
    liberaListaUsuario(sentUsu);
    return 0;
}