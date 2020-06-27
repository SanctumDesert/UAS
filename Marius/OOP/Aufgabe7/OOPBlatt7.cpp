//============================================================================
// Name        : OOPBlatt7.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <fstream>
#include <cassert>
#include "Student.h"
#include "ComputationErrors.h"

using namespace std;

double division(double _first, double _second){
	if(_second == 0){
		throw ComputationErrors();
	}
	double result = _first / _second;
	return result;
}

void divisionCaller(){
	double result = 0;
	try{
		result = division(42,0);
	}catch (ComputationErrors e) {
		cout << e.what() << endl;
	}
}

int main() {
	Student student1 = Student(1, "Marius", "Illmann", "Informatik");
	Student student2 = Student();

	ofstream out("students.dat", ifstream::binary);
	out << student1;
	out.close();

	ifstream in("students.dat", ifstream::binary);
	in >> student2;
	in.close();

	assert(student1 == student2);

	divisionCaller();
	cout << "ende " << endl;
	return 0;
}
