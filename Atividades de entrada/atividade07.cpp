/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main(){
    
string numero,rua,cidade,bairro,estado;
cout << "Insira sua rua : ";
getline(cin, rua);
cout << "Insira o numero da sua casa: ";
cin >> numero;
cout << "Insira seu bairro : ";
cin >> bairro;
cout << "Insira sua cidade : ";
cin >> cidade;
cout << "Insira seu estado : ";
cin >> estado;
cout << "Seu endereço é :" <<rua << numero <<" "<< bairro<< " " << cidade" " << estado ; 




    return 0;
}