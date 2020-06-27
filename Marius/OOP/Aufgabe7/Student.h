/*
 * Student.h
 *
 *  Created on: 27.06.2020
 *      Author: mariu
 */

#ifndef STUDENT_H_
#define STUDENT_H_
#include <string>
#include <fstream>

using namespace std;

class Student {
public:
	Student(int _id, string _firstName, string _lastName, string _course);
	Student();
	virtual ~Student();

	string getFirstName();

	friend ostream& operator<<(ostream &out, Student &obj){
		out << obj.id << "\n" << obj.firstName << "\n" << obj.lastName << "\n" << obj.course << endl;
	}

	friend istream& operator>>(istream &in, Student &obj){
		in >> obj.id >> obj.firstName >> obj.lastName >> obj.course;
		return in;
	}

	bool operator==(Student &_other);

private:
	int id;
	string firstName;
	string lastName;
	string course;
};

#endif /* STUDENT_H_ */
