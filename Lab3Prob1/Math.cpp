#define _CRT_SECURE_NO_WARNINGS
#include "Math.h"
#include <stdio.h>
#include <cstdio>
#include <stdarg.h>
#include <cstring>
#include <cstdlib>

int Math::Add(int a, int b) {
	return a + b;
}

int Math::Add(int a, int b, int c) {
	return a + b + c;
}

int Math::Add(double a, double b) {
	return a + b;
}

int Math::Add(double a, double b, double c) {
	return a + b + c;
}

int Math::Mul(int a, int b) {
	return a * b;
}

int Math::Mul(int a, int b, int c) {
	return a * b * c;
}

int Math::Mul(double a, double b) {
	return a * b;
}

int Math::Mul(double a, double b, double c) {
	return a * b * c;
}

int Math::Add(int count, ...) {
	va_list list;
	va_start(list, count);
	int sum = 0;
	for (int i = 0; i < count; ++i) {
		sum += va_arg(list, int);
	}
	va_end(list);
	return sum;
}


char* Math::Add(const char* a, const char* b) {
	if (a == nullptr || b == nullptr)
		return nullptr;
	int la = strlen(a);
	int lb = strlen(b);
	int lt = la + lb + 1;
	char* result = (char*)malloc(lt);
	if (result == nullptr)
		return nullptr;
	strcpy(result, a);
	strcat(result, b);
	return result;
}

