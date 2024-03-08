#pragma once
#include <string>

class Movie
{
private:
	std::string name;
	int releaseYear;
	double IMDBscore;
	int lenghtMovieInMinutes;
public:
	void set_name(std::string n);
	std::string get_name();

	void set_score(double scr);
	double get_score();

	void set_year(int yr);
	int get_year();

	void set_length(int lnt);
	int get_length();

	int get_passed_years();

};

