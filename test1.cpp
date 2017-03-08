#include <iostream>
using namespace std;
int main(){


int line ;
cout <<"Enter the line you want to print" << endl;

cin >> line ;

int i;
int n;
for(; line >=0;line--)
{
	for (n = 1  ; n <= 2*line -1 ; n++){
	cout << "*" ;
	}
cout << endl;
}
return 0;
}
