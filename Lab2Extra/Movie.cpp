#include "Movie.h"
#include <iostream>

void Movie::set_name(std::string n) {
	this->name = n;
}

std::string Movie::get_name() {
	return this->name;
}

void Movie::set_score(double scr) {
	if (scr >= 1 && scr <= 10)
		this->IMDBscore = scr;
	else
		return;
}

double Movie::get_score() {
	return this->IMDBscore;
}

void Movie::set_year(int yr) {
	this->releaseYear = yr;
}

int Movie::get_year() {
	return this->releaseYear;
}

void Movie::set_length(int lnt) {
	this->lenghtMovieInMinutes = lnt;
}

int Movie::get_length() {
	return this->lenghtMovieInMinutes;
}

int Movie::get_passed_years() {
	return 2024 - this->releaseYear;
}