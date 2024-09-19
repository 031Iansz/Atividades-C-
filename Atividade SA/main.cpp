/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
double valor,horas,salario,descontos,inss,ir,fgts,salarioLiquido;
cout << " Insira o valor da sua hora  :\n";
cin >> valor ;
cout << " Insira quantas horas trabalhadas no mês :\n";
cin >> horas ;
salario = (valor * horas);
inss =  (salario * 0.10) ;
fgts = ( salario * 0.11);
if (salario<= 900){
    descontos = inss ;
    salarioLiquido = salario - descontos;
    cout  << " Salário Bruto : " << "(" <<  valor << "*" << horas << ")" << "           : R$" << salario  << "\n"  ;
    cout << "(-)INSS (10 %)" <<  "                 : R$ " << inss << "\n"; 
    cout << "FGTS (11 %)" <<  "                 : R$ " << fgts << "\n" ;
    cout << "Total de descontos             :R$ " << descontos << "\n" ;
    cout << "Salário Liquido               :R$ " <<salarioLiquido << "\n";
}else if  ( salario <= 1500){
    ir =(salario * 0.05) ;
     descontos = inss + ir ;
    salarioLiquido = salario - descontos;
    cout  << " Salário Bruto : " << "(" <<  valor << "*" << horas << ")" << "           : R$" << salario  << "\n"  ;
     cout << "(-)IR (5 %)" <<  "                 : R$ " << ir << "\n"; 
    cout << "(-)INSS (10 %)" <<  "                 : R$ " << inss << "\n"; 
    cout << "FGTS (11 %)" <<  "                 : R$ " << fgts << "\n" ;
    cout << "Total de descontos             :R$ " << descontos << "\n" ;
    cout << "Salário Liquido               :R$ " <<salarioLiquido << "\n";
}else if  ( salario <= 2500){
    ir =(salario * 0.10) ;
     descontos = inss + ir ;
    salarioLiquido = salario - descontos;
    cout  << " Salário Bruto : " << "(" <<  valor << "*" << horas << ")" << "           : R$" << salario  << "\n"  ;
     cout << "(-)IR (10 %)" <<  "                 : R$ " << ir << "\n"; 
    cout << "(-)INSS (10 %)" <<  "                 : R$ " << inss << "\n"; 
    cout << "FGTS (11 %)" <<  "                 : R$ " << fgts << "\n" ;
    cout << "Total de descontos             :R$ " << descontos << "\n" ;
    cout << "Salário Liquido               :R$ " <<salarioLiquido << "\n";
  return 0;
}else if  ( salario >= 2500){
    ir =(salario * 0.20) ;
     descontos = inss + ir ;
    salarioLiquido = salario - descontos;
    cout  << " Salário Bruto : " << "(" <<  valor << "*" << horas << ")" << "           : R$" << salario  << "\n"  ;
     cout << "(-)IR (20 %)" <<  "                 : R$ " << ir << "\n"; 
    cout << "(-)INSS (10 %)" <<  "                 : R$ " << inss << "\n"; 
    cout << "FGTS (11 %)" <<  "                 : R$ " << fgts << "\n" ;
    cout << "Total de descontos             :R$ " << descontos << "\n" ;
    cout << "Salário Liquido               :R$ " <<salarioLiquido << "\n";
  return 0;
}
}