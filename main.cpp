#include <iostream>
#include "Complexo.h"

int main() {
    Complexo c1(2, 3), c2(2,3);
    Complexo c3 = c1 + c2;

    std::cout << c3.real << std::endl;
    return 0;
}
