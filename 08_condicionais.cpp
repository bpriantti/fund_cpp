/*

Estruturas Condicionais

Uma instrução condicional é uma instrução que especifica se alguma instrução associada deve ser executada ou não.

Sintaxe:

if (condition)
    true_statement;

Ou:

if (condition)
    true_statement;
else
    false_statement;

*/

#include <iostream>
using namespace std;

int main()
{
    cout << "Digite um numero: ";
    int x;
    cin >> x;
 
    if (x > 10)
        cout << x << "valor maior que 10\n";
    else
        cout << x << "valor n 6maior que 10\n";

}
