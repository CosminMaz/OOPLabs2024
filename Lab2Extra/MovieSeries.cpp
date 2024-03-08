#include "MovieSeries.h"
#include <string>

void MovieSeries::init() {
	this->count = 0;
}


void MovieSeries::add(Movie* movie) {
	if (this->count < 16) {
		this->movies[this->count] = movie;
		count++;
	}
	else
		printf("Maximum number of movies added");
}

void MovieSeries::sort() {
	for(int i = 0 ; i < count - 1 ; i++)
		for (int j = i + 1; j < count; j++) {
			if (this->movies[i]->get_passed_years() < this->movies[j]->get_passed_years()) {
				Movie* aux = this->movies[i];
				this->movies[i] = this->movies[j];
				this->movies[j] = aux;
			}
		}
}

void MovieSeries::print() {
	for (int i = 0; i < this->count; i++) 
		printf("Name: %s | IMDB Score: %f | Release Year: %d | Passed Years: %d | Lenght In Minutes: %d \n", this->movies[i]->get_name().c_str(), this->movies[i]->get_score(), this->movies[i]->get_year(), this->movies[i]->get_passed_years(), this->movies[i]->get_length());
}
