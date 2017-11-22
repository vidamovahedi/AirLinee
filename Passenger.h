/*
 * Passenger.h
 *
 *  Created on: Nov 21, 2017
 *      Author: Vida
 */

#ifndef PASSENGER_H_
#define PASSENGER_H_

#include <iostream>
using namespace std;

class Pessenger
{
public:
	string first_name;
	string last_name;
	string address;
	string number;

public:
	Pessenger()
	{

	}
	Pessenger(string f, string l, string a, string n)
	{
		first_name = f;
		last_name = l;
		address = a;
		number = n;
	}

};

#endif /* PASSENGER_H_ */
