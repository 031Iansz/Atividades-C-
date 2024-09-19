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
int n1;
cout << " Insira um número :";
cin >> n1;
if (( n1 % 3 ==0) || (n1 % 5 ==0)){
    cout << "O número é divisiel por 3 ou por 5 ";
}


    return 0;
}