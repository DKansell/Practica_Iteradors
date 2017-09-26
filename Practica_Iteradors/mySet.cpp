#include "mySet.h"



mySet::mySet()
{
}


mySet::~mySet()
{
}

void mySet::printSetForward(std::set<int> mySet) {

	cout << "Printing the set forward: ";

	for (std::set<int>::iterator it = mySet.begin(); it != mySet.end(); ++it)
	{
		cout << *it << ' ';
	}

	cout << endl;
}

void mySet::printSetBackward(std::set<int> mySet) {

	cout << "Printing the set backward: ";

	for (std::set<int>::reverse_iterator it = mySet.rbegin(); it != mySet.rend(); ++it)
	{
		cout << *it << ' ';
	}

	cout << endl;
}