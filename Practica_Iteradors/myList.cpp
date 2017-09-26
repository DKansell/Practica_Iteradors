#include "myList.h"



myList::myList()
{
}


myList::~myList()
{
}

void myList::printListForward(std::list<int> myList) {

	cout << "Printing the list forward: ";

	for (std::list<int>::iterator it = myList.begin(); it != myList.end(); ++it)
	{
		cout << *it << ' ';
	}

	cout << endl;
}

void myList::printListBackward(std::list<int> myList) {

	cout << "Printing the list backward: ";

	for (std::list<int>::reverse_iterator it = myList.rbegin(); it != myList.rend(); ++it)
	{
		cout << *it << ' ';
	}

	cout << endl;
}