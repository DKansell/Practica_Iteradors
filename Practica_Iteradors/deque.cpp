#include "deque.h"



dequeIT::dequeIT()
{
}


dequeIT::~dequeIT()
{
}


void dequeIT::printDequeForward(std::deque<int> myDeque) {

	cout << "Deque" << endl;

	for (std::deque<int>::iterator it = myDeque.begin(); it != myDeque.end(); ++it)
	{
		cout << *it << ' ';
	}
	cout << endl;
}
/*
void dequeIT::printDequeBackward(std::deque<int> myDeque) {

	std::deque<int>::iterator it2 = myDeque.end();

	while (it2 != myDeque.begin())
	{
		it2--;
		cout << *it2 << ' ';
		
	}

	cout << endl;
}
*/

void dequeIT::printDequeBackward(std::deque<int> myDeque) {

	for (std::deque<int>::reverse_iterator it = myDeque.rbegin(); it != myDeque.rend(); ++it)
	{
		cout << *it << ' ';
	}
	cout << endl;

}