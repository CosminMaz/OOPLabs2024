#include "Canvas.h"

#include <stdio.h>
#include <cstdio>

Canvas::Canvas(int width, int height) : w(width), h(height) {
	this->matrix = new char* [w];
	for (int i = 0; i < w ; ++i)
		this->matrix[i] = new char[h];
}

void Canvas::DrawCircle(int x, int y, int ray, char ch) {
	for (int i = 0; i < w; i++) {
		for (int j = 0; j < h; j++) {
			if ((i - x) * (i - x) + (j - y) * (j - y) >= ray * (ray - 1) && (i - x) * (i - x) + (j - y) * (j - y) <= ray * (ray + 1))
				this->matrix[i][j] = ch;
			else
				this->matrix[i][j] = ' ';
		}
	}
}

void Canvas::FillCircle(int x, int y, int ray, char ch) {
	for (int i = 0; i < w; i++)
		for (int j = 0; j < h; j++)
			if ((i - x) * (i - x) + (j - y) * (j - y) <= ray * ray)
				this->matrix[i][j] = ch;
}

void Canvas::DrawRect(int left, int top, int right, int buttom, char ch) {
	for (int i = left; i <= right; i++) {
		this->matrix[buttom][i] = ch;
		this->matrix[top][i] = ch;
	}

	for (int i = top; i <= buttom; i++) {
		this->matrix[i][left] = ch;
		this->matrix[i][right] = ch;
	}
}

void Canvas::SetPoint(int x, int y, char ch) {
	this->matrix[x][y] = ch;
}

void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch) {
	int dx = x2 - x1;
	int dy = y2 - y1;
	int D = 2 * dy - dx;
	int y = y1;

	for (int x = x1; x <= x2; x++) {
		this->matrix[x][y] = ch;
		if (D > 0) {
			y++;
			D = D - 2 * dy;
		}
		D = D + 2 * dx;
	}
}

void Canvas::Print() {
	for (int i = 0; i < w; i++) {
		for (int j = 0; j < h; j++)
			printf("%c", this->matrix[i][j]);
		printf("\n");
	}
}

void Canvas::Clear() {
	for (int i = 0; i <= w; i++)
		for (int j = 0; j <= h; j++)
			this->matrix[i][j] = ' ';
}