#include<iostream>
int main(){
using namespace std;
int line;
cout << "enter the line you want to print" << endl;
cin >> line;

int n;
int i = 1;
int m;

for(;line>0 ;line--,i++){
	for(n=1 ; n <=line  ; n++){
	cout << " "; 
	}

	for(m=1;m<=i;m++){
	cout << "*";
	}
cout << endl;
}
return 0;
}
