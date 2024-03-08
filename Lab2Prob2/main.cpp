#include <iostream>
#include <cstring>
#include <stdio.h>
#include "Student.h"
#include "GlobalFunctions.h"


int main() {
	Student s1;
	s1.SetName("Ionel Pastrascu");
	s1.SetGradeEnglish(6.9);
	s1.SetGradeMath(9.99);
	s1.SetGradeHistory(8.01);
	s1.CalcAverage();
	
	Student s2;
	s2.SetName("Yone Blossom");
	s2.SetGradeMath(4.32);
	s2.SetGradeEnglish(3.65);
	s2.SetGradeHistory(8.42);
	s2.CalcAverage();

	printf("%d\n", CompareMathGrade(s1, s2));
	printf("%d\n", CompareEnglishGrade(s1, s2));
	printf("%d\n", CompareHistoryGrade(s1, s2));
	printf("%d\n", CompareAverageGrade(s1, s2));

	return 0;
}