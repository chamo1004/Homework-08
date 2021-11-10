#include <iostream>
using namespace std;

void sort(int n, int *ptr)
{
	int i, j, k;
	for (int i=0; i<n; i++){
		for (j=i; j<n; j++){
			if(*(ptr+j) < * (ptr+i)){
				k=*(ptr+i);
				*(ptr+i)=*(ptr+j);
				*(ptr+j)=k;
			}
		}
	}
	cout << "After sorting the array : ";
	for (int i=0; i<n; i++)
		cout << *(ptr+i)<< " ";
}

int main (){
	int n, i, e;
	int arr[n];
	cout << "Insert the elements of the array : ";
	cin >> n;
	
	int *ptr=arr;
	cout << "Insert the elements : " << endl;
	for (i=0;i<n;i++){
	cin >> e;
	arr[i]=e;
	}
	cout << "Before sorting the array : ";
	for (i=0; i<n; i++){
		cout << arr[i] << " ";
	}
	cout << endl << endl;
	sort(n,arr);
	
	return 0;
}
