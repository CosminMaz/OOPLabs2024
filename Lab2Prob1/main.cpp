#include <iostream>

#include "NumberList.h"

int main() {
	//Declarare
	NumberList L;
	//Initializare
	L.Init();
	//Adaugare elemente
	L.Add(5);
	L.Add(2);
	L.Add(9);
	L.Add(3);
	L.Add(12);
	L.Add(7);
	L.Add(4);
	L.Add(1);
	L.Add(0);
	L.Add(16);
	//Afisare array inainte de sortare
	L.Print();
	printf("\n");
	//Sortare array
	L.Sort();
	//Afisare array dupa sortare
	L.Print();
	return 0;
}