//
// Created by SESI on 21/12/2021.
//

#ifndef ESTUDANDOC_PESSOA_H
#define ESTUDANDOC_PESSOA_H

class Pessoa {
private:
    char *nome;
    int id;
public:
    Pessoa(const char *newNome, int newId);
    Pessoa(Pessoa &pessoa);
    ~Pessoa();
    const char *getNome();
    void mudarNome(char letra);
    void inicializar(const char *newNome, int id);
    void destruir();

    Pessoa& operator=(Pessoa &pessoa){
        if(this != &pessoa){
            destruir();
            inicializar(pessoa.nome, pessoa.id);
        }
        return *this;
    }

};


#endif //ESTUDANDOC_PESSOA_H
