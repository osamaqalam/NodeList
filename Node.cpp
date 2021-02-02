/*
 * Node.cpp
 *
 *  Created on: Feb 1, 2021
 *      Author: pc
 */

#include "Node.h"
#include <iostream>
using namespace std;

int Node::counter = 0;

// Default constructor
Node::Node()
{
	id = counter++;
	val = NULL;
}

// Constructor with an initial value
Node::Node(int iVal)
{
	id = counter++;
	val = iVal;
}

// Copy constructor to clone a node
Node::Node (const Node& iNode)
{
	id = counter++;
	val = iNode.val;
}

// Destructor
Node::~Node()
{}

// Read id
int Node::getId () const
{
	return id;
}

// Read Val
int Node::getVal() const
{
	return val;
}

// Sets the value
void Node::setVal(int iVal)
{
	val = iVal;
}

// Print the node's info
void Node::print() const
{
	cout << "The node's id = " << id << " , The node's val = " << val << endl;
}

