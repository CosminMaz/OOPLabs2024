#pragma once
#include <string>
#include <iostream>

class Student
{
private:
	std::string name;
	float MathGrade;
	float EnglishGrade;
	float HistoryGrade;
	float AverageGrade;
public:
	void SetName(std::string inp);
	std::string GetName();

	int SetGradeMath(float grade);
	float GetGradeMath();

	int SetGradeEnglish(float grade);
	float GetGradeEnglish();

	int SetGradeHistory(float grade);
	float GetGradeHistory();

	void CalcAverage();
	float GetAverageGrade();

};

