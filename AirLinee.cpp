/*
 * AirLinee.cpp
 *
 *  Created on: Nov 21, 2017
 *      Author: Vida
 */


#include <iostream>
#include "LinkedList.h"
#include "OrderedLinkList.h"
#include "Passenger.h"

using namespace std;

int main(){

	cout << "*** DELTA AIRLINE ***" << endl;

	bool flag = true;
	LinkedList<Pessenger> flight100;
	LinkedList<Pessenger> flight200;
	LinkedList<Pessenger> flight300;
	LinkedList<Pessenger> flight400;

	int flight_number;
	string first_name;
	string last_name;
	string address;
	string number;

	do{
		cout << "\n\nPlease choose an operation: " << endl;
		cout << "A(Add) | S(Search) | D(Delete) | L(List) | Q(Quit):";
		char ch;
		cin >> ch;

		switch (ch)
		{
		case 'A':
		{
					cout << "Enter Flight Number: ";
					cin >> flight_number;
					cout << "Enter First name: ";
					cin >> first_name;
					cout << "Enter Last name: ";
					cin >> last_name;
					cout << "Enter Address: ";
					//cin >> address;
					cin.ignore(1000, '\n');
					getline(cin, address);
					cout << "Enter Phone Number: ";
					cin >> number;
					Pessenger obj(first_name, last_name, address, number);
					if (flight_number == 100)
						flight100.insert(obj);
					if (flight_number == 200)
						flight200.insert(obj);
					if (flight_number == 300)
						flight300.insert(obj);
					if (flight_number == 400)
						flight400.insert(obj);

					break;
		}
		case 'S':
		{
					cout << "Enter FLight Number: ";
					cin >> flight_number;
					cout << "Enter First name: ";
					cin >> first_name;
					cout << "Enter Last name: ";
					cin >> last_name;

					Pessenger obj(first_name, last_name, "", "");
					if (flight_number == 100)
						flight100.search(obj);
					if (flight_number == 200)
						flight200.search(obj);
					if (flight_number == 300)
						flight300.search(obj);
					if (flight_number == 400)
						flight400.search(obj);

					break;
		}
		case 'D':
		{
					cout << "Enter FLight Number: ";
					cin >> flight_number;
					cout << "Enter First name: ";
					cin >> first_name;
					cout << "Enter Last name: ";
					cin >> last_name;

					Pessenger obj(first_name, last_name, "", "");

					if (flight_number == 100)
						flight100.remove(obj);
					if (flight_number == 200)
						flight200.remove(obj);
					if (flight_number == 300)
						flight300.remove(obj);
					if (flight_number == 400)
						flight400.remove(obj);

					break;

		}
		case 'L':
		{
					cout << "Enter FLight Number: ";
					cin >> flight_number;
					if (flight_number == 100)
						flight100.display();
					if (flight_number == 200)
						flight200.display();
					if (flight_number == 300)
						flight300.display();
					if (flight_number == 400)
						flight400.display();
					break;

		}
		case 'Q':
		{
					flag = false;
					break;
		}
		}

	} while (flag);


}
