#include<iostream>
#include<fstream>
using namespace std ;
int main() {
//	int a,b;
//    fstream file;
//	file.open ("file.txt", iostream::in) ;
//	file << "  123 hello " ;
//	file >> a >> b ;
//	cout << a + b << endl ;
//	file.close() ;
//	return 0;
//	
int a,b;
fstream file;
file.open("111.txt", ios::out | ios::app | ios::in);
cin >> a ;
cin >> b ;
file <<  a ;
file << " " ;
file <<  b ;
file <<  " a + b = " <<  a + b << endl ;
file << " a * b = "<< a * b << endl ;
file << " a % b = "<< a % b << endl ;
file << " a - b = "<< a - b << endl ;

file .close();
return 0 ;
}
 
