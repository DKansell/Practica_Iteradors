#include "forward_list.h"



forward_listIT::forward_listIT()
{
}


forward_listIT::~forward_listIT()
{
}


void forward_listIT::printForwardList(std::forward_list<int> myForwardList)
{
	for (std::forward_list<int>::iterator it = myForwardList.begin(); it != myForwardList.end(); ++it)
	{
		std::cout << *it << ' ';
	}
}