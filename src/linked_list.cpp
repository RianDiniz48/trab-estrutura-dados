#include <iostream>
#include "../include/ListaDupla.h"

using namespace std;

ListaDupla::ListaDupla() {
    inicio = nullptr;
    fim = nullptr;
    tamanho = 0;
}

void ListaDupla::inserirInicio(string nome) {
    No* novo = new No{nome, nullptr, inicio};

    if (inicio != nullptr)
        inicio->anterior = novo;
    else
        fim = novo;

    inicio = novo;
    tamanho++;
}

void ListaDupla::inserirFim(string nome) {
    No* novo = new No{nome, fim, nullptr};

    if (fim != nullptr)
        fim->proximo = novo;
    else
        inicio = novo;

    fim = novo;
    tamanho++;
}

void ListaDupla::inserirPosicao(string nome, int pos) {
    if (pos <= 0) {
        inserirInicio(nome);
        return;
    }

    if (pos >= tamanho) {
        inserirFim(nome);
        return;
    }

    No* atual = inicio;

    for (int i = 0; i < pos; i++)
        atual = atual->proximo;

    No* novo = new No{nome, atual->anterior, atual};

    atual->anterior->proximo = novo;
    atual->anterior = novo;

    tamanho++;
}

void ListaDupla::removerInicio() {
    if (inicio == nullptr) return;

    No* temp = inicio;
    inicio = inicio->proximo;

    if (inicio != nullptr)
        inicio->anterior = nullptr;
    else
        fim = nullptr;

    delete temp;
    tamanho--;
}

void ListaDupla::removerFim() {
    if (fim == nullptr) return;

    No* temp = fim;
    fim = fim->anterior;

    if (fim != nullptr)
        fim->proximo = nullptr;
    else
        inicio = nullptr;

    delete temp;
    tamanho--;
}

void ListaDupla::buscar(string nome) {
    No* atual = inicio;
    int pos = 0;
    bool encontrou = false;

    while (atual != nullptr) {
        if (atual->nome.find(nome) != string::npos) {
            cout << "Encontrado: " << atual->nome 
                 << " na posição " << pos << endl;
            encontrou = true;
        }
        atual = atual->proximo;
        pos++;
    }

    if (!encontrou)
        cout << "Nenhuma parada encontrada." << endl;
}

void ListaDupla::listar() {
    No* atual = inicio;

    while (atual != nullptr) {
        cout << atual->nome << " -> ";
        atual = atual->proximo;
    }
    cout << "NULL" << endl;
}

void ListaDupla::listarReverso() {
    No* atual = fim;

    while (atual != nullptr) {
        cout << atual->nome << " -> ";
        atual = atual->anterior;
    }
    cout << "NULL" << endl;
}

int ListaDupla::contar() {
    return tamanho;
}