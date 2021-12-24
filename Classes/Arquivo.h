/*
 Created by Cláudio on 22/12/2021.

 Classe criado com o objetivo de fazer a leitura de um arquivo usando
 a classe externa fstream.

 */
#include <iostream>
#include "fstream"
#include "string"
#ifndef ESTUDANDOC_ARQUIVO_H
#define ESTUDANDOC_ARQUIVO_H

using namespace std;



class Arquivo {
private:
    string texto;

public:
    Arquivo(string path){
        ifstream file(path);
        char c = file.get();
        texto.push_back(c);
        while(file.good()){
            c = file.get();
            this->texto.push_back(c);
        }
    }

    ofstream writeTxt(string path, string texto){
        ofstream file(path);
        file << texto;
        return file;
    }

    void readText(){
        cout << this->texto << endl;
    }


};


#endif //ESTUDANDOC_ARQUIVO_H
