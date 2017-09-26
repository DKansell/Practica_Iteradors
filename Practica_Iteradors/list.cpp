#include "list.h"



listIT::listIT()
{
}


listIT::~listIT()
{
}

void listIT::printListForward(std::list<int> myList) {

	cout << "List" << endl;

	for (std::list<int>::iterator it = myList.begin(); it != myList.end(); ++it)
	{
		cout << *it << ' ';
	}
	cout << endl;
}

void listIT::printListBackward(std::list<int> myList) {

	for (std::list<int>::reverse_iterator it = myList.rbegin(); it != myList.rend(); ++it)
	{
		cout << *it << ' ';
	}
	cout << endl;
}