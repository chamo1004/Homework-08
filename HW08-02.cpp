#include <iostream>
using namespace std;

int main (){
	int userInput;
	cout << "Insert your input : ";
	cin >> userInput;
	
	int *ptr = &userInput;
	int **newPtr = &ptr;
	
	cout <<  "Address of the pointer : " << newPtr << endl;
	
}
