#include<iostream>
int main(){
using namespace std;
int line;
int n;
int m = 1;
int x;
cout << "Enter the line you wnat to print" << endl;
cin >> line;
int line2 = line -1;

for(; line >0 ; line--,m++){
	for(n = 1 ;n<= line; n++){
	cout << " ";
	}

	for(x=1 ; x <= 2*m -1 ; x++){
	cout << "*";
	}

cout << endl;
}

int a , b ;
int c =1 ;
for(;line2 >0 ; line2--,c++){
	for(b =0 ; b<= c  ;b++){
	cout << " ";
	}

	for(a =1 ;a<= 2*line2 -1 ; a++){
	cout << "*";
	}

cout << endl;
}

return 0 ; 
}

