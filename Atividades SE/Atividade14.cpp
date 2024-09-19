/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
string mes;
cout << " Insira o mes escolhido :\n ";
cout << " Janeiro,fevereiro, março, abril, maio, junho, julho, agosto, setembro,\n outubro, novembro e dezembro.\n";
cin>> mes ;
if (mes.compare("Janeiro")==0){
    cout << " 31 dias ";
}else if(mes.compare("fevereiro")==0){
    cout << "29 dias ";
}else if (mes.compare ( "março")==0){
    cout << " 31 dias ";
}else if(mes.compare ("abril")==0){
    cout <<" 31 dias ";
}else if (mes.compare (" maio ")==0){
  cout <<"31 dias ";
}else if (mes.compare("junho")==0){
    cout << " 30 dias ";
}else if(mes.compare ( "julho")==0){
    cout << "31 dias ";
}else if( mes.compare( "agosto")==0){
    cout <<"31 dias";

}else if(mes.compare ("setembro")==0){
    cout <<" 30 dias";
}else if(mes.compare ( " outubro")==0){
    cout << "31 dias";
}else if( mes.compare ("novembro")==0){
    cout << " 30 dias ";
}else if (mes.compare( "dezembro")==0){
    cout << "31 dias";
}
return 0;
}

    