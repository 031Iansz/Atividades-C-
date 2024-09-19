/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
double n1,soma,n2,soma1 ;
cout<<"Digite o valor do produto e seu desconto :\n ";
cin >> n1 >> n2 ;
n2 = n2 * 0.01;
soma= n1 * n2;
soma1 = n1 - soma ;
cout << "O  valor do produto com desconto é : " << soma1 ;

    return 0;
}