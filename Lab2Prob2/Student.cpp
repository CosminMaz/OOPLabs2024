#include "Student.h"
#include <iostream>
#include <stdio.h>

void Student::SetName(std::string inp) {
	this->name = inp;
}

std::string Student::GetName() {
	return this->name;
}


int Student::SetGradeMath(float grade) {
	if (grade >= 1 && grade <= 10)
		this->MathGrade = grade;
	else
		return -1;
}

float Student::GetGradeMath() {
	return MathGrade;
}


int Student::SetGradeEnglish(float grade) {
	if (grade >= 1 && grade <= 10)
		this->EnglishGrade = grade;
	else
		return -1;
}

float Student::GetGradeEnglish() {
	return EnglishGrade;
}

int Student::SetGradeHistory(float grade) {
	if (grade >= 1 && grade <= 10)
		this->HistoryGrade = grade;
	else
		return -1;
}

float Student::GetGradeHistory() {
	return this->HistoryGrade;
}

void Student::CalcAverage() {
	this->AverageGrade = (this->MathGrade + this->EnglishGrade + this->HistoryGrade) / 3;
}

float Student::GetAverageGrade() {
	return this->AverageGrade;
}