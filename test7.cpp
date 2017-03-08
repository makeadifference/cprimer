#include<iostream>
int main(){
using namespace std;
int line;
int a , b , m , n ;

cout <<"Enter the lines you want to print" << endl;
cin >> line;
n = 1;
int x = line;
int y = line - 2;
b = 1;

for(; line >0 ; line--,n++){
	// print first blank
	for(n=1;n <= line ;n++){
	cout << " ";
	}
cout <<"1" <<  endl;
	if(n == 1) {
	cout << "*" << endl;
	} else {
		if (n == x ){
		for(a = 0 ; a < x ; a++ ){
		cout << "*" << endl;
		}
		}  /*else {

	cout << "*";
	for(; y > 0; y--,b++){
	
		for(m = 0 ; m< b; m++){
		cout << " ";
		}
	cout << "*" << endl;
	
	}
	}
	*/
	}
}
return 0;
}

		




