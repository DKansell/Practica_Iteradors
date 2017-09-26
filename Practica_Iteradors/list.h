#pragma once
#include <list>
#include <iostream>
using namespace std;

class listIT
{
public:
	listIT();
	~listIT();

	void printListForward(std::list<int> myDeque);
	void printListBackward(std::list<int> myDeque);
};

