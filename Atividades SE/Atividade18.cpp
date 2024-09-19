/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{

string assinante,naruto;
cout << " Você é assinante de um serviço de streming   ? \n";
cin >> assinante;
cout << " Você ja ssistiu naruto  ? ";
cin >> naruto;
if (assinante.compare("sim")==0 && naruto.compare( "sim")==0){
cout << "Parabéns, você ja pode ver a nova temporada";
}else {
    cout << " Você ainda não pode ver a nova temporada ";
}


    return 0;
}