#include <stdio.h>
#include <conio.h>
#include <iostream>
   
using namespace std;
 
int main ()
{
    //Deklarasi Variable
    int Suhu,NilaiX  ;
   
    //Input Tampilan
    cout<<" Masukkan Suhu : " ; cin>>Suhu ;
    cout<<" Masukkan NilaiX : " ; cin>>NilaiX ;
    cout<<endl ;
   
    //Perhitungan Variable
    if (( Suhu > NilaiX ))  cout<<"Suhu yang anda masukkan panas" ;
   
    if (( Suhu <= NilaiX )) cout<<"Suhu yang anda masukkan dingin" ;
   
    return 0 ;
 
}
