/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
int n1,n2;
double soma;
cout <<" Insira o raio e a altura do cilindro  : ";
cin >> n1 >>n2;
n1 = n1 * n1 ;
soma = n1 * 3.14 * n2;
cout << "A aréa do cilindro é : " <<soma ; 
    return 0;
}