#include <iostream>
#include "include/ListaDupla.h"

using namespace std;

int main() {
    ListaDupla lista;
    int opcao, pos;
    string nome;

    do {
        cout << "\n===== MENU =====\n";
        cout << "1 - Inserir no inicio\n";
        cout << "2 - Inserir no fim\n";
        cout << "3 - Inserir por posicao\n";
        cout << "4 - Remover inicio\n";
        cout << "5 - Remover fim\n";
        cout << "6 - Buscar parada\n";
        cout << "7 - Listar rota\n";
        cout << "8 - Listar reverso\n";
        cout << "9 - Contar paradas\n";
        cout << "0 - Sair\n";
        cout << "Escolha: ";
        cin >> opcao;

        cin.ignore();

        switch(opcao) {
            case 1:
                cout << "Nome: ";
                getline(cin, nome);
                lista.inserirInicio(nome);
                break;

            case 2:
                cout << "Nome: ";
                getline(cin, nome);
                lista.inserirFim(nome);
                break;

            case 3:
                cout << "Nome: ";
                getline(cin, nome);
                cout << "Posicao: ";
                cin >> pos;
                lista.inserirPosicao(nome, pos);
                break;

            case 4:
                lista.removerInicio();
                break;

            case 5:
                lista.removerFim();
                break;

            case 6:
                cout << "Buscar: ";
                getline(cin, nome);
                lista.buscar(nome);
                break;

            case 7:
                lista.listar();
                break;

            case 8:
                lista.listarReverso();
                break;

            case 9:
                cout << "Total: " << lista.contar() << endl;
                break;
        }

    } while(opcao != 0);

    return 0;
}