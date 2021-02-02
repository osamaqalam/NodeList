/*
 * NodeList.h
 *
 *  Created on: Feb 1, 2021
 *      Author: pc
 */

#ifndef NODELIST_H_
#define NODELIST_H_

#include "Node.h"
#include <iostream>

class NodeList
{
private:
	static const size_t LIST_SIZE = 500; // the maximum items in the list
	Node* items;
	size_t numItems; // the number of items currently in the list
public:
	NodeList();									// Default constructor
	NodeList(const NodeList& iNodeList);		// Copy constructor
	~NodeList();								// Destructor

	void print() const;							// Print all the nodes
	bool checkNodeById (const int iId) const;	// Search the list for node with iId
	bool checkNodeByVal (const int iVal) const;	// Search the list for node with iVal

	Node* getItems () const;					// Return the items pointer
	Node getNodeAt(int index) const;			// Return the Node at index position
	void addNode(Node* iNode);					// Add a node to the list
	size_t getNumItems() const;					// Return the number of Nodes in the list

};

#endif /* NODELIST_H_ */
