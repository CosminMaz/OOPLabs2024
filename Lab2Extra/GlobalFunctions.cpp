#include "GlobalFunctions.h"


int movie_compare_name(Movie firstMovie, Movie secondMovie) {
	if (firstMovie.get_name() > secondMovie.get_name())
		return 1;
	else if (firstMovie.get_name() < secondMovie.get_name())
		return -1;
	return 0;
}

int movie_compare_year(Movie firstMovie, Movie secondMovie) {
	if (firstMovie.get_year() > secondMovie.get_year())
		return 1;
	else if (firstMovie.get_year() < secondMovie.get_year())
		return -1;
	return 0;
}

int movie_compare_score(Movie firstMovie, Movie secondMovie) {
	if (firstMovie.get_score() > secondMovie.get_score())
		return 1;
	else if (firstMovie.get_score() < secondMovie.get_score())
		return -1;
	return 0;
}

int movie_compare_length(Movie firstMovie, Movie secondMovie) {
	if (firstMovie.get_length() > secondMovie.get_length())
		return 1;
	else if (firstMovie.get_length() < secondMovie.get_length())
		return -1;
	return 0;
}

int movie_compare_passed_years(Movie firstMovie, Movie secondMovie) {
	if (firstMovie.get_passed_years() > secondMovie.get_passed_years())
		return 1;
	else if (firstMovie.get_passed_years() < secondMovie.get_passed_years())
		return -1;
	return 0;
}