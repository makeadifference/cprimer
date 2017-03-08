#include<iostream>
int main(){
using namespace std;
int line;
int i;
int n = 0;
int m;
cout << "Enter the lines you want to print" <<endl;
cin >> line;
for(;line>0 ;line--,n++){

	for(m=0 ;m< n ;m++){
	cout << " ";
	}

	for(i=1 ; i<=2*line - 1; i++){
	cout << "*" ;
	}

cout << endl;
}
return 0;
}

