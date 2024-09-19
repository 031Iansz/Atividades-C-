/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{

string ensinosuperior,idade;
cout << " Você tem mais de 21 anos  ? \n";
cin >> idade;
cout << " Você tem ensino superior ? ";
cin >> ensinosuperior ;
if (idade.compare("sim")==0 && ensinosuperior.compare( "sim")==0){
cout << "Parabéns, você está qualificado para a vaga";
}else {
    cout << " Você ainda não está qualificado para a vaga  ";
}


    return 0;
}