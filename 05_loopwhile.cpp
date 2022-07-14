/*

Loop While

A instrução while (também chamada de loop while) é o mais simples dos três tipos de loops fornecidos pelo C++ e tem uma definição 
muito semelhante à de uma instrução if:

while (condição)
    statement;

*/ 

#include <iostream>
 
int main()
{
    // Contador
    int cont;
    cont = 1;

    // Loop
    while (cont <= 10)
    {
        std::cout << cont << " ";
        ++cont;
    }
 
    std::cout << "\n Ok!\n";
 
    return 0;
}
