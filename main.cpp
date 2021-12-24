#include <iostream>
#include "Classes/Complexo.h"
#include "Classes/Pessoa.h"
#include "Classes/Arquivo.h"

int main(int argc, char *argv[]) {
    /*
     * O objetivo das próximas linhas é entender a sobrecarga da operação de
     * adição feito dentro da classe Complexo. Onde a operação de adição foi modificada
     * para executar a adição entre parte real e parte imaginária
    */
    Complexo c1(2, 3), c2(2,3);
    Complexo c3 = c1 + c2;
    std::cout << c3.real << std::endl;

    /*
     * Abaixo foram instanciados dois objetos Pessoa, com o objetivo de percebermos que
     * quando uma operação de atribuição é feita, estamos criando uma cópia superficial d
     * do objeto. Dessa forma, P1 estará referenciando o endereço de memória do objeto P2.
     * Para resolver isso, devemos criar uma cópia profunda que será feito através da sobrecarfa
     * do operador = implementado na classe Pessoa.
    */
    Pessoa p1("Claudio", 10), p2("Amanda", 25);
    p1 = p2;
    p1.mudarNome('J');

    std::cout << p1.getNome() << std::endl;
    std::cout << p2.getNome() << std::endl;


    // Lendo arquivo txt
    Arquivo file(R"(C:\Users\SESI\CLionProjects\EstudandoC\Files\Leituras.txt)");
    file.readText();

    return 0;
}
