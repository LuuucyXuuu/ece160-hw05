#include "Student.h"

Student::Student(std::string fn, std::string ln, int y, Major m){
	_first_name = fn;
	_last_name = ln;
	_grad_year = y;
	_major = m;
	return;
}

Student::~Student(){
	return;
}

float Student::getGpa(){
	float sum = 0;
	int i;
	for(i=0,i<_grades.size(),i++){
	sum = _grades[i] + sum;
	}
	return sum / _grades.size();
}

void Student::addGrade(float grade){
	_grades.push_back (grade);
	return;
	
}
std::string Student::majorString(Major m){
	
}
void Student::printInfo(){
	  
}