/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
int n1;
cout << "Insira um ano : \n";
cin >> n1;
if ((n1 % 4==0 ) && ((n1 % 100 != 0 ) || (n1 % 400 == 0 && n1 % 100== 0))){
    cout << " O ano é bissexto ";
} else {
    cout << " O ano não é bissexto";
}

    return 0;
}