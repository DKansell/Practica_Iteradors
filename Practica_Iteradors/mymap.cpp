#include "mymap.h"



myMap::myMap()
{
}


myMap::~myMap()
{
}

void myMap::printMapForward(std::map<char, int> myMap)
{
	std::cout << "Printing the map forward: ";

	for (std::map<char, int>::iterator it = myMap.begin(); it != myMap.end(); ++it)
	{
		std::cout << it->first << '-' << it->second << std::endl;
	}

	std::cout << std::endl;
}
