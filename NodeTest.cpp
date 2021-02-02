/*
 * NodeTest.cpp
 *
 *  Created on: Feb 1, 2021
 *      Author: pc
 */


#include "Node.h"
#include "NodeList.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	// Testing constructer with value
	Node* a = new Node (5);

	// Testing cloning a node
	Node* b = new Node (*a);

	// Test setting value of a node
	b->setVal(8);

	// Testing print function
	cout << "Node's a information: ";
	a->print();
	cout << "Node's b information: ";
	b->print();
	cout << endl;

	//Testing NodeList
	NodeList* list = new NodeList();

	// adding nodes to the list
	list->addNode(a);
	list->addNode(b);

	// Printing all nodes info
	list->print();
	cout << endl;

	// Testing copy constructor of NodeList
	NodeList* list2 = new NodeList(*list);
	list2->print();
	cout << endl;


	// Searching list by id or value
	if (list->checkNodeByVal(5))
		cout << "The node with val=5 exists in the list" << endl;
	if (list->checkNodeById(1))
		cout << "The node with id=1 exists in the list" << endl;
	if (list->checkNodeById(10))
			cout << "The node with id=10 exists in the list" << endl;


	delete a;
	delete b;
}
