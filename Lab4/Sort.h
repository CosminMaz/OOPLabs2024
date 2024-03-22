#pragma once
#include <initializer_list>

class Sort
{
private:
	int* vector;
	int lenght;
public:
	Sort(int len, int min, int max);
	//Sort(std::initializer_list<int> initList);
	Sort(int a[], int len);
	Sort(int count, ...);
	Sort(int len) : vector(new int[len]) {};
	Sort(const char* row);
	void InsertSort(bool ascendent = false);
	void QuickSort(int low ,int high, bool ascendent = false);
	int partition(int low, int high, bool asc);
	void BubbleSort(bool ascedent = false);
	void Print();
	int GetElementsCount();
	int GetElementFromIndex(int index);
};

