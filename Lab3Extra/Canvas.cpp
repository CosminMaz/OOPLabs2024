#include "Canvas.h"
#include <stdio.h>
#include <cstdio>
#include <stdarg.h>
#include <cstring>
#include <cstdlib>


Canvas::Canvas(int lines, int columns): width(columns), height(lines) {
	this->canva = new char* [lines];
	for (int i = 0; i < lines; i++)
		this->canva[i] = new char[columns];
}

void Canvas::set_pixels(int x, int y, char value) {
	this->canva[x][y] = value;
}

void Canvas::set_pixels(int count, ...) {
	va_list list;
	va_start(list, count);
	int x;
	int y;
	char value;
	for (int i = 0; i < count; i++) {
		x = va_arg(list, int);
		y = va_arg(list, int);
		value = va_arg(list, char);
		this->canva[x][y] = value;
	}		
}

void Canvas::print() const {
	for (int i = 0; i < this->width; i++) {
		for (int j = 0; j < this->height; j++)
			printf("%c ", this->canva[i][j]);
		printf("\n");
	}
}

void Canvas::clear() {
	for (int i = 0; i < this->width; i++)
		delete[] canva[i];
	delete[] canva;
}