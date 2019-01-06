#include<iostream>
using namespace std ;
int main  () {
	string  name ;
	float   sum ,sumt , suml , sumh ;

 cout << " nhap ten  sinh vien "<<  endl;
 cin >>    name ;
     cout << " nhap diem taon " << endl;
     cin >> sumt ;
     cout << " nhap diem ly " << endl;
     cin >> suml ;
     cout << " nhap diem hoa " << endl;
     cin >> sumh  ;
     sum = (sumt  + suml + sumh )/3 ;
     
     cout << " diem trung binh "<< sum << endl; 
     
     if (  sum >= 8 )
     {
     	cout << " hoc sinh xuat sac  " ;
	 }
      else if ( 7 <= sum < 8  )
     {
     	cout << " hoc sinh gio " ;
	 } 
	  else if ( 6 <=  sum  < 7 )
	 {
	 	cout << " hoc sinh kha " ;
	 }
	 else if ( 5 <= sum < 6 ) 
	 {
	 	cout << " hoc sinh TB " ;
	 }
	 else  if  ( sum <  5 )
	 {
	 	cout << " hoc sinh yeu " ;
	 }
}












