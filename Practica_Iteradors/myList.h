#pragma once
#include <list>
#include <iostream>
using namespace std;

class myList
{
public:
	myList();
	~myList();

	//iteradores Bidirectional

	void printListForward(std::list<int> myList);
	void printListBackward(std::list<int> myList);
};

