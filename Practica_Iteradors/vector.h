#pragma once
#include <vector>
#include <iostream>
using namespace std;

class vectorIT
{
public:
	vectorIT();
	~vectorIT();

	//Atributos
	int size;
	int numbers[];

	//iteradores Random Acces

	void printVectorForward(std::vector<int> myVector); //Imprime del primero al último
	void printVectorBackward(std::vector<int> myVector); //Imprime del último al primero
};

