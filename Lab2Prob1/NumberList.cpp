#include "NumberList.h"
#include <stdio.h>

void NumberList::Init() {
	this->count = 0;
	this->numbers[9] = { };
}

bool NumberList::Add(int x) {
	if (this->count >= 10)
		return false;
	this->numbers[this->count] = x;
	this->count++;
}

void NumberList::Sort() {
	for(int i = 0; i <= 9 ; ++i)
		for(int j = i + 1; j <= 9 ; ++j)
			if (this->numbers[i] > this->numbers[j]) {
				int aux = this->numbers[i];
				this->numbers[i] = numbers[j];
				numbers[j] = aux;
			}
}

void NumberList::Print() {
	for (int i = 0; i < 9; ++i)
		printf("%d ", this->numbers[i]);
}
