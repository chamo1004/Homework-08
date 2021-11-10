#include <iostream>
using namespace std;

int main (){
	int userInput;
	cout << "Insert your input : ";
	cin >> userInput;
	
	int *ptr = &userInput;
	cout << "Value of the user input from pointer : " << *ptr << endl;
	
}
