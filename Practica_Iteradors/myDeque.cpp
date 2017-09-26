#include "myDeque.h"



myDeque::myDeque()
{
}


myDeque::~myDeque()
{
}


void myDeque::printDequeForward(std::deque<int> myDeque) {

	cout << "Printing the deque forward: ";

	for (std::deque<int>::iterator it = myDeque.begin(); it != myDeque.end(); ++it)
	{
		cout << *it << ' ';
	}

	cout << endl;
}
/*
void myDeque::printDequeBackward(std::deque<int> myDeque) {

	std::deque<int>::iterator it2 = myDeque.end();

	while (it2 != myDeque.begin())
	{
		it2--;
		cout << *it2 << ' ';
		
	}

	cout << endl;
}
*/

void myDeque::printDequeBackward(std::deque<int> myDeque) {

	cout << "Printing the deque backward: ";

	for (std::deque<int>::reverse_iterator it = myDeque.rbegin(); it != myDeque.rend(); ++it)
	{
		cout << *it << ' ';
	}

	cout << endl;

}