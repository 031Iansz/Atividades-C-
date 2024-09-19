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
string leite;
cout << " Você deseja adicionar açucar ou leite no café ?\n";
cin >> leite;
if ( leite.compare("sim")==0){
    cout <<" Café com adicional preparado ";
}


    return 0;
}