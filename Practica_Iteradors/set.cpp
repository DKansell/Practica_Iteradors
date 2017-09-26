#include "set.h"



setIT::setIT()
{
}


setIT::~setIT()
{
}


void setIT::printSetForward(std::set<int> mySet) {

	cout << "Printing the set forward" << endl;

	for (std::set<int>::iterator it = mySet.begin(); it != mySet.end(); ++it)
	{
		cout << *it << ' ';
	}
	cout << endl;
}

void setIT::printSetBackward(std::set<int> mySet) {

	cout << "Printing the set backwards: ";

	for (std::set<int>::reverse_iterator it = mySet.rbegin(); it != mySet.rend(); ++it)
	{
		cout << *it << ' ';
	}
	cout << endl;
}