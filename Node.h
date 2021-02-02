/*
 * Node.h
 *
 *  Created on: Feb 1, 2021
 *      Author: pc
 */

#ifndef NODE_H_
#define NODE_H_

class Node
{
private:
	static int counter;
	int id;
	int val;
public:
	Node(); 					// Default constructor
	Node(int iVal);				// Constructor with an initial value
	Node (const Node& iNode);	// Copy constructor to clone a node
	~Node();					// Destructor

	int getId () const;			// Read id
	int getVal() const;			// Read Val
	void setVal(int iVal);		// Sets the value

	void print() const;			// Print the node's info

};



#endif /* NODE_H_ */
