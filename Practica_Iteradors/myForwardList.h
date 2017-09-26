#pragma once
#include <forward_list>
#include <iostream>

class myForwardList
{
public:
	myForwardList();
	~myForwardList();

	//iteradores Forward

	void printForwardList(std::forward_list<int> myForwardList);
};

