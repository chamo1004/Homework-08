#include <iostream>
using namespace std;

int main (){
	char str[50], *pt;
	int i = 0;
	
	cout << "Calculate the length of string " << endl;
	cout << "..............................." << endl;
	cout << "Insert any string (below 50 chars) : ";
	cin >> str;
	
	pt=str;
	while (*pt!='\0'){
		i++;
		pt++;
	}
	cout << "Length of the string : " << i;
	
	return 0;
}
