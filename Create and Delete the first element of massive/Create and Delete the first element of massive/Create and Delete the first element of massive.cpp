//Create and Delete the first element of massive

#include <iostream>
using namespace std;

int *fillingArray( const int size)
{
	int* arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 50;
	}
	return arr;
}

void showArray(int* const arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i]<<"\t";
	}
	cout << endl;
}

void popBack(int*& arr, int& size) // -1 last element of massive
{
	size--;
	int* newArray = new int[size];
	for (int i = 0; i < size; i++)
	{
		newArray[i] = arr[i];
	}
	delete[]arr;
	arr = newArray;
}

void pushBack(int *&arr,int &size,const int value) // +1 last element of massive. Him value it's 999
{
	int* newArray = new int[size+1];

	for (int i = 0; i < size; i++)
	{
		newArray[i] = arr[i];
	}
	newArray[size++] = value;
	delete[]arr;
	arr = newArray;
}

int main()
{
	int size = 10;
	int value = 999;
	fillingArray(size);
	int *pointerArray = fillingArray(size);
	showArray(pointerArray, size);
	pushBack(pointerArray, size, value);
	showArray(pointerArray, size);
	popBack(pointerArray, size);
	showArray(pointerArray, size);
}

