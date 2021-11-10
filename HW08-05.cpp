#include <iostream>
using namespace std;

void typeint (int*numberptr){
		cout << *numberptr << endl;
	}
	int main (){
		int userInput;
		cout << "Insert your input : ";
		cin >> userInput;
		typeint(&userInput);		
	}
	

