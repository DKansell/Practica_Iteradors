#include "myForwardList.h"



myForwardList::myForwardList()
{
}


myForwardList::~myForwardList()
{
}


void myForwardList::printForwardList(std::forward_list<int> myForwardList)
{
	std::cout << "Printing the fordward_list: ";

	for (std::forward_list<int>::iterator it = myForwardList.begin(); it != myForwardList.end(); ++it)
	{
		std::cout << *it << ' ';
	}

	std::cout << std::endl;
}