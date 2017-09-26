#include "vector.h"
#include "deque.h"
#include "list.h"
#include "set.h"
#include <conio.h>

int main() {
	std::vector<int> myVector{ 1,2,3,4,5 };
	std::deque<int> myDeque{ 1,2,3,4,5 };
	std::list<int> myList{ 1,2,3,4,5 };

	int mysetints[] = { 1,2,3,4,5 };
	std::set<int> mySet(mysetints, mysetints + 5);

	vectorIT vec;
	dequeIT deq;
	listIT lis;
	setIT seven;

	//vec.printVector(myVector);
	deq.printDequeForward(myDeque);
	deq.printDequeBackward(myDeque);
	lis.printListForward(myList);
	lis.printListBackward(myList);

	seven.printSetForward(mySet);
	seven.printSetBackward(mySet);

	_getch();
}