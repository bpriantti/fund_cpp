/*

Library I/O

A biblioteca de entrada / saída (biblioteca io) é parte da biblioteca padrão C++ que lida com entrada e saída básicas. 

Usaremos a funcionalidade desta biblioteca para obter entrada do teclado e dados de saída para o console. 

A parte io de iostream significa entrada / saída.

*/

// Para usar std::cout, std::cin e std::endl
#include <iostream> 
 
int main()
{
    // define a variável inteira x, inicializada com o valor 10
    int x(10); 

    // imprime o valor de x (10) para o console
    std::cout << "\nValor da Var x: " << x << std::endl; 

    // Solicita que o usuário digite um número
    std::cout << "\nDigite um Num: "; 

    // define a variável x para manter a entrada do usuário (e inicializa-a com zero)
    int y; 

    // obtém o número do teclado e armazena-o na variável x
    std::cin >> y; 

    // Mensagem de saída
    std::cout << "\nVoce digitou " << y << "\n\n";
}