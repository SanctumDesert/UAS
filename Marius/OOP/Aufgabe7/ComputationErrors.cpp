/*
 * ComputationErrors.cpp
 *
 *  Created on: 27.06.2020
 *      Author: mariu
 */

#include "ComputationErrors.h"

ComputationErrors::ComputationErrors() {
	// TODO Auto-generated constructor stub

}

ComputationErrors::~ComputationErrors() {
	// TODO Auto-generated destructor stub
}

const char* ComputationErrors::what () const throw (){
	return "Du hast versuht mit 0 zu teilen !";
}

