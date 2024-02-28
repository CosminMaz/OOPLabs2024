#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

FILE* pFile;

void SumaFisier() {
	char a[100] = " ";
	int sum = 0;
	
	fgets(a, 100, pFile);
	
	printf("%s", a);
}
	

int main() {
	fopen_s(&pFile, "in.txt", "r");

	SumaFisier();
	fclose(pFile);
}