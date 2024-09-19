/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
double nota1,peso1,nota2,peso2,nota3,peso3,soma;
 cout << "Insira as nostas e seus respectivos pesos: \n";
 cin >> nota1 >> peso1 >> nota2 >> peso2 >> nota3 >> peso3;
 nota1 =nota1 * peso1;
 nota2 = nota2 * peso2;
 nota3= nota3 * peso3;
 soma= (nota1 * nota2 *nota3) / peso1 /peso2 /peso3;
cout << "A media ponderada das notas é : " << soma;
 
    return 0;
}