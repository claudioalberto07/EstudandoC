//
// Created by SESI on 21/12/2021.
//

#ifndef ESTUDANDOC_COMPLEXO_H
#define ESTUDANDOC_COMPLEXO_H


class Complexo {

public:
    int real;
    int imag;
    Complexo(int real, int imag);
    Complexo operator+(Complexo &c){
        return Complexo(this->real + c.real, this->imag + c.imag);
    }
};


#endif //ESTUDANDOC_COMPLEXO_H
