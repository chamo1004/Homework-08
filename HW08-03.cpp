#include <iostream>
using namespace std;

int main (void){
	int userInput;
	cout << "Insert your input : ";
	cin >> userInput;
	
	int *ptr;
	ptr = &userInput;
	cout << "Value of the address of pointer : " << &userInput;
}
