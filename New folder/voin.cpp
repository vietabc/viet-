#include<iostream>
#include<stdio.h>
using namespace  std ;
void lap();
int Tong(int a, int b) ;
int Tich(int a, int b) ;
int Hieu(int a , int b) ;

mian() {
	int soA , soB , tong , tich , hieu ;
	cin >> soA ;
	cin >> soB ;
	tong =  Tong( soA , soB) ;
	tich =  Tich( soA , soB) ;
	hieu =  Hieu( soA , soB) ;
	cout << tong << endl;
		cout << tich << endl;
		    	cout << hieu << endl;
		    void Lap () ;
		    {
		    }
   int Tong(int a, int b) ;
{
   return a + b;
}

   int Tich(int a, int b) ;		    	
{
	return a * b ; 
}

  int  Hieu(int a , int b) ;
  {
  	return  a - b ;
  }
  
  void Lap(){
	while(true)
	{
		int a, b, kq;
		cin >> a >> b;
		kq = Tong(a, b);
		cout << kq;
		if(kq > 100)
			break;		
	}
}
}


