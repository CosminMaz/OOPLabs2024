#include "Sort.h"
#include <stdio.h>
#include <cstdio>
#include <stdarg.h>
#include <cstring>
#include <cstdlib>
#include <time.h>
#include <cmath>
#include <algorithm>

Sort::Sort(int len, int min, int max) : lenght(len) {
	this->vector = new int(len);
	srand(time(NULL));

	for (int i = 0; i < len; i++) {
		this->vector[i] = min + rand() % (max - min + 1);
	}
}

Sort::Sort(const char* row) {
	this->lenght = 0;
	while (row[this->lenght])
		if (row[this->lenght] == ',')
			this->lenght++;
	
	this->vector = new int(this->lenght);

	int number;
	int count = 0;
	int count1 = 0;
	int count2 = 0;

	while (row[count1]) {
		if (row[count1] == ',') {
			while (count1 != count2) {
				number = number * 10 + (row[count2] - '0');
				count2++;
			}
			this->vector[count++] = number;
			number = 0;
			count2 = count1 + 1;
		}
		count1++;
	}

	if (count2 != count1) {
		while (count2 != count1) {
			number = number * 10 + (row[count2] - '0');
			count2++;
		}
		this->vector[count++] = number;
	}
}

Sort::Sort(int* a, int len) : lenght(len) {
	this->vector = new int[len];

	for (int i = 0; i < lenght; i++)
		this->vector[i] = a[i];
}

Sort::Sort(int count, ...) {
	this->vector = new int[count];
	va_list list;
	va_start(list, count);
	for (int i = 0; i < count; i++)
		this->vector[i] = va_arg(list, int);
	va_end(list);
}

void Sort::InsertSort(bool ascendent) {
	int j, key;

	for (int i = 1; i < this->lenght; i++) {
		key = this->vector[i];
		j = i - 1;

		if (ascendent) {
			while (j >= 0 && this->vector[j] > key) {
				this->vector[j + 1] = this->vector[j];
				j--;
			}
		}
		else
		{
			while (j >= 0 && this->vector[j] < key) {
				this->vector[j + 1] = this->vector[j];
				j--;
			}
		}
		this->vector[j + 1] = key;
	}
}

int Sort::partition(int low, int high, bool asc) {
	int pivot = this->vector[high];
	int i = low - 1;

	for (int j = low; j <= high; j++) {
		if (asc) {
			if (this->vector[j] < pivot) {
				i++;
				std::swap(this->vector[i], this->vector[j]);
			}
		}
		else {
			if (this->vector[j] > pivot) {
				i++;
				std::swap(this->vector[i], this->vector[j]);
			}
		}
	}
	std::swap(this->vector[i + 1], this->vector[high]);
	return i + 1;
}


void Sort::QuickSort(int low, int high, bool ascendent) {
	if (low < high) {
		int pi = Sort::partition(low, high,  ascendent);
		QuickSort(low, pi - 1, ascendent);
		QuickSort(pi + 1, high, ascendent);
	}
}

void Sort::BubbleSort(bool ascendent) {
	int i, j;
	bool swapped;
	for (i = 0; i < this->lenght - 1; i++) {
		swapped = false;
		for (j = 0; j < this->lenght - 1; j++) {
			if(ascendent){
				if (this->vector[j] > this->vector[j + 1]) {
					std::swap(this->vector[j], this->vector[j + 1]);
					swapped = true;
				}
			}
			else {
				if (this->vector[j] < this->vector[j + 1]) {
					std::swap(this->vector[j], this->vector[j + 1]);
					swapped = true;
				}
			}

		}
		if (swapped == false)
			break;
	}
}


void Sort::Print() {
	for (int i = 0; i < this->lenght; i++)
		printf("%d ", this->vector[i]);
}

int Sort::GetElementsCount() {
	return this->lenght;
}

int Sort::GetElementFromIndex(int index) {
	return this->vector[index];
}