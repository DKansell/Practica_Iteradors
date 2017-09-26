#pragma once
#include <deque>
#include <iostream>
using namespace std;

class myDeque
{
public:
	myDeque();
	~myDeque();

	//iteradores Random Acces

	void printDequeForward(std::deque<int> deq);
	void printDequeBackward(std::deque<int> deq);
};

