#include<iostream>
using namespace std;
int main () {
	int a[10] ;
	 cout <<  " nhap so cao nang " << endl ;
	  for ( int i = 0 ; i < 10 ; i ++ ) 
    {
	cin >> a[i] ;
    }
    
    cout << " mang nguoc lai " << endl;
    for ( int i = 10 ; i > 0 ; i --) 
    {
    	cout << a[i]  << endl; 
	}
	int sum , sim ;
    cout << " so chan so le " ;
    for ( int  i = 0 ; i < 10 ; i ++) 
    {
    	if ( i % 2==0 ) 
    	{
    		cout << " so chan" << i  << endl ;	
    		sum = sum + a[i] ;
    		
 		}
		else 
		{
			cout << " so le "<< i << endl; 
			sim = sim + a[i] ;
		
		}
	
	}
	 cout << " tong so chan " << sum << endl;
	 cout << " tong so le  "  << sim << endl; 
	 
	return 0 ;
}
