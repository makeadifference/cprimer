#include<iostream>
int main(){
using namespace std;
int line;
int n;
int m = 1;
int x;
cout << "Enter the line you wnat to print" << endl;
cin >> line;
for(; line >0 ; line--,m++){
	for(n = 1 ;n<= line; n++){
	cout << " ";
	}

	for(x=1 ; x <= 2*m -1 ; x++){
	cout << "*";
	}

cout << endl;
}
return 0 ; 
}

