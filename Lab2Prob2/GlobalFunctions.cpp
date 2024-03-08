#include "GlobalFunctions.h"
#include "Student.h"
#include <iostream>
#include <stdio.h>


int CompareName(Student firstStudent, Student secondStudent) {
	if (firstStudent.GetName() > secondStudent.GetName())
		return 1;
	else if (firstStudent.GetName() < secondStudent.GetName())
		return -1;
	else
		return 0;
}

int CompareMathGrade(Student firstStudent, Student secondStudent) {
	if (firstStudent.GetGradeMath() > secondStudent.GetGradeMath())
		return 1;
	else if (firstStudent.GetGradeMath() < secondStudent.GetGradeMath())
		return -1;
	else
		return 0;
}

int CompareEnglishGrade(Student firstStudent, Student secondStudent) {
	if (firstStudent.GetGradeEnglish() > secondStudent.GetGradeEnglish())
		return 1;
	else if (firstStudent.GetGradeEnglish() < secondStudent.GetGradeEnglish())
		return -1;
	else
		return 0;
}

int CompareHistoryGrade(Student firstStudent, Student secondStudent) {
	if (firstStudent.GetGradeHistory() > secondStudent.GetGradeHistory())
		return 1;
	else if (firstStudent.GetGradeHistory() < secondStudent.GetGradeHistory())
		return -1;
	else
		return 0;
}

int CompareAverageGrade(Student firstStudent, Student secondStudent) {
	if (firstStudent.GetAverageGrade() > secondStudent.GetAverageGrade())
		return 1;
	else if (firstStudent.GetAverageGrade() > secondStudent.GetAverageGrade())
		return -1;
	else
		return 0;
}