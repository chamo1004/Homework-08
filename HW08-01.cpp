#include <iostream>
using namespace std;

int main (){
	int userInput;
	cout << &userInput << endl; // &userInput is the memory address of the userInput
	
	int *ptr;
	ptr = &userInput; // assign the memory address of userInput to Pointer
	cout << ptr << endl;
}
