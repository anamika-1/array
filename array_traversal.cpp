#include<iostream>
using namespace std;

void scan_ele(int n, int array[]){
	for (int i = 1; i <= n; i++) {
		cin >> array[i];
	}
}

void display_ele(int n, int array[]) {
	cout << "Elements of array are: ";
	for (int i = 1; i <= n; i++) {
		cout << array[i] << " ";
	}
}


int main() {
	int n, array[10000];
	cout << " Enter number of elements in array: ";
	cin >> n;
     
	 scan_ele(n, array);
	 display_ele(n, array);

	return 0;
}
