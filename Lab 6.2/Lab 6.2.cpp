#include <iostream>
#include <cmath>
#include <random>
#include <ctime>
#include <vector>
using namespace std;

void printArray(int* arr, int size);
void generateArray(int* arr, int size, int min, int max);
void swapArrayHalves(int* array, int size);
int main() {
	const int arrSize = 10;
	int a[arrSize];

	generateArray(a, arrSize, -10, 10);

	cout << "originalArray: "; 
	printArray(a, arrSize);

	swapArrayHalves(a, arrSize);
	cout << "cyclicall rotation: ";
	printArray(a, arrSize);
}

void generateArray(int* arr, int size, int min, int max) {
	for (int i =0; i < size; i++)
	{
		arr[i] = min + rand() % (max - min + 1);
	}
}

void printArray(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	return;
}

void swapArrayHalves(int* array, int size) {
	if (size % 2 != 0) {
		size--;
	}

	for (int i = 0; i < size / 2; i++) {
		int temp = array[i];
		array[i] = array[i + size / 2];
		array[i + size / 2] = temp;
	}
}