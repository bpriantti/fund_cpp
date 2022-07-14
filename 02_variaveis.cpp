/* 

Variáveis:

Um programa pode adquirir dados para trabalhar de várias formas: de um arquivo ou banco de dados, através de uma rede, 
do usuário fornecendo entrada em um teclado ou do programador colocando dados diretamente no código-fonte do próprio programa. 

Em C++ acessamos a memória indiretamente por meio de um objeto. 

Um objeto nomeado é chamado de variável e o nome do objeto é chamado de identificador. Em nossos programas, a maioria dos objetos que 
criamos serão variáveis.

*/

#include <iostream>

using namespace std;

int main()
{
    // Declaramos a variável
    int y;

    // Inicializamos a variável
    y = 2;

    cout << "numero: "<<y << endl;

    return y;
}