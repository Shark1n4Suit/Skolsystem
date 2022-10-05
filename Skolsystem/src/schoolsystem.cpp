#include "schoolsystem.h"


void SchoolSystem::run()
{
	int counter = 0;
	while (true)
	{
		int input = 0;
		std::cout << "What do you want to do?" << "\n";
		std::cout << "1 Add new student" << "\n";
		std::cout << "2 Add new class" << "\n";
		std::cout << "3 Add student in new/exsisting class" << "\n";
		std::cout << "4 Check if student is in system" << "\n";
		std::cout << "5 Get student info" << "\n";
		std::cout << "6 Remove student from class" << "\n";
		std::cout << "7 Remove student from system" << "\n";
		std::cout << "8 Check class info" << "\n";
		std::cin >> input;

		
		if (input == 1)
		{
			std::string newStudentName = "";
			int newStudentAge = 0;
			std::cout << "Please write Name and age of student" << "\n";
			std::cout << "Name" << "\n";
			std::cin >> newStudentName;
			std::cout << "Age" << "\n";
			std::cin >> newStudentAge;
			Student student;
			student.name = newStudentName;
			student.age = newStudentAge;
			students.push_back(student);


		}
		if (input == 2)
		{

		}
		if (input == 3)
		{

		}
		if (input == 4)
		{

		}
		if (input == 5)
		{

		}
		if (input == 6)
		{

		}
		if (input == 7)
		{

		}
		if (input == 8)
		{

		}
		std::cout<< "loop: " << counter << "\n";
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


