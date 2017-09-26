#pragma once
#include <deque>
#include <iostream>
using namespace std;

class dequeIT
{
public:
	dequeIT();
	~dequeIT();

	void printDequeForward(std::deque<int> myDeque);
	void printDequeBackward(std::deque<int> myDeque);
};

