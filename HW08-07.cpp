#include <iostream>
using namespace std;

void factorial(int, int *);

int main (){
	int i, fact, number;
	cout << "Insert a number : ";
	cin >> number;
	
	factorial(number, &fact);
	cout << "Factorial of " << number << " is " << fact;

	return 0;
}
void factorial(int number, int *fact){
	int i;
	*fact = 1;
	for (i = 1; i <= number; i++){
		*fact = *fact*i;
	}
}
