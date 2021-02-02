/*
 * NodeList.cpp
 *
 *  Created on: Feb 1, 2021
 *      Author: pc
 */


#include "NodeList.h"
#include <iostream>
using namespace std;

// Default constructor
NodeList::NodeList()
{
	items = nullptr;
	numItems = 0;
}

// Copy constructor
NodeList::NodeList(const NodeList& iNodeList)
{
	Node* iItems = iNodeList.getItems();
	numItems = iNodeList.getNumItems();
	items = iItems;

}

// Destructor
NodeList::~NodeList(){
	for (size_t i=0; i<numItems; i++)
	{
		delete(&items[i]);
	}
	delete [] items;
}

// Print all the nodes
void NodeList::print() const
{
	for (size_t i=0; i<numItems; i++)
	{
		cout << "index " << i << " : ";
		items[i].print();
	}
}

// Search the list for node with iId
bool NodeList::checkNodeById (const int iId) const
{
	for (size_t i=0; i<numItems; i++)
	{
		if(items[i].getId() == iId)
			return true;
	}
	return false;
}

// Search the list for node with iVal
bool NodeList::checkNodeByVal (const int iVal) const
{
	for (size_t i=0; i<numItems; i++)
	{
		if(items[i].getVal() == iVal)
			return true;
	}
	return false;
}

// Return the items pointer
Node* NodeList::getItems () const
{
	return items;
}


// Return the Node at index position
Node NodeList::getNodeAt(int index) const
{
	return items[index];
}

// Add a node to the list
void NodeList::addNode(Node* iNode)
{
	if (iNode != nullptr){
		if (numItems == LIST_SIZE)
		{
			cerr<< "The list reached maximum capacity";
			return;
		}
		else if (numItems==0)
			items = new Node [0];
		items[numItems++] = *iNode;
	}
}

// Return the number of Nodes in the list
size_t NodeList::getNumItems() const
{
	return numItems;
}

