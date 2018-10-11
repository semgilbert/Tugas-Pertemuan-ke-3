#include <stdio.h>
#include <conio.h>
#include <iostream>
   
using namespace std;
 
int main ()
{
    //Deklarasi Variable
    int Bilangan ;
   
    //Input Tampilan
    cout<<" Masukkan Bilangan  : "; cin>>Bilangan ;
    cout<<endl;
   
    string message ;
    message = Bilangan % 2 == 0? "Bilangan Anda Genap" : "Bilangan Anda Ganjil " ;
    cout<<message ;
   
    return 0 ;
   
}
