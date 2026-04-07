#include <iostream>
#include "../include/ListaDupla.h"

using namespace std;

int main() {
    ListaDupla lista;

    cout << "===== TESTES DA LISTA DUPLA =====\n\n";

    cout << "Inserindo no início...\n";
    lista.inserirInicio("Terminal");
    lista.inserirInicio("Garagem");

    cout << "Inserindo no fim...\n";
    lista.inserirFim("Centro");
    lista.inserirFim("Hospital");

    cout << "\nLista atual:\n";
    lista.listar();

    cout << "\nInserindo na posição 2...\n";
    lista.inserirPosicao("Mercado", 2);

    cout << "Lista após inserção:\n";
    lista.listar();


    cout << "\nBuscando 'Centro'...\n";
    lista.buscar("Centro");

    cout << "\nBuscando 'tal' (parcial)...\n";
    lista.buscar("tal");

    cout << "\nLista reversa:\n";
    lista.listarReverso();

    cout << "\nTotal de paradas: " << lista.contar() << endl;

    cout << "\nRemovendo início...\n";
    lista.removerInicio();
    lista.listar();

    cout << "\nRemovendo fim...\n";
    lista.removerFim();
    lista.listar();

    cout << "\nTeste finalizado!\n";

    return 0;
}
