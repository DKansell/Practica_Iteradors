#pragma once
#include <vector>
#include <iostream>
using namespace std;

class myVector
{
public:
	myVector();
	~myVector();

	//Atributos
	int size;
	int numbers[];

	//iteradores Random Acces

	void printVectorForward(std::vector<int> myVector); //Imprime del primero al �ltimo
	void printVectorBackward(std::vector<int> myVector); //Imprime del �ltimo al primero
};

