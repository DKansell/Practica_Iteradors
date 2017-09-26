#include "vector.h"



vectorIT::vectorIT()
{
}


vectorIT::~vectorIT()
{
}

void vectorIT::printVector(std::vector<int> myVector) {

	for (std::vector<int>::iterator it = myVector.begin(); it != myVector.end(); ++it)
	{
		cout << *it << ' ';
	}
}