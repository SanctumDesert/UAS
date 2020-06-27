/*
 * Student.cpp
 *
 *  Created on: 27.06.2020
 *      Author: mariu
 */

#include "Student.h"
Student::Student(int _id, string _firstName, string _lastName, string _course):
		id(_id), firstName(_firstName), lastName(_lastName), course(_course){}

Student::Student(){}

Student::~Student() {
	// TODO Auto-generated destructor stub
}

string Student::getFirstName(){
	return this->firstName;
}

bool Student::operator==(Student &_other){
	bool value = false;
	if(id == _other.id){
		if(firstName == _other.firstName){
			if(lastName == _other.lastName){
				if(course == _other.course){
					value = true;
				}
			}
		}
	}
	return value;
}
