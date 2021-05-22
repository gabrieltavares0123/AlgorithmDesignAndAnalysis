#include "Structs.cpp"

class LinkedList 
{
private:
	Head* head;
public:
	void create();
	void add(int data);
	void remove(int data);
	void print();
};