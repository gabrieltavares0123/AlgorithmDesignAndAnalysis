#include "LinkedList.h"

int main() {
	LinkedList linkedList;

	linkedList.create();
	linkedList.print();
	linkedList.add(1);
	linkedList.add(2);
	linkedList.add(3);
	linkedList.add(4);
	linkedList.print();

	linkedList.remove(1);
	linkedList.remove(4);
	linkedList.remove(3);
	linkedList.print();

	return 0;
}