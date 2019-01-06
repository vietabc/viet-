#include <iostream>
using namespace std ;
int main () {
 int a[5]  ;
   cout << " nhap vao nhang" << endl;
   for (int i = 0 ; i <= 5 ; i ++  )
    {
   cin >> a[i];
}
   cout << " xuat ra cac phan tu trong mang " << endl ;
   for ( int i = 0 ; i <= 5 ; i++ ) 
   {
   	cout << a[i] << endl; 
   }
   int n  ;
   cout << "nhap vi tri cac thay the " << endl;
   cin >> n ;
   for (int i = n ; i <= 4 ; i ++ ) 
   {
  a[i] = a[i] - 1   ;
   }
   cout << " xuat ra cac mang cac xao" << endl ;
     for (int i = n ; i <= 4 ; i ++ )   
     {
     	cout <<  "vi" << a[i] << endl; 
	 }
	 int x  ;
	 cout << " nhap  vi tri can chen " << endl; 
	 cin >> n ;
	 cout << " nhap  so thay " << endl;
	 cin >> x ;
	for (int i = n ; i <= 5 ; i ++) 
	{
		a[n] = x ;
	
    cout << " xuat ra sau khi chen " << endl;
    for (int i = 0 ; i <= 5  ; i ++)  
    
    	cout << a[i] << endl;
	}

	 cout << " nhap vitri de xua " << endl; 
	 cin  >> n ;
	 for(int i = 0  ; i <=  5 ; i ++) 
	  {
	  	if ( i == n )
	  	{
	  		int x ;
	  		cin >> x ;
	  	    a[n] = x ; 
		  }
		  cout << "sau khi sua " << endl;
		  for (int i = 0 ; i <= 5 ; i ++ )
		  {
		  	cout << a[i] << endl;
		  } 
	  }


	 
	  
	 
return 0;

}
