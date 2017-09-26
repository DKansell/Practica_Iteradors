#include "myVector.h"



myVector::myVector()
{
}


myVector::~myVector()
{
}

void myVector::printVectorForward(std::vector<int> myVector) {

	cout << "Printing the vector forward: ";

	for (std::vector<int>::iterator it = myVector.begin(); it != myVector.end(); ++it)
	{
		cout << *it << ' ';
	}

	cout << endl;
}

void myVector::printVectorBackward(std::vector<int> myVector) {

	cout << "Printing the vector backward: ";

	for (std::vector<int>::reverse_iterator it = myVector.rbegin(); it != myVector.rend(); ++it)
	{
		cout << *it << ' ';
	}

	cout << endl;
}