#include <iostream>
using namespace std;

int main(){
	int data[5];
	cout << "Insert elements : " << endl;
	
	for (int i = 0; i<5; ++i)
		cin >> data[i];
	
	int *ptr = data;
	
	cout << "You entered : ";
	for (int i = 0; i<5; ++i)
	cout << endl << *(ptr+1);
	
	return 0;
}
