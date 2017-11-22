/*
 * LinkedList.h
 *
 *  Created on: Nov 21, 2017
 *      Author: Vida
 */

#include <iostream>
#include <string>
using namespace std;
template <class T>
struct node
{
public:
	T data;
	node * next;
	node();
	node(T);

};
template <class T>
node<T> ::node()
{
	data = NULL;
	next = NULL;
}

template <class T>
node<T> ::node(T n)
{
	data = n;
	next = NULL;
}
template <class T>
class LinkedList
{
public:
	node<T> * head;
	LinkedList();
	void insert(T);
	void remove(T);
	void search(T);
	void  display();
	~LinkedList();
};
template <class T>
LinkedList <T> ::LinkedList()
{
	head = NULL;
}

template <class T>
void LinkedList <T> ::insert(T value)
{
	node <T> * p = new node <T>(value);
	if (head == NULL)
	{
		head = p;
		return;
	}
	p->next = head;
	head = p;
}

template < class T >
void LinkedList <T> ::remove(T value)
{
	if (!head)
	{
		return;
	}
	node <T> * prev = head;
	node <T> * p = head->next;

	if (!prev->next)
	{
		delete prev;
		head = NULL;
		cout << "The Passenger is Deleted\n\n";
		return;
	}
	while (p != NULL)
	{
		if ((p->data.first_name.compare(value.first_name) && p->data.last_name.compare(value.last_name))== NULL)
		{
			node <T> * remove = p;
			prev->next = remove->next;
			delete p;
			cout << "The Passenger is Deleted\n\n";
			return;
		}
		p = p->next;
		prev = prev->next;
	}
}

template < class T >
void LinkedList <T> ::search(T value)
{

	if (!head)
	{
		return;
	}

	node <T> * prev = head;
	node <T> * p = head->next;

	if (!prev->next)
	{
		if ((prev->data.first_name.compare(value.first_name) && prev->data.last_name.compare(value.last_name)) == NULL)
		{
			cout << "First Name: " << prev->data.first_name << endl;
			cout << "Last Name: " << prev->data.last_name << endl;
			cout << "Address: " << prev->data.address << endl;
			cout << "Phone Number: " << prev->data.number << endl;
		}
		return;
	}
	while (p != NULL)
	{
		if ((p->data.first_name.compare(value.first_name) && p->data.last_name.compare(value.last_name)) == NULL)
		{
			cout << "First Name: " << p->data.first_name << endl;
			cout << "Last Name: " << p->data.last_name << endl;
			cout << "Address: " << p->data.address << endl;
			cout << "Phone Number: " << p->data.number << endl;
		}
		p = p->next;
		prev = prev->next;
	}
}

template < class T >
void LinkedList <T> ::display()
{
	if (!head)
	{
		return;
	}
	for (node <T> * ptr = head; ptr != NULL; ptr = ptr->next)
	{
		cout << ptr->data.first_name << " " << ptr->data.last_name << " [ " << ptr->data.address << " ] " << " [ " << ptr->data.number << " ] "<< endl;
	}
}

template < class T >
LinkedList <T> :: ~LinkedList()
{
	node <T> * remove;
	while (head != NULL)
	{
		remove = head;
		head = head->next;
		delete remove;
	}
}



