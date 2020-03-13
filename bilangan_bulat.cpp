#include <iostream>

using namespace std;

int main() {
    int x,y=0,z;
    
    cout<<"Masukan bilangan bulat positif ";
    cin>>z;
    
    if(z<=0){
    	cout<<"Angka yang dimasukan tidak sesuai, ulangi lagi"; 
	} else {
	
	    cout<<"Bilangan bulatnya antara lain ";
	    
	    for (x=1; x<=z ;x++){
	    y = x*2;
	    if(y<=z){
			cout<< y <<" ";	        	  
			}
	    }
	}
    
}
