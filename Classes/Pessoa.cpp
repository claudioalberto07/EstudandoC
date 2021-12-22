//
// Created by SESI on 21/12/2021.
//

#include "Pessoa.h"
#include "string.h"

Pessoa::Pessoa(const char *newNome, int id) {
    inicializar(newNome, id);
}
Pessoa::Pessoa(Pessoa &pessoa) {
    inicializar(pessoa.nome, pessoa.id);
}
void Pessoa::inicializar(const char *newNome, int newId) {
    int tam = strlen(newNome) + 1;
    nome = new char[tam];
    strcpy(this->nome, newNome);
    this->id = newId;
}

void Pessoa::destruir(){
    delete[] nome;
    nome = nullptr;
}


Pessoa::~Pessoa(){
    delete [] nome;
    nome = nullptr;
}

const char *Pessoa::getNome(){
    return nome;
}
void Pessoa::mudarNome(char letra) {
    this->nome[0] = letra;
}