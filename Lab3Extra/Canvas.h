#pragma once
class Canvas
{
private:
	char** canva;
	int width;
	int height;
public:
	Canvas(int lines, int columns);

	void set_pixels(int x, int y, char value);
	void set_pixels(int count, ...);
	
	void print() const;
	void clear();
};



