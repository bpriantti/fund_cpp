/*

Tipos de Dados:

Em C++, o tipo de uma variável deve ser conhecido em tempo de compilação (quando o programa é compilado) e esse tipo não 
pode ser alterado sem recompilar o programa. Isso significa que uma variável inteira pode conter apenas valores inteiros. 

Se você quiser armazenar algum outro tipo de valor, precisará usar uma variável diferente.

Inteiros são apenas um dos muitos tipos de dados que C++ oferece suporte pronto para uso. 

C++ também permite que você crie seus próprios tipos definidos pelo usuário.

*/

#include <iostream>
using namespace std;

int main()
{
    // Declaramos as variáveis
    int a;
    double b;
    int result_int;
    double result_double;

    // Inicializamos as variáveis
    a = 2;
    b = 3.1;

    // Operação
    result_int = a + b;
    result_double = a + b;

    // Imprime o resultado
    cout << "Resultado Int: " << result_int << endl;
    cout << "Resultado Double: " << result_double << endl;

}