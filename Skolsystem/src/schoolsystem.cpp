#include "schoolsystem.h"


void SchoolSystem::run()
{
	int counter = 0;
	while (true)
	{
		std::count << "loop: " << counter << "\n";
		counter++;
		std::cin.get();
	}
}

void SchoolSystem::addStudent()
{
	Student student;
	student.name = "blabla";
	student.age = 123;
	students.push_back(student);

}

void SchoolSystem::RemoveStudent()
{

}