#include <iostream>
using namespace std;

int main(){
	int userInput, r, reverse=0;
	int *number;
	
	cout << "Insert a number : " ;
	cin >> userInput;
	
	number = &userInput;
	
	while (*number > 0){
		r = *number % 10;
		reverse = reverse *10 +r;
		*number = *number / 10;
	}
	cout << "Reverse number is " << reverse;
	return 0;
}
