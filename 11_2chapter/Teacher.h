#pragma once

//#include <string>
#include "Person.h"

class Teacher : public Person
{
private:
	//std::string m_name; // person.h 만들고 삭제함

public:
	Teacher(const std::string& name_in = "No name")
		: Person(name_in)
	{
	}

	void teach()
	{
		std::cout << getName() << " is teaching" << std::endl;
	}

	friend std::ostream& operator << (std::ostream& out, const Teacher& teacher)
	{
		//out << teacher.m_name;
		out << teacher.getName();
		return out;
	}
};