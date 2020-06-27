/*
 * ComputationErrors.h
 *
 *  Created on: 27.06.2020
 *      Author: mariu
 */

#ifndef COMPUTATIONERRORS_H_
#define COMPUTATIONERRORS_H_
#include <exception>

class ComputationErrors: public std::exception {
public:
	ComputationErrors();
	virtual ~ComputationErrors();

	const char * what () const throw ();
};

#endif /* COMPUTATIONERRORS_H_ */
