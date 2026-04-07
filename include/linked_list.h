#ifndef LISTA_DUPLA_H
#define LISTA_DUPLA_H

#include <string>

using namespace std;

struct No {
    string nome;
    No* anterior;
    No* proximo;
};

class ListaDupla {
private:
    No* inicio;
    No* fim;
    int tamanho;

public:
    ListaDupla();

    void inserirInicio(string nome);
    void inserirFim(string nome);
    void inserirPosicao(string nome, int pos);

    void removerInicio();
    void removerFim();

    void buscar(string nome);

    void listar();
    void listarReverso();

    int contar();
};

#endif