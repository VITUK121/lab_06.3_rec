#include <iostream>
using namespace std;

template <typename T>
T* make_arr1(T, int size) {
	return new T[size];
}

template <typename T>
void fill_arr1(T* arr, int size, T a, T b, int index) {
	if (index != size){
		arr[index] = a + rand() % (b - a + 1);
		fill_arr1(arr, size, a, b, index + 1);
	}
}

template <typename T>
void print_arr1(T* arr, int size, int index) {
	if (index != size) {
		cout << arr[index] << " ";
		print_arr1(arr, size, index + 1);
	}
	else {
		cout << endl;
	}
}

template <typename T>
T sum1(T* arr, int size, int index) {
	if (index != size) {
		return arr[index] + sum1(arr, size, index + 1);
	}
	return 0;
}


int* make_arr2(int size) {
	return new int[size];
}

void fill_arr2(int* arr, int size, int index) {
	if (index != size) {
		arr[index] = -10 + rand() % (10 + 10 + 1);
		fill_arr2(arr, size, index + 1);
	}
}

void print_arr2(int* arr, int size, int index) {
	if (index != size) {
		cout << arr[index] << " ";
		print_arr2(arr, size, index + 1);
	}
	else {
		cout << endl;
	}
}

int sum2(int* arr, int size, int index) {
	if (index != size) {
		return arr[index] + sum2(arr, size, index + 1);
	}
	return 0;
}

int main()
{
	srand(time(NULL));
	int n = 10;

	int* a = make_arr1(int(), n);
	fill_arr1(a, n, -10, 10, 0);
	print_arr1(a, n, 0);
	cout << "sum1 = " << sum1(a, n, 0) << "\n\n\n";

	delete[] a;

	a = make_arr2(n);
	fill_arr2(a, n, 0);
	print_arr2(a, n, 0);
	cout << "sum2 = " << sum2(a, n, 0) << endl;
}
