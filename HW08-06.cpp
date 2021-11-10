#include <iostream>
using namespace std;

int main(){
	int number1, number2, number3;
	int *p1, *p2, *p3;
	
	cout << "Input number 01 : ";
	cin >> number1;
	
	cout << "Input number 02 : ";
	cin >> number2;
	
	cout << "Input number 03 : ";
	cin >> number3;
	
	p1 = &number1;
	p2 = &number2;
	p3 = &number3;
	
	if (*p1>=*p2 && *p1>=*p3)
	{
		cout << "Highest value is " <<  *p1 << endl;
	}
	if (*p2>=*p1 && *p2>=*p3)
	{
		cout << "Highest value is " <<  *p2 << endl;
	}
	if (*p3>=*p1 && *p3>=*p2)
	{
		cout << "Highest value is " <<  *p3 << endl;
	}
	
	if (*p1<=*p2 && *p1<=*p3)
	{
		cout << "Smallest value is " <<  *p1 << endl;
	}
	if (*p2<=*p1 && *p2<=*p3)
	{
		cout << "Smallest value is " <<  *p2 << endl;
	}
	if (*p3<=*p1 && *p3<=*p2)
	{
		cout << "Smallest value is " <<  *p3 << endl;
	}
	return 0;
}
