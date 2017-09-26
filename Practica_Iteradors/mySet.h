#pragma once
#include <set>
#include <iostream>
using namespace std;

class mySet
{
public:
	mySet();
	~mySet();

	//iteradores Bidirectional

	void printSetForward(std::set<int> mySet);
	void printSetBackward(std::set<int> mySet);
};

