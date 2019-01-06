#include<iostream>
#include<fstream>
using namespace std ;
int main () {
//	int n , j , sum = 0 ;
//cin >> n ;
//for(int j=2 ; j <= n ;  j+=2)   {
//	
//	 sum = sum + j  ;
//}
//cout << sum;
//	 
fstream file ;
 file.open ("file55.txt" , ios::out | ios::in | ios::app ) ;
 int i ,n ;
 cin >> n ;
 file >> n ;
 
for(int i = 1; i <= 10; i++) {
	file  << n << " * " << i << " = " << n * i << endl;
	}
	file.close () ;
return 0;
}
