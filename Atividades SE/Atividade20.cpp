/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;
#include <string> 
int main()
{
int idade;
string nome;
 cout <<"Digite seu nome e sua idade\n ";
 cin >> nome >> idade;
 
 if (idade >= 18 && nome.length() > 3 ){
     cout << " Acesso permitido";
 }else {
     cout << " Acesso não permitido";
 }


    return 0;
}