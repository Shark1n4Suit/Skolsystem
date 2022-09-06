#pragma once
#include "student.h"
#include <vector>
#include <iostream>


class SchoolSystem
{
	public:
	void run();
	void addStudent();
	void RemoveStudent();



	std::vector<Student> students;
	std::vector<std::string> schoolClass;

};
