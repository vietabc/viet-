#include<iostream>
#include<fstream>
using namespace std ;
int main () {
    fstream file ;
	int n ;
	 cout << " mhap so de tinh " << endl;
	 
	cin >> n ;
 file.open ("file55.txt" , ios::in | ios::app | ios::out   ) ;
 file << endl; 
  for( int j = 0  ;  j <=  n ; j++ ) {
		 file <<  j   << " * "<< n << " = " << j*n  <<  endl ;
		 file <<  j   << " % "<< n << " = " << j%n  <<  endl ;
		 file <<  j   << " + "<< n << " = " << j+n  <<  endl ;
		 file <<  j   << " - "<< n << " = " << j-n  <<  endl ;	
}
file.close() ;
return 0;
}
