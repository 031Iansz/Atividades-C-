/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
string carro,dinheiro ;
cout << " Você  quer comprar um carro novo ? \n";
cin >> carro;
cout << " Você tem dinheiro o suficente ? \n";
cin >> dinheiro ;
if (carro.compare( " sim ") && dinheiro.compare( "sim")==0){
cout << " Você pode comprar um carro "; }
else {
    cout << "Voce ainda não pode ou não quer comprar um carro. ";
}


    return 0;
}