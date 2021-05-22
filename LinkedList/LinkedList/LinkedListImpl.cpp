#include "LinkedList.h"
#include <iostream>

using namespace std;

void LinkedList::create() 
{
	Head* head = new Head();
	head->first = nullptr;
	LinkedList::head = head;
}

void LinkedList::add(int data) 
{
	Node* newNode = new Node();
	newNode->data = data;
	newNode->next = LinkedList::head->first;
	LinkedList::head->first = newNode;
}

void LinkedList::remove(int target) 
{
	Node* temp = LinkedList::head->first;
	Node* prev = nullptr;

	if (temp != nullptr && temp->data == target) 
	{
		LinkedList::head->first = temp->next;
		delete temp;
	}
	else 
	{
		// To be added: Maybe(or not) use a search implementation. 
		// Remember: Maybe need(for sure need if yes) to adapt to return a Node type.
		while (temp != nullptr && temp-> data != target) 
		{
			prev = temp;
			temp = temp->next;
		}

		if (temp == nullptr) 
		{
			cout << "Can't find " << target << "." << endl;
		}
		else 
		{
			prev->next = temp->next;
			delete temp;
		}
	}
}

void LinkedList::print() 
{
	Node* node = LinkedList::head->first;

	while(node != nullptr) 
	{
		cout << node->data << endl;
		node = node->next;
	}
}