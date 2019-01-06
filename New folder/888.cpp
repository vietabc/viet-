#include<iostream>
#include<fstream>

using namespace std;

int main()
{

     // Khai bao bien
     int x, n, fact = 1;
     fstream file ;
file.open ("888.txt" , ios::out | ios::in | ios::app);

     // Nhap gia tri dau vao
    file<<"nhap n:";
     cin>>n;

     //Vong lap for
     for (int x = 1; x <= n; x++)
     {
         fact = fact * x;
     }

     file<<fact << endl ;
     file.close() ;
     return 0;
 }

