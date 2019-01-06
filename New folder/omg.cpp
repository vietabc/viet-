#include <iostream>
using namespace std ;
int main () {
int a[20]  ;
cout << "  in ra"<< endl;
for ( int i=0 ; i <= 20 ; i ++)
{
	a[i] = i ;
 cout << a[i] << endl;
}
cout << " in ra mang hinh so chan" << endl; 
for ( int i=0 ; i <= 20 ; i ++)
{
	if ( a[i] %2==0) 
	{
		cout << " cac so chan " << a[i] << endl; 
	}
	else  cout << " so le" << a[i] << endl;
	}
	int sum ;
	cout << " tong cuar mang la" << endl;
	for ( int i=0 ; i <= 20 ; i ++)
	{
		sum = sum + a[i] ;
	}
 	
 	cout << sum  <<  endl; 
 	 int  teng=0 ;
 	 int tong =0;
 	 
for ( int i=0 ; i <= 20 ; i ++)
{
	if ( a[i] %2==0) 
	{
		tong = tong + a[i] ;
	
	}
	else  {
	 teng = teng + a[i]  ;
	 
	}
  
	}
	cout << " tong chan " << tong ;
	cout << " tong le"    << teng ;
   
    int max , min ;
   cout << " phan tu lon nhat "<< endl; 
  	 for ( int i=0 ; i <= 20 ; i ++)
 	 {
 	 	if ( max < a[i]  )
 	 	{
 	 		max = a[i] ;
		  }
	  }
	   cout << "  so lon nhat "<< max << endl;
  	 for ( int i=0 ; i <= 20 ; i ++)
 	 {
 	 	if ( min > a[i]  )
 	 	{
 	 		min = a[i] ;
		  }
		  
    }
     cout << " so nho nhat la" << min  <<  endl;
     
     int t;
	  cout << " them phan tu " <<  endl; 
	  for ( int i=0 ; i <= 20 ; i ++)
	  
	}
	 
	 
	 
	 
	  
}


