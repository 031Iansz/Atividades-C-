/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
int n1,n2,diferença;
cout << "Insira dois números : \n";
cin >> n1 >> n2 ;
diferença = n2 - n1 ;
if ( diferença <= 10 ){
    cout <<  " A diferença é menor ou igual a 10 ";
}else{
  cout <<  "A diferença não é maior ou igual a 10 ";
}




    return 0;
}